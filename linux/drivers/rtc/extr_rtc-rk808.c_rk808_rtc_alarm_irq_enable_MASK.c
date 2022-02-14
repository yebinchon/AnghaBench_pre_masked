
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk808_rtc {int dummy; } ;
struct device {int dummy; } ;


 struct rk808_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct rk808_rtc*) ;
 int FUNC_2 (struct rk808_rtc*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0,
          unsigned int VAR_1)
{
 struct rk808_rtc *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1)
  return FUNC_1(VAR_2);

 return FUNC_2(VAR_2);
}
