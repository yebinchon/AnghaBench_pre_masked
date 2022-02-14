
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_priv {int scan_to_timer; } ;
struct cmd_obj {scalar_t__ res; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct cmd_obj*) ;

void FUNC_3(struct adapter *VAR_4, struct cmd_obj *VAR_5)
{
 struct mlme_priv *VAR_6 = &VAR_4->mlmepriv;

 if (VAR_5->res == VAR_0) {


  FUNC_1(&VAR_6->scan_to_timer, 1);
 } else if (VAR_5->res != VAR_1) {
  FUNC_1(&VAR_6->scan_to_timer, 1);
  FUNC_0(VAR_3, VAR_2, ("\n ********Error: MgntActrtw_set_802_11_bssid_LIST_SCAN Fail ************\n\n."));
 }


 FUNC_2(VAR_5);
}
