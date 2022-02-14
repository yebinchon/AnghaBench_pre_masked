
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftm_rtc {int dummy; } ;
struct device {int dummy; } ;


 struct ftm_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ftm_rtc*) ;
 int FUNC_2 (struct ftm_rtc*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0,
  unsigned int VAR_1)
{
 struct ftm_rtc *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1)
  FUNC_2(VAR_2);
 else
  FUNC_1(VAR_2);

 return 0;
}
