
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_iodelay_pingroup {int ncfg; int * cfg; } ;
struct ti_iodelay_device {struct device* dev; } ;
struct pinctrl_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct ti_iodelay_device* FUNC_1 (struct pinctrl_dev*) ;
 struct ti_iodelay_pingroup* FUNC_2 (struct ti_iodelay_device*,unsigned int) ;
 scalar_t__ FUNC_3 (struct ti_iodelay_device*,int *) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_3,
     unsigned int VAR_4,
     unsigned long *VAR_5,
     unsigned int VAR_6)
{
 struct ti_iodelay_device *VAR_7;
 struct device *VAR_8;
 struct ti_iodelay_pingroup *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_1(VAR_3);
 VAR_8 = VAR_7->dev;
 VAR_9 = FUNC_2(VAR_7, VAR_4);

 if (VAR_6 != 1) {
  FUNC_0(VAR_8, "Unsupported number of configurations %d\n",
   VAR_6);
  return -VAR_0;
 }

 if (*VAR_5 != VAR_2) {
  FUNC_0(VAR_8, "Unsupported configuration\n");
  return -VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_9->ncfg; VAR_10++) {
  if (FUNC_3(VAR_7, &VAR_9->cfg[VAR_10]))
   return -VAR_1;
 }

 return 0;
}
