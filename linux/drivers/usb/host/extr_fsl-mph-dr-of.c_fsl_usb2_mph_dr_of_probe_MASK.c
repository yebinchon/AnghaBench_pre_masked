
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct fsl_usb2_platform_data {int invert_drvvbus; int invert_pwr_fault; scalar_t__ controller_ver; scalar_t__ have_sysif_regs; void* check_phy_clk_valid; void* has_fsl_erratum_14; void* has_fsl_erratum_a006918; void* has_fsl_erratum_a005697; void* has_fsl_erratum_a005275; void* has_fsl_erratum_a007792; int phy_mode; int operating_mode; int port_enables; } ;
struct fsl_usb2_dev_data {int * drivers; int op_mode; } ;
struct device_node {int dummy; } ;
typedef int data ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (unsigned char const*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 struct platform_device* FUNC_6 (struct platform_device*,struct fsl_usb2_platform_data*,int ,unsigned int) ;
 int VAR_5 ;
 struct fsl_usb2_dev_data* FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct fsl_usb2_platform_data*,scalar_t__,int) ;
 int FUNC_9 (struct fsl_usb2_platform_data*,int ,int) ;
 int FUNC_10 (struct device_node*) ;
 scalar_t__ FUNC_11 (struct device_node*,char*) ;
 unsigned char* FUNC_12 (struct device_node*,char*,int *) ;
 struct of_device_id* FUNC_13 (int ,TYPE_1__*) ;
 void* FUNC_14 (struct device_node*,char*) ;
 scalar_t__ FUNC_15 (struct device_node*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_6)
{
 struct device_node *VAR_7 = VAR_6->dev.of_node;
 struct platform_device *VAR_8;
 struct fsl_usb2_platform_data VAR_9, *VAR_10;
 struct fsl_usb2_dev_data *VAR_11;
 const struct of_device_id *VAR_12;
 const unsigned char *VAR_13;
 static unsigned int VAR_14;
 int VAR_15;

 if (!FUNC_10(VAR_7))
  return -VAR_0;

 VAR_12 = FUNC_13(VAR_5, &VAR_6->dev);
 if (!VAR_12)
  return -VAR_0;

 VAR_10 = &VAR_9;
 if (VAR_12->data)
  FUNC_8(VAR_10, VAR_12->data, sizeof(VAR_9));
 else
  FUNC_9(VAR_10, 0, sizeof(VAR_9));

 VAR_11 = FUNC_7(VAR_7);

 if (FUNC_11(VAR_7, "fsl-usb2-mph")) {
  if (FUNC_12(VAR_7, "port0", ((void*)0)))
   VAR_10->port_enables |= VAR_2;

  if (FUNC_12(VAR_7, "port1", ((void*)0)))
   VAR_10->port_enables |= VAR_3;

  VAR_10->operating_mode = VAR_1;
 } else {
  if (FUNC_12(VAR_7, "fsl,invert-drvvbus", ((void*)0)))
   VAR_10->invert_drvvbus = 1;

  if (FUNC_12(VAR_7, "fsl,invert-pwr-fault", ((void*)0)))
   VAR_10->invert_pwr_fault = 1;


  VAR_10->operating_mode = VAR_11->op_mode;
 }

 VAR_13 = FUNC_12(VAR_7, "phy_type", ((void*)0));
 VAR_10->phy_mode = FUNC_3(VAR_13);
 VAR_10->controller_ver = FUNC_15(VAR_7);


 VAR_10->has_fsl_erratum_a007792 =
  FUNC_14(VAR_7, "fsl,usb-erratum-a007792");
 VAR_10->has_fsl_erratum_a005275 =
  FUNC_14(VAR_7, "fsl,usb-erratum-a005275");
 VAR_10->has_fsl_erratum_a005697 =
  FUNC_14(VAR_7, "fsl,usb_erratum-a005697");
 VAR_10->has_fsl_erratum_a006918 =
  FUNC_14(VAR_7, "fsl,usb_erratum-a006918");
 VAR_10->has_fsl_erratum_14 =
  FUNC_14(VAR_7, "fsl,usb_erratum-14");





 VAR_10->check_phy_clk_valid =
  FUNC_14(VAR_7, "phy-clk-valid");

 if (VAR_10->have_sysif_regs) {
  if (VAR_10->controller_ver == VAR_4) {
   FUNC_5(&VAR_6->dev, "Could not get controller version\n");
   return -VAR_0;
  }
 }

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_11->drivers); VAR_15++) {
  if (!VAR_11->drivers[VAR_15])
   continue;
  VAR_8 = FUNC_6(VAR_6, VAR_10,
     VAR_11->drivers[VAR_15], VAR_14);
  if (FUNC_1(VAR_8)) {
   FUNC_4(&VAR_6->dev, "Can't register usb device\n");
   return FUNC_2(VAR_8);
  }
 }
 VAR_14++;
 return 0;
}
