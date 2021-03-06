
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_nand_info {int xfer_type; int ecc_opt; void* elm_of_node; int gpmc_cs; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int ARRAY_SIZE (int *) ;
 int EINVAL ;
 int OMAP_ECC_BCH16_CODE_HW ;
 int OMAP_ECC_BCH4_CODE_HW ;
 int OMAP_ECC_BCH4_CODE_HW_DETECTION_SW ;
 int OMAP_ECC_BCH8_CODE_HW ;
 int OMAP_ECC_BCH8_CODE_HW_DETECTION_SW ;
 int OMAP_ECC_HAM1_CODE_HW ;
 int OMAP_ECC_HAM1_CODE_SW ;
 int dev_dbg (struct device*,char*) ;
 int dev_err (struct device*,char*) ;
 int * nand_xfer_types ;
 void* of_parse_phandle (struct device_node*,char*,int ) ;
 scalar_t__ of_property_read_string (struct device_node*,char*,char const**) ;
 scalar_t__ of_property_read_u32 (struct device_node*,char*,int *) ;
 int strcasecmp (char const*,int ) ;
 int strcmp (char const*,char*) ;

__attribute__((used)) static int omap_get_dt_info(struct device *dev, struct omap_nand_info *info)
{
 struct device_node *child = dev->of_node;
 int i;
 const char *s;
 u32 cs;

 if (of_property_read_u32(child, "reg", &cs) < 0) {
  dev_err(dev, "reg not found in DT\n");
  return -EINVAL;
 }

 info->gpmc_cs = cs;


 info->elm_of_node = of_parse_phandle(child, "ti,elm-id", 0);
 if (!info->elm_of_node) {
  info->elm_of_node = of_parse_phandle(child, "elm_id", 0);
  if (!info->elm_of_node)
   dev_dbg(dev, "ti,elm-id not in DT\n");
 }


 if (of_property_read_string(child, "ti,nand-ecc-opt", &s)) {
  dev_err(dev, "ti,nand-ecc-opt not found\n");
  return -EINVAL;
 }

 if (!strcmp(s, "sw")) {
  info->ecc_opt = OMAP_ECC_HAM1_CODE_SW;
 } else if (!strcmp(s, "ham1") ||
     !strcmp(s, "hw") || !strcmp(s, "hw-romcode")) {
  info->ecc_opt = OMAP_ECC_HAM1_CODE_HW;
 } else if (!strcmp(s, "bch4")) {
  if (info->elm_of_node)
   info->ecc_opt = OMAP_ECC_BCH4_CODE_HW;
  else
   info->ecc_opt = OMAP_ECC_BCH4_CODE_HW_DETECTION_SW;
 } else if (!strcmp(s, "bch8")) {
  if (info->elm_of_node)
   info->ecc_opt = OMAP_ECC_BCH8_CODE_HW;
  else
   info->ecc_opt = OMAP_ECC_BCH8_CODE_HW_DETECTION_SW;
 } else if (!strcmp(s, "bch16")) {
  info->ecc_opt = OMAP_ECC_BCH16_CODE_HW;
 } else {
  dev_err(dev, "unrecognized value for ti,nand-ecc-opt\n");
  return -EINVAL;
 }


 if (!of_property_read_string(child, "ti,nand-xfer-type", &s)) {
  for (i = 0; i < ARRAY_SIZE(nand_xfer_types); i++) {
   if (!strcasecmp(s, nand_xfer_types[i])) {
    info->xfer_type = i;
    return 0;
   }
  }

  dev_err(dev, "unrecognized value for ti,nand-xfer-type\n");
  return -EINVAL;
 }

 return 0;
}
