
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ptp_clock_event {int index; int timestamp; void* type; } ;
struct ixp_clock {int ptp_clock; scalar_t__ exts1_enabled; scalar_t__ exts0_enabled; struct ixp46x_ts_regs* regs; } ;
struct ixp46x_ts_regs {int event; int amms_lo; int amms_hi; int asms_lo; int asms_hi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ,struct ptp_clock_event*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct ixp_clock *VAR_9 = VAR_8;
 struct ixp46x_ts_regs *VAR_10 = VAR_9->regs;
 struct ptp_clock_event VAR_11;
 u32 VAR_12 = 0, VAR_13, VAR_14, VAR_15;

 VAR_15 = FUNC_0(&VAR_10->event);

 if (VAR_15 & VAR_5) {
  VAR_12 |= VAR_5;
  if (VAR_9->exts0_enabled) {
   VAR_14 = FUNC_0(&VAR_10->asms_hi);
   VAR_13 = FUNC_0(&VAR_10->asms_lo);
   VAR_11.type = VAR_2;
   VAR_11.index = 0;
   VAR_11.timestamp = ((u64) VAR_14) << 32;
   VAR_11.timestamp |= VAR_13;
   VAR_11.timestamp <<= VAR_3;
   FUNC_2(VAR_9->ptp_clock, &VAR_11);
  }
 }

 if (VAR_15 & VAR_4) {
  VAR_12 |= VAR_4;
  if (VAR_9->exts1_enabled) {
   VAR_14 = FUNC_0(&VAR_10->amms_hi);
   VAR_13 = FUNC_0(&VAR_10->amms_lo);
   VAR_11.type = VAR_2;
   VAR_11.index = 1;
   VAR_11.timestamp = ((u64) VAR_14) << 32;
   VAR_11.timestamp |= VAR_13;
   VAR_11.timestamp <<= VAR_3;
   FUNC_2(VAR_9->ptp_clock, &VAR_11);
  }
 }

 if (VAR_15 & VAR_6)
  VAR_12 |= VAR_6;

 if (VAR_12) {
  FUNC_1(VAR_12, &VAR_10->event);
  return VAR_0;
 } else
  return VAR_1;
}
