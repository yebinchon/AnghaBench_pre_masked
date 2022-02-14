
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tuner; int nr; struct mci_base* base; } ;
struct sx8 {TYPE_1__ mci; } ;
struct mci_base {int dev; } ;
struct dvb_frontend {struct sx8* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_2, int VAR_3)
{
 struct sx8 *VAR_4 = VAR_2->demodulator_priv;
 struct mci_base *VAR_5 = VAR_4->mci.base;

 if (VAR_3 >= VAR_1)
  return -VAR_0;

 VAR_4->mci.tuner = VAR_3;
 FUNC_0(VAR_5->dev, "MCI-%d: input=%d\n", VAR_4->mci.nr, VAR_3);
 return 0;
}
