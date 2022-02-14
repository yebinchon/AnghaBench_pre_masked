
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ptp_qoriq_registers {TYPE_2__* ctrl_regs; TYPE_1__* alarm_regs; } ;
struct ptp_qoriq {int (* read ) (int *) ;int alarm_value; int alarm_interval; int (* write ) (int *,int) ;int clock; int lock; struct ptp_qoriq_registers regs; } ;
struct ptp_clock_event {int timestamp; int type; scalar_t__ index; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int tmr_tevent; int tmr_temask; } ;
struct TYPE_3__ {int tmr_alarm2_h; int tmr_alarm2_l; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ptp_qoriq*,int,int) ;
 int FUNC_1 (int ,struct ptp_clock_event*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;

irqreturn_t FUNC_11(int VAR_9, void *VAR_10)
{
 struct ptp_qoriq *VAR_11 = VAR_10;
 struct ptp_qoriq_registers *VAR_12 = &VAR_11->regs;
 struct ptp_clock_event VAR_13;
 u64 VAR_14;
 u32 VAR_15 = 0, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

 FUNC_2(&VAR_11->lock);

 VAR_19 = VAR_11->read(&VAR_12->ctrl_regs->tmr_tevent);
 VAR_18 = VAR_11->read(&VAR_12->ctrl_regs->tmr_temask);

 FUNC_3(&VAR_11->lock);

 VAR_20 = VAR_19 & VAR_18;

 if (VAR_20 & VAR_2) {
  VAR_15 |= VAR_2;
  FUNC_0(VAR_11, 0, 1);
 }

 if (VAR_20 & VAR_3) {
  VAR_15 |= VAR_3;
  FUNC_0(VAR_11, 1, 1);
 }

 if (VAR_20 & VAR_0) {
  VAR_15 |= VAR_0;
  if (VAR_11->alarm_value) {
   VAR_13.type = VAR_7;
   VAR_13.index = 0;
   VAR_13.timestamp = VAR_11->alarm_value;
   FUNC_1(VAR_11->clock, &VAR_13);
  }
  if (VAR_11->alarm_interval) {
   VAR_14 = VAR_11->alarm_value + VAR_11->alarm_interval;
   VAR_17 = VAR_14 >> 32;
   VAR_16 = VAR_14 & 0xffffffff;
   VAR_11->write(&VAR_12->alarm_regs->tmr_alarm2_l, VAR_16);
   VAR_11->write(&VAR_12->alarm_regs->tmr_alarm2_h, VAR_17);
   VAR_11->alarm_value = VAR_14;
  } else {
   FUNC_2(&VAR_11->lock);
   VAR_18 = VAR_11->read(&VAR_12->ctrl_regs->tmr_temask);
   VAR_18 &= ~VAR_1;
   VAR_11->write(&VAR_12->ctrl_regs->tmr_temask, VAR_18);
   FUNC_3(&VAR_11->lock);
   VAR_11->alarm_value = 0;
   VAR_11->alarm_interval = 0;
  }
 }

 if (VAR_20 & VAR_6) {
  VAR_15 |= VAR_6;
  VAR_13.type = VAR_8;
  FUNC_1(VAR_11->clock, &VAR_13);
 }

 if (VAR_15) {
  VAR_11->write(&VAR_12->ctrl_regs->tmr_tevent, VAR_15);
  return VAR_4;
 } else
  return VAR_5;
}
