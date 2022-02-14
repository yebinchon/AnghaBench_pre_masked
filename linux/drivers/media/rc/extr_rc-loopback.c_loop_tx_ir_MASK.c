
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rc_dev {int timeout; struct loopback_dev* priv; } ;
struct loopback_dev {scalar_t__ txcarrier; scalar_t__ rxcarriermin; scalar_t__ rxcarriermax; int txmask; scalar_t__ learning; } ;
struct ir_raw_event {int pulse; unsigned int duration; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct rc_dev*) ;
 int FUNC_2 (struct rc_dev*,struct ir_raw_event*) ;

__attribute__((used)) static int FUNC_3(struct rc_dev *VAR_2, unsigned *VAR_3, unsigned VAR_4)
{
 struct loopback_dev *VAR_5 = VAR_2->priv;
 u32 VAR_6;
 unsigned VAR_7;
 struct ir_raw_event VAR_8 = {};

 if (VAR_5->txcarrier < VAR_5->rxcarriermin ||
     VAR_5->txcarrier > VAR_5->rxcarriermax) {
  FUNC_0("ignoring tx, carrier out of range\n");
  goto out;
 }

 if (VAR_5->learning)
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_1;

 if (!(VAR_6 & VAR_5->txmask)) {
  FUNC_0("ignoring tx, rx mask mismatch\n");
  goto out;
 }

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_8.pulse = VAR_7 % 2 ? 0 : 1;
  VAR_8.duration = VAR_3[VAR_7] * 1000;
  if (VAR_8.duration)
   FUNC_2(VAR_2, &VAR_8);
 }


 VAR_8.pulse = 0;
 VAR_8.duration = VAR_2->timeout;
 FUNC_2(VAR_2, &VAR_8);

 FUNC_1(VAR_2);

out:
 return VAR_4;
}
