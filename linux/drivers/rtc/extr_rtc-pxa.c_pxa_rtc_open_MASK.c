
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_1hz; int irq_alarm; } ;
struct pxa_rtc {TYPE_1__ sa1100_rtc; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ,int) ;
 struct pxa_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,struct device*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int ,char*,struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1)
{
 struct pxa_rtc *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_3(VAR_2->sa1100_rtc.irq_1hz, VAR_0, 0,
     "rtc 1Hz", VAR_1);
 if (VAR_3 < 0) {
  FUNC_0(VAR_1, "can't get irq %i, err %d\n",
   VAR_2->sa1100_rtc.irq_1hz, VAR_3);
  goto err_irq_1Hz;
 }
 VAR_3 = FUNC_3(VAR_2->sa1100_rtc.irq_alarm, VAR_0, 0,
     "rtc Alrm", VAR_1);
 if (VAR_3 < 0) {
  FUNC_0(VAR_1, "can't get irq %i, err %d\n",
   VAR_2->sa1100_rtc.irq_alarm, VAR_3);
  goto err_irq_Alrm;
 }

 return 0;

err_irq_Alrm:
 FUNC_2(VAR_2->sa1100_rtc.irq_1hz, VAR_1);
err_irq_1Hz:
 return VAR_3;
}
