
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int owner; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int ,char const*) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;
 struct rtc_device* FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;

struct rtc_device *FUNC_4(const char *VAR_1)
{
 struct device *VAR_2;
 struct rtc_device *VAR_3 = ((void*)0);

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  VAR_3 = FUNC_2(VAR_2);

 if (VAR_3) {
  if (!FUNC_3(VAR_3->owner)) {
   FUNC_1(VAR_2);
   VAR_3 = ((void*)0);
  }
 }

 return VAR_3;
}
