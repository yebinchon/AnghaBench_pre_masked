
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct resource {int start; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct fsl_upm_nand {int mchip_count; int* rnb_gpio; int chip_delay; int wait_flags; int last_ctrl; TYPE_1__* dev; int io_base; int * mchip_offsets; int upm_cmd_offset; int upm_addr_offset; int upm; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int const) ;
 void* FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,struct fsl_upm_nand*) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct fsl_upm_nand*,int ,struct resource*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (struct fsl_upm_nand*) ;
 struct fsl_upm_nand* FUNC_12 (int,int ) ;
 int FUNC_13 (int ,int ,struct resource*) ;
 int FUNC_14 (int ,int) ;
 int * FUNC_15 (int ,char*,int*) ;
 int FUNC_16 (struct resource*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_7)
{
 struct fsl_upm_nand *VAR_8;
 struct resource VAR_9;
 const __be32 *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_8 = FUNC_12(sizeof(*VAR_8), VAR_4);
 if (!VAR_8)
  return -VAR_1;

 VAR_12 = FUNC_13(VAR_7->dev.of_node, 0, &VAR_9);
 if (VAR_12) {
  FUNC_2(&VAR_7->dev, "can't get IO base\n");
  goto err1;
 }

 VAR_12 = FUNC_6(VAR_9.start, &VAR_8->upm);
 if (VAR_12) {
  FUNC_2(&VAR_7->dev, "can't find UPM\n");
  goto err1;
 }

 VAR_10 = FUNC_15(VAR_7->dev.of_node, "fsl,upm-addr-offset",
          &VAR_13);
 if (!VAR_10 || VAR_13 != sizeof(uint32_t)) {
  FUNC_2(&VAR_7->dev, "can't get UPM address offset\n");
  VAR_12 = -VAR_0;
  goto err1;
 }
 VAR_8->upm_addr_offset = *VAR_10;

 VAR_10 = FUNC_15(VAR_7->dev.of_node, "fsl,upm-cmd-offset", &VAR_13);
 if (!VAR_10 || VAR_13 != sizeof(uint32_t)) {
  FUNC_2(&VAR_7->dev, "can't get UPM command offset\n");
  VAR_12 = -VAR_0;
  goto err1;
 }
 VAR_8->upm_cmd_offset = *VAR_10;

 VAR_10 = FUNC_15(VAR_7->dev.of_node,
          "fsl,upm-addr-line-cs-offsets", &VAR_13);
 if (VAR_10 && (VAR_13 / sizeof(uint32_t)) > 0) {
  VAR_8->mchip_count = VAR_13 / sizeof(uint32_t);
  if (VAR_8->mchip_count >= VAR_6) {
   FUNC_2(&VAR_7->dev, "too much multiple chips\n");
   goto err1;
  }
  for (VAR_14 = 0; VAR_14 < VAR_8->mchip_count; VAR_14++)
   VAR_8->mchip_offsets[VAR_14] = FUNC_0(VAR_10[VAR_14]);
 } else {
  VAR_8->mchip_count = 1;
 }

 for (VAR_14 = 0; VAR_14 < VAR_8->mchip_count; VAR_14++) {
  VAR_8->rnb_gpio[VAR_14] = -1;
  VAR_11 = FUNC_14(VAR_7->dev.of_node, VAR_14);
  if (VAR_11 >= 0) {
   VAR_12 = FUNC_10(VAR_11, FUNC_3(&VAR_7->dev));
   if (VAR_12) {
    FUNC_2(&VAR_7->dev,
     "can't request RNB gpio #%d\n", VAR_14);
    goto err2;
   }
   FUNC_8(VAR_11);
   VAR_8->rnb_gpio[VAR_14] = VAR_11;
  } else if (VAR_11 == -VAR_0) {
   FUNC_2(&VAR_7->dev, "RNB gpio #%d is invalid\n", VAR_14);
   goto err2;
  }
 }

 VAR_10 = FUNC_15(VAR_7->dev.of_node, "chip-delay", ((void*)0));
 if (VAR_10)
  VAR_8->chip_delay = FUNC_1(VAR_10);
 else
  VAR_8->chip_delay = 50;

 VAR_10 = FUNC_15(VAR_7->dev.of_node, "fsl,upm-wait-flags", &VAR_13);
 if (VAR_10 && VAR_13 == sizeof(uint32_t))
  VAR_8->wait_flags = FUNC_1(VAR_10);
 else
  VAR_8->wait_flags = VAR_2 |
      VAR_3;

 VAR_8->io_base = FUNC_5(&VAR_7->dev, VAR_9.start,
         FUNC_16(&VAR_9));
 if (!VAR_8->io_base) {
  VAR_12 = -VAR_1;
  goto err2;
 }

 VAR_8->dev = &VAR_7->dev;
 VAR_8->last_ctrl = VAR_5;

 VAR_12 = FUNC_7(VAR_8, VAR_7->dev.of_node, &VAR_9);
 if (VAR_12)
  goto err2;

 FUNC_4(&VAR_7->dev, VAR_8);

 return 0;
err2:
 for (VAR_14 = 0; VAR_14 < VAR_8->mchip_count; VAR_14++) {
  if (VAR_8->rnb_gpio[VAR_14] < 0)
   break;
  FUNC_9(VAR_8->rnb_gpio[VAR_14]);
 }
err1:
 FUNC_11(VAR_8);

 return VAR_12;
}
