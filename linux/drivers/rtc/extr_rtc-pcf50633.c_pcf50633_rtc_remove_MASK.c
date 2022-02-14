
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct pcf50633_rtc {int pcf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct pcf50633_rtc* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct pcf50633_rtc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_2->pcf, VAR_0);

 return 0;
}
