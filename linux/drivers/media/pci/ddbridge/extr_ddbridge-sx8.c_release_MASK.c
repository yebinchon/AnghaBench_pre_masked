
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct sx8* base; } ;
struct sx8 {scalar_t__ count; int mci_list; TYPE_1__ mci; } ;
struct mci_base {scalar_t__ count; int mci_list; TYPE_1__ mci; } ;
struct dvb_frontend {struct sx8* demodulator_priv; } ;


 int FUNC_0 (struct sx8*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_0)
{
 struct sx8 *VAR_1 = VAR_0->demodulator_priv;
 struct mci_base *VAR_2 = VAR_1->mci.base;

 VAR_2->count--;
 if (VAR_2->count == 0) {
  FUNC_1(&VAR_2->mci_list);
  FUNC_0(VAR_2);
 }
 FUNC_0(VAR_1);
}
