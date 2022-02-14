
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct macsec_tx_sa {int dummy; } ;
struct macsec_rx_sc {int next; } ;
struct TYPE_3__ {scalar_t__* sa; } ;
struct TYPE_4__ {TYPE_1__ tx_sc; scalar_t__ rx_sc; } ;
struct macsec_dev {TYPE_2__ secy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (struct macsec_tx_sa*) ;
 int FUNC_2 (struct macsec_rx_sc*) ;
 int FUNC_3 (scalar_t__,int ) ;
 void* FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct macsec_dev *VAR_1)
{
 int VAR_2;

 while (VAR_1->secy.rx_sc) {
  struct macsec_rx_sc *VAR_3 = FUNC_4(VAR_1->secy.rx_sc);

  FUNC_3(VAR_1->secy.rx_sc, VAR_3->next);
  FUNC_2(VAR_3);
 }

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct macsec_tx_sa *VAR_4 = FUNC_4(VAR_1->secy.tx_sc.sa[VAR_2]);

  if (VAR_4) {
   FUNC_0(VAR_1->secy.tx_sc.sa[VAR_2], ((void*)0));
   FUNC_1(VAR_4);
  }
 }
}
