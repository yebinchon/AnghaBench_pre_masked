
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pti_masterchannel {int master; int channel; } ;
struct TYPE_2__ {int* ia_app; int* ia_os; int* ia_modem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (struct pti_masterchannel*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct pti_masterchannel *VAR_4)
{
 u8 VAR_5, VAR_6, VAR_7;

 FUNC_1(&VAR_2);

 if (VAR_4) {
  VAR_5 = VAR_4->master;
  VAR_6 = VAR_4->channel;

  if (VAR_5 == VAR_0) {
   VAR_7 = VAR_6 >> 3;
   VAR_3->ia_app[VAR_7] &= ~(0x80>>(VAR_6 & 0x7));
  } else if (VAR_5 == VAR_1) {
   VAR_7 = VAR_6 >> 3;
   VAR_3->ia_os[VAR_7] &= ~(0x80>>(VAR_6 & 0x7));
  } else {
   VAR_7 = VAR_6 >> 3;
   VAR_3->ia_modem[VAR_7] &= ~(0x80>>(VAR_6 & 0x7));
  }

  FUNC_0(VAR_4);
 }

 FUNC_2(&VAR_2);
}
