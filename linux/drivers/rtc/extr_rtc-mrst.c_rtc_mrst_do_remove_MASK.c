
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrst_rtc {int * dev; int * rtc; } ;
struct device {int dummy; } ;


 struct mrst_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct mrst_rtc *VAR_1 = FUNC_0(VAR_0);

 FUNC_1();

 VAR_1->rtc = ((void*)0);
 VAR_1->dev = ((void*)0);
}
