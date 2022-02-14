
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rv3029_data {TYPE_1__* rtc; } ;
struct mutex {int dummy; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct mutex ops_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct rv3029_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct mutex*) ;
 int FUNC_3 (struct mutex*) ;
 int FUNC_4 (TYPE_1__*,int,unsigned long) ;
 int FUNC_5 (struct device*,int ,int*,int) ;
 int FUNC_6 (struct device*,int ,int*,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_7, void *VAR_8)
{
 struct device *VAR_9 = VAR_8;
 struct rv3029_data *VAR_10 = FUNC_0(VAR_9);
 struct mutex *VAR_11 = &VAR_10->rtc->ops_lock;
 unsigned long VAR_12 = 0;
 u8 VAR_13, VAR_14;
 int VAR_15;

 FUNC_2(VAR_11);

 VAR_15 = FUNC_5(VAR_9, VAR_3, &VAR_14, 1);
 if (VAR_15) {
  FUNC_1(VAR_9, "Read IRQ Control Register error %d\n", VAR_15);
  FUNC_3(VAR_11);
  return VAR_1;
 }

 VAR_15 = FUNC_5(VAR_9, VAR_5, &VAR_13, 1);
 if (VAR_15) {
  FUNC_1(VAR_9, "Read IRQ Flags Register error %d\n", VAR_15);
  FUNC_3(VAR_11);
  return VAR_1;
 }

 if (VAR_13 & VAR_6) {
  VAR_13 &= ~VAR_6;
  VAR_14 &= ~VAR_4;
  VAR_12 |= VAR_2;
 }

 if (VAR_12) {
  FUNC_4(VAR_10->rtc, 1, VAR_12);
  FUNC_6(VAR_9, VAR_5, &VAR_13, 1);
  FUNC_6(VAR_9, VAR_3, &VAR_14, 1);
 }
 FUNC_3(VAR_11);

 return VAR_0;
}
