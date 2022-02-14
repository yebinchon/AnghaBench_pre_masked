
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sx8_base {int iq_mode; int * tuner_use_count; scalar_t__* demod_in_use; } ;
struct TYPE_5__ {scalar_t__ tuner; scalar_t__ demod; struct mci_base* base; } ;
struct sx8 {TYPE_2__ mci; } ;
struct TYPE_4__ {int frequency; int symbol_rate; scalar_t__ roll_off; scalar_t__ flags; } ;
struct mci_command {scalar_t__ tuner; scalar_t__ demod; TYPE_1__ sx8_start_iq; int command; } ;
struct mci_base {int tuner_lock; } ;
struct dtv_frontend_properties {int frequency; int symbol_rate; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct sx8* demodulator_priv; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,struct mci_command*,int *) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (struct dvb_frontend*,scalar_t__,int) ;
 int FUNC_3 (struct mci_command*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_3, u32 VAR_4, u32 VAR_5,
      u32 VAR_6)
{
 struct sx8 *VAR_7 = VAR_3->demodulator_priv;
 struct mci_base *VAR_8 = VAR_7->mci.base;
 struct sx8_base *VAR_9 = (struct sx8_base *)VAR_8;
 struct dtv_frontend_properties *VAR_10 = &VAR_3->dtv_property_cache;
 u32 VAR_11 = 0;
 struct mci_command VAR_12;
 u32 VAR_13 = VAR_7->mci.tuner;
 int VAR_14, VAR_15 = 0;

 FUNC_4(&VAR_8->tuner_lock);
 if (VAR_9->iq_mode) {
  VAR_15 = -VAR_0;
  goto unlock;
 }
 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++)
  if (VAR_9->demod_in_use[VAR_14])
   VAR_11++;
 if (VAR_11 > 0) {
  VAR_15 = -VAR_0;
  goto unlock;
 }
 VAR_7->mci.demod = 0;
 if (!VAR_9->tuner_use_count[VAR_13])
  FUNC_2(VAR_3, VAR_13, 1);
 VAR_9->tuner_use_count[VAR_13]++;
 VAR_9->iq_mode = (VAR_6 > 1);
unlock:
 FUNC_5(&VAR_8->tuner_lock);
 if (VAR_15)
  return VAR_15;

 FUNC_3(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.command = VAR_1;
 VAR_12.sx8_start_iq.flags = VAR_4;
 VAR_12.sx8_start_iq.roll_off = VAR_5;
 VAR_12.sx8_start_iq.frequency = VAR_10->frequency * 1000;
 VAR_12.sx8_start_iq.symbol_rate = VAR_10->symbol_rate;
 VAR_12.tuner = VAR_7->mci.tuner;
 VAR_12.demod = VAR_7->mci.demod;
 VAR_15 = FUNC_0(&VAR_7->mci, &VAR_12, ((void*)0));
 if (VAR_15)
  FUNC_6(VAR_3);
 FUNC_1(&VAR_7->mci, VAR_6);
 return VAR_15;
}
