
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int demod; } ;
struct sx8 {int signal_info; TYPE_1__ mci; } ;
struct mci_command {int demod; int command; } ;
struct dvb_frontend {struct sx8* demodulator_priv; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct mci_command*,int *) ;
 int FUNC_1 (struct mci_command*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1)
{
 int VAR_2;
 struct sx8 *VAR_3 = VAR_1->demodulator_priv;
 struct mci_command VAR_4;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.command = VAR_0;
 VAR_4.demod = VAR_3->mci.demod;
 VAR_2 = FUNC_0(&VAR_3->mci, &VAR_4, &VAR_3->signal_info);
 return VAR_2;
}
