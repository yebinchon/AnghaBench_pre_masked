
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {struct rtc_class_ops const* ops; } ;
struct rtc_class_ops {int dummy; } ;
struct module {int dummy; } ;
struct device {int dummy; } ;


 struct rtc_device* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct rtc_device*) ;
 int FUNC_2 (struct module*,struct rtc_device*) ;
 struct rtc_device* FUNC_3 (struct device*) ;

struct rtc_device *FUNC_4(struct device *VAR_0,
         const char *VAR_1,
         const struct rtc_class_ops *VAR_2,
         struct module *VAR_3)
{
 struct rtc_device *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_0);
 if (FUNC_1(VAR_4))
  return VAR_4;

 VAR_4->ops = VAR_2;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5)
  return FUNC_0(VAR_5);

 return VAR_4;
}
