
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int demod; } ;
struct sx8 {TYPE_1__ mci; } ;
struct mci_result {scalar_t__ status; } ;
struct mci_command {int demod; int command; } ;
struct dvb_frontend {struct sx8* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,struct mci_command*,struct mci_result*) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_3, enum fe_status *VAR_4)
{
 int VAR_5;
 struct sx8 *VAR_6 = VAR_3->demodulator_priv;
 struct mci_command VAR_7;
 struct mci_result VAR_8;

 VAR_7.command = VAR_0;
 VAR_7.demod = VAR_6->mci.demod;
 VAR_5 = FUNC_0(&VAR_6->mci, &VAR_7, &VAR_8);
 if (VAR_5)
  return VAR_5;
 *VAR_4 = 0x00;
 FUNC_1(VAR_3);
 FUNC_3(VAR_3);
 if (VAR_8.status == VAR_2)
  *VAR_4 = 0x0f;
 if (VAR_8.status == VAR_1) {
  *VAR_4 = 0x1f;
  FUNC_2(VAR_3);
 }
 return VAR_5;
}
