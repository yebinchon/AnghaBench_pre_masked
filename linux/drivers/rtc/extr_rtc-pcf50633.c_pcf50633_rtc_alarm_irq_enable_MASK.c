
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf50633_rtc {unsigned int alarm_enabled; int pcf; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct pcf50633_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct device *VAR_1, unsigned int VAR_2)
{
 struct pcf50633_rtc *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 if (VAR_2)
  VAR_4 = FUNC_2(VAR_3->pcf, VAR_0);
 else
  VAR_4 = FUNC_1(VAR_3->pcf, VAR_0);

 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->alarm_enabled = VAR_2;

 return 0;
}
