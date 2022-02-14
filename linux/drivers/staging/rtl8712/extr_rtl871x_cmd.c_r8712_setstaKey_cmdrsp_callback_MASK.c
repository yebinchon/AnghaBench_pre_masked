
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_priv {int dummy; } ;
struct sta_info {int mac_id; int aid; } ;
struct set_stakey_rsp {int keyid; int addr; } ;
struct cmd_obj {scalar_t__ rsp; } ;
struct _adapter {struct sta_priv stapriv; } ;


 int FUNC_0 (struct cmd_obj*) ;
 struct sta_info* FUNC_1 (struct sta_priv*,int ) ;

void FUNC_2(struct _adapter *VAR_0,
         struct cmd_obj *VAR_1)
{
 struct sta_priv *VAR_2 = &VAR_0->stapriv;
 struct set_stakey_rsp *VAR_3 = (struct set_stakey_rsp *)
      (VAR_1->rsp);
 struct sta_info *VAR_4 = FUNC_1(VAR_2,
        VAR_3->addr);

 if (!VAR_4)
  goto exit;
 VAR_4->aid = VAR_4->mac_id = VAR_3->keyid;
exit:
 FUNC_0(VAR_1);
}
