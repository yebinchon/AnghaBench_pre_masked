
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct sx8_base {scalar_t__ iq_mode; scalar_t__* used_ldpc_bitrate; scalar_t__* demod_in_use; int * tuner_use_count; } ;
struct TYPE_3__ {size_t tuner; size_t demod; size_t nr; struct mci_base* base; } ;
struct sx8 {scalar_t__ started; TYPE_1__ mci; } ;
struct mci_command {size_t demod; scalar_t__ output; int command; } ;
struct mci_base {int tuner_lock; } ;
struct dvb_frontend {struct sx8* demodulator_priv; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,struct mci_command*,int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct dvb_frontend*,size_t,int ) ;
 int FUNC_3 (struct mci_command*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_5)
{
 struct sx8 *VAR_6 = VAR_5->demodulator_priv;
 struct mci_base *VAR_7 = VAR_6->mci.base;
 struct sx8_base *VAR_8 = (struct sx8_base *)VAR_7;
 struct mci_command VAR_9;
 u32 VAR_10 = VAR_6->mci.tuner;

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 if (VAR_6->mci.demod != VAR_2) {
  VAR_9.command = VAR_0;
  VAR_9.demod = VAR_6->mci.demod;
  FUNC_0(&VAR_6->mci, &VAR_9, ((void*)0));
  if (VAR_8->iq_mode) {
   VAR_9.command = VAR_1;
   VAR_9.demod = VAR_6->mci.demod;
   VAR_9.output = 0;
   FUNC_0(&VAR_6->mci, &VAR_9, ((void*)0));
   FUNC_1(&VAR_6->mci, VAR_4);
  }
 }
 FUNC_4(&VAR_7->tuner_lock);
 VAR_8->tuner_use_count[VAR_10]--;
 if (!VAR_8->tuner_use_count[VAR_10])
  FUNC_2(VAR_5, VAR_10, 0);
 if (VAR_6->mci.demod < VAR_3) {
  VAR_8->demod_in_use[VAR_6->mci.demod] = 0;
  VAR_6->mci.demod = VAR_2;
 }
 VAR_8->used_ldpc_bitrate[VAR_6->mci.nr] = 0;
 VAR_8->iq_mode = 0;
 FUNC_5(&VAR_7->tuner_lock);
 VAR_6->started = 0;
 return 0;
}
