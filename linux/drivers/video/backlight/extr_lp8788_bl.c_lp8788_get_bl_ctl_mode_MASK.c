
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp8788_bl {int mode; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum lp8788_bl_ctrl_mode { ____Placeholder_lp8788_bl_ctrl_mode } lp8788_bl_ctrl_mode ;


 int VAR_0 ;
 struct lp8788_bl* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct lp8788_bl *VAR_4 = FUNC_0(VAR_1);
 enum lp8788_bl_ctrl_mode VAR_5 = VAR_4->mode;
 char *VAR_6;

 if (FUNC_1(VAR_5))
  VAR_6 = "PWM based";
 else if (FUNC_2(VAR_5))
  VAR_6 = "Register based";
 else
  VAR_6 = "Invalid mode";

 return FUNC_3(VAR_3, VAR_0, "%s\n", VAR_6);
}
