
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_priv {int dummy; } ;
struct sta_info {int dummy; } ;
struct set_stakey_rsp {int addr; } ;
struct cmd_obj {scalar_t__ rsp; } ;
struct adapter {struct sta_priv stapriv; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cmd_obj*) ;
 struct sta_info* FUNC_2 (struct sta_priv*,int ) ;

void FUNC_3(struct adapter *VAR_2, struct cmd_obj *VAR_3)
{

 struct sta_priv *VAR_4 = &VAR_2->stapriv;
 struct set_stakey_rsp *VAR_5 = (struct set_stakey_rsp *) (VAR_3->rsp);
 struct sta_info *VAR_6 = FUNC_2(VAR_4, VAR_5->addr);

 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_1, VAR_0, ("\nERROR: rtw_setstaKey_cmdrsp_callback => can't get sta_info\n\n"));
  goto exit;
 }
exit:
 FUNC_1(VAR_3);
}
