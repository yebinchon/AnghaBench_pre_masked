
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sx8_base {int * gain_mode; } ;
struct TYPE_4__ {size_t tuner; struct mci_base* base; } ;
struct sx8 {TYPE_2__ mci; } ;
struct TYPE_3__ {int flags; } ;
struct mci_command {size_t tuner; TYPE_1__ sx8_input_enable; int command; } ;
struct mci_base {int dummy; } ;
struct dvb_frontend {struct sx8* demodulator_priv; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,struct mci_command*,int *) ;
 int FUNC_1 (struct mci_command*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct sx8 *VAR_5 = VAR_2->demodulator_priv;
 struct mci_base *VAR_6 = VAR_5->mci.base;
 struct sx8_base *VAR_7 = (struct sx8_base *)VAR_6;
 struct mci_command VAR_8;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.tuner = VAR_5->mci.tuner;
 VAR_8.command = VAR_4 ? VAR_1 : VAR_0;
 VAR_8.sx8_input_enable.flags = VAR_7->gain_mode[VAR_5->mci.tuner];
 return FUNC_0(&VAR_5->mci, &VAR_8, ((void*)0));
}
