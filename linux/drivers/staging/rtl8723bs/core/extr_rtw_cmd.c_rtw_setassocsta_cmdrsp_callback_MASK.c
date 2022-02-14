
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_priv {int dummy; } ;
struct sta_info {int mac_id; int aid; } ;
struct set_assocsta_rsp {int cam_id; } ;
struct set_assocsta_parm {int addr; } ;
struct mlme_priv {int lock; } ;
struct cmd_obj {scalar_t__ rsp; scalar_t__ parmbuf; } ;
struct adapter {struct mlme_priv mlmepriv; struct sta_priv stapriv; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlme_priv*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct mlme_priv*,int ) ;
 int FUNC_3 (struct cmd_obj*) ;
 struct sta_info* FUNC_4 (struct sta_priv*,int ) ;
 int FUNC_5 (struct mlme_priv*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct adapter *VAR_5, struct cmd_obj *VAR_6)
{
 struct sta_priv *VAR_7 = &VAR_5->stapriv;
 struct mlme_priv *VAR_8 = &VAR_5->mlmepriv;
 struct set_assocsta_parm *VAR_9 = (struct set_assocsta_parm *)(VAR_6->parmbuf);
 struct set_assocsta_rsp *VAR_10 = (struct set_assocsta_rsp *) (VAR_6->rsp);
 struct sta_info *VAR_11 = FUNC_4(VAR_7, VAR_9->addr);

 if (VAR_11 == ((void*)0)) {
  FUNC_0(VAR_4, VAR_3, ("\nERROR: setassocsta_cmdrsp_callbac => can't get sta_info\n\n"));
  goto exit;
 }

 VAR_11->aid = VAR_11->mac_id = VAR_10->cam_id;

 FUNC_6(&VAR_8->lock);

 if ((FUNC_2(VAR_8, VAR_0) == 1) && (FUNC_2(VAR_8, VAR_2) == 1))
  FUNC_1(VAR_8, VAR_2);

 FUNC_5(VAR_8, VAR_1);
 FUNC_7(&VAR_8->lock);

exit:
 FUNC_3(VAR_6);
}
