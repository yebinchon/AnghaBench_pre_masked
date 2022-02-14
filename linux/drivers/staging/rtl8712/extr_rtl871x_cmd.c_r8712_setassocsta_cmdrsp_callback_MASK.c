
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_priv {int dummy; } ;
struct sta_info {int mac_id; int aid; } ;
struct set_assocsta_rsp {int cam_id; } ;
struct set_assocsta_parm {int addr; } ;
struct mlme_priv {int lock; int fw_state; } ;
struct cmd_obj {scalar_t__ rsp; scalar_t__ parmbuf; } ;
struct _adapter {struct mlme_priv mlmepriv; struct sta_priv stapriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;
 int FUNC_1 (struct cmd_obj*) ;
 struct sta_info* FUNC_2 (struct sta_priv*,int ) ;
 int FUNC_3 (struct mlme_priv*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct _adapter *VAR_3,
           struct cmd_obj *VAR_4)
{
 unsigned long VAR_5;
 struct sta_priv *VAR_6 = &VAR_3->stapriv;
 struct mlme_priv *VAR_7 = &VAR_3->mlmepriv;
 struct set_assocsta_parm *VAR_8 =
    (struct set_assocsta_parm *)(VAR_4->parmbuf);
 struct set_assocsta_rsp *VAR_9 =
    (struct set_assocsta_rsp *) (VAR_4->rsp);
 struct sta_info *VAR_10 = FUNC_2(VAR_6,
        VAR_8->addr);

 if (!VAR_10)
  return;
 VAR_10->aid = VAR_10->mac_id = VAR_9->cam_id;
 FUNC_4(&VAR_7->lock, VAR_5);
 if ((FUNC_0(VAR_7, VAR_0)) &&
     (FUNC_0(VAR_7, VAR_2)))
  VAR_7->fw_state ^= VAR_2;
 FUNC_3(VAR_7, VAR_1);
 FUNC_5(&VAR_7->lock, VAR_5);
 FUNC_1(VAR_4);
}
