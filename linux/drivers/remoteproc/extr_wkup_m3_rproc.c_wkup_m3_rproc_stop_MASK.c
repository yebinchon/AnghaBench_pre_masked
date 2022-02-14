
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wkup_m3_rproc {struct platform_device* pdev; } ;
struct wkup_m3_platform_data {int reset_name; scalar_t__ (* assert_reset ) (struct platform_device*,int ) ;} ;
struct rproc {struct wkup_m3_rproc* priv; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct wkup_m3_platform_data* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct rproc *VAR_1)
{
 struct wkup_m3_rproc *VAR_2 = VAR_1->priv;
 struct platform_device *VAR_3 = VAR_2->pdev;
 struct device *VAR_4 = &VAR_3->dev;
 struct wkup_m3_platform_data *VAR_5 = FUNC_1(VAR_4);

 if (VAR_5->assert_reset(VAR_3, VAR_5->reset_name)) {
  FUNC_0(VAR_4, "Unable to assert reset of wkup_m3!\n");
  return -VAR_0;
 }

 return 0;
}
