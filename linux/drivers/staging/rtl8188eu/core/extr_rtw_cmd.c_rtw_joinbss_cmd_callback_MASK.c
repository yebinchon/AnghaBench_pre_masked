
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_priv {int assoc_timer; } ;
struct cmd_obj {scalar_t__ res; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct cmd_obj*) ;

void FUNC_4(struct adapter *VAR_5, struct cmd_obj *VAR_6)
{
 struct mlme_priv *VAR_7 = &VAR_5->mlmepriv;

 if (VAR_6->res == VAR_0) {


  FUNC_1(&VAR_7->assoc_timer,
     VAR_4 + FUNC_2(1));
 } else if (VAR_6->res != VAR_1) {
  FUNC_0(VAR_3, VAR_2, ("********Error:rtw_select_and_join_from_scanned_queue Wait Sema  Fail ************\n"));
  FUNC_1(&VAR_7->assoc_timer,
     VAR_4 + FUNC_2(1));
 }

 FUNC_3(VAR_6);
}
