
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {int num_resources; int resource; struct device dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct ci_hdrc_usb2_priv {int clk; int ci_pdev; } ;
struct ci_hdrc_platform_data {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ci_hdrc_platform_data VAR_3 ;
 int FUNC_2 (struct device*,int ,int ,struct ci_hdrc_platform_data*) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,char*,int) ;
 struct ci_hdrc_platform_data* FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*,int *) ;
 struct ci_hdrc_platform_data* FUNC_9 (struct device*,int,int ) ;
 struct ci_hdrc_usb2_priv* FUNC_10 (struct device*,int,int ) ;
 struct of_device_id* FUNC_11 (int ,struct device*) ;
 int FUNC_12 (struct platform_device*,struct ci_hdrc_usb2_priv*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct ci_hdrc_usb2_priv *VAR_7;
 struct ci_hdrc_platform_data *VAR_8 = FUNC_6(VAR_6);
 int VAR_9;
 const struct of_device_id *VAR_10;

 if (!VAR_8) {
  VAR_8 = FUNC_9(VAR_6, sizeof(*VAR_8), VAR_2);
  if (!VAR_8)
   return -VAR_0;
  *VAR_8 = VAR_3;
 }

 VAR_10 = FUNC_11(VAR_4, &VAR_5->dev);
 if (VAR_10 && VAR_10->data) {

  *VAR_8 = *(struct ci_hdrc_platform_data *)VAR_10->data;
 }

 VAR_7 = FUNC_10(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->clk = FUNC_8(VAR_6, ((void*)0));
 if (!FUNC_0(VAR_7->clk)) {
  VAR_9 = FUNC_4(VAR_7->clk);
  if (VAR_9) {
   FUNC_5(VAR_6, "failed to enable the clock: %d\n", VAR_9);
   return VAR_9;
  }
 }

 VAR_8->name = FUNC_7(VAR_6);

 VAR_7->ci_pdev = FUNC_2(VAR_6, VAR_5->resource,
        VAR_5->num_resources, VAR_8);
 if (FUNC_0(VAR_7->ci_pdev)) {
  VAR_9 = FUNC_1(VAR_7->ci_pdev);
  if (VAR_9 != -VAR_1)
   FUNC_5(VAR_6,
    "failed to register ci_hdrc platform device: %d\n",
    VAR_9);
  goto clk_err;
 }

 FUNC_12(VAR_5, VAR_7);

 FUNC_14(VAR_6);
 FUNC_13(VAR_6);

 return 0;

clk_err:
 if (!FUNC_0(VAR_7->clk))
  FUNC_3(VAR_7->clk);
 return VAR_9;
}
