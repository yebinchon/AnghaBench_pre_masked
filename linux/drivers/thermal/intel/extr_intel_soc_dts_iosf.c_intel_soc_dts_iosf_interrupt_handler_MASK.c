
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_soc_dts_sensors {int intr_notify_lock; TYPE_1__* soc_dts; } ;
struct TYPE_2__ {int tzone; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(struct intel_soc_dts_sensors *VAR_9)
{
 u32 VAR_10;
 int VAR_11;
 u32 VAR_12;
 unsigned long VAR_13;

 FUNC_3(&VAR_9->intr_notify_lock, VAR_13);

 VAR_11 = FUNC_0(VAR_0, VAR_1,
          VAR_3, &VAR_12);
 VAR_12 |= VAR_5;
 VAR_11 = FUNC_1(VAR_0, VAR_2,
    VAR_3, VAR_12);

 VAR_11 = FUNC_0(VAR_0, VAR_1,
          VAR_4, &VAR_10);
 FUNC_2("status %d PTTSS %x\n", VAR_11, VAR_10);
 if (VAR_10 & VAR_6) {
  int VAR_14;

  VAR_11 = FUNC_1(VAR_0, VAR_2,
     VAR_4, VAR_10);
  FUNC_4(&VAR_9->intr_notify_lock, VAR_13);

  for (VAR_14 = 0; VAR_14 < VAR_7; ++VAR_14) {
   FUNC_2("TZD update for zone %d\n", VAR_14);
   FUNC_5(VAR_9->soc_dts[VAR_14].tzone,
         VAR_8);
  }
 } else
  FUNC_4(&VAR_9->intr_notify_lock, VAR_13);
}
