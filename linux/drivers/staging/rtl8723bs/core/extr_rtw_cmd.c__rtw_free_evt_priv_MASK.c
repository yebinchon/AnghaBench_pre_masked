
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evt_priv {void* c2h_queue; scalar_t__ c2h_wk_alive; int c2h_wk; } ;


 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (void*) ;

void FUNC_6(struct evt_priv *VAR_2)
{
 FUNC_0(VAR_1, VAR_0, ("+_rtw_free_evt_priv\n"));

 FUNC_1(&VAR_2->c2h_wk);
 while (VAR_2->c2h_wk_alive)
  FUNC_3(10);

 while (!FUNC_4(VAR_2->c2h_queue)) {
  void *VAR_3 = FUNC_5(VAR_2->c2h_queue);
  if (VAR_3 != ((void*)0) && VAR_3 != (void *)VAR_2) {
   FUNC_2(VAR_3);
  }
 }
 FUNC_2(VAR_2->c2h_queue);

 FUNC_0(VAR_1, VAR_0, ("-_rtw_free_evt_priv\n"));
}
