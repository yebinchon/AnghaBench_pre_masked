
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2i_hba {int hba_shutdown_tmo; int ofld_conns_active; int adapter_state; int eh_wait; int ep_destroy_list; int ep_ofld_list; int shost; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2i_hba*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int,int) ;

void FUNC_6(void *VAR_4)
{
 struct bnx2i_hba *VAR_5 = VAR_4;
 int VAR_6;
 int VAR_7 = 1 * VAR_2;


 if (!FUNC_4(VAR_0,
         &VAR_5->adapter_state)) {
  FUNC_2(VAR_5->shost,
         VAR_3);
  VAR_7 = VAR_5->hba_shutdown_tmo;
 }





 FUNC_5(VAR_5->eh_wait,
      (FUNC_3(&VAR_5->ep_ofld_list) &&
      FUNC_3(&VAR_5->ep_destroy_list)),
      2 * VAR_2);




 while (VAR_5->ofld_conns_active) {
  VAR_6 = VAR_5->ofld_conns_active;
  FUNC_5(VAR_5->eh_wait,
    (VAR_5->ofld_conns_active != VAR_6),
    VAR_7);
  if (VAR_5->ofld_conns_active == VAR_6)
   break;
 }
 FUNC_0(VAR_5);




 FUNC_1(VAR_0, &VAR_5->adapter_state);
 FUNC_1(VAR_1, &VAR_5->adapter_state);
}
