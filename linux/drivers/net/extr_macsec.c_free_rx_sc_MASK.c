
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macsec_rx_sc {int * sa; } ;
struct macsec_rx_sa {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct macsec_rx_sa*) ;
 int FUNC_2 (struct macsec_rx_sc*) ;
 struct macsec_rx_sa* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct macsec_rx_sc *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct macsec_rx_sa *VAR_3 = FUNC_3(VAR_1->sa[VAR_2]);

  FUNC_0(VAR_1->sa[VAR_2], ((void*)0));
  if (VAR_3)
   FUNC_1(VAR_3);
 }

 FUNC_2(VAR_1);
}
