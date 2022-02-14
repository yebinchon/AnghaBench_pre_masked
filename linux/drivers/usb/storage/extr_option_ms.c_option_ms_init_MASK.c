
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct us_data*) ;
 int FUNC_1 (struct us_data*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct us_data*,char*,char*) ;

int FUNC_3(struct us_data *VAR_5)
{
 int VAR_6;

 FUNC_2(VAR_5, "Option MS: %s\n", "option_ms_init called");





 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 != 0) {
  FUNC_2(VAR_5, "Option MS: %s\n",
        "vendor is not Option or not determinable, no action taken");
  return 0;
 } else
  FUNC_2(VAR_5, "Option MS: %s\n",
        "this is a genuine Option device, proceeding");


 if (VAR_4 == VAR_3) {
  FUNC_2(VAR_5, "Option MS: %s\n", "Forcing Modem Mode");
  VAR_6 = FUNC_1(VAR_5);
  if (VAR_6 != VAR_1)
   FUNC_2(VAR_5, "Option MS: %s\n",
         "Failed to switch to modem mode");
  return -VAR_0;
 } else if (VAR_4 == VAR_2) {

  FUNC_2(VAR_5, "Option MS: %s\n",
        "Allowing Mass Storage Mode if device requests it");
 }

 return 0;
}
