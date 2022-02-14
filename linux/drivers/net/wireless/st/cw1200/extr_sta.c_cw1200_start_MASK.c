
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_hw {TYPE_1__* wiphy; struct cw1200_common* priv; } ;
struct cw1200_common {int setbssparams_done; int wep_default_key_id; int cqm_beacon_loss_count; int conf_mutex; int mode; int mac_addr; int edca; int pm_state; } ;
struct TYPE_2__ {int perm_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int,int,int,int,int,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct cw1200_common*,int *) ;
 int FUNC_3 (struct cw1200_common*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct cw1200_common*,int *) ;

int FUNC_8(struct ieee80211_hw *VAR_3)
{
 struct cw1200_common *VAR_4 = VAR_3->priv;
 int VAR_5 = 0;

 FUNC_1(&VAR_4->pm_state, VAR_1);

 FUNC_5(&VAR_4->conf_mutex);


 FUNC_0(&VAR_4->edca, 0, 0x0002, 0x0003, 0x0007, 47, 0xc8, 0);
 FUNC_0(&VAR_4->edca, 1, 0x0002, 0x0007, 0x000f, 94, 0xc8, 0);
 FUNC_0(&VAR_4->edca, 2, 0x0003, 0x000f, 0x03ff, 0, 0xc8, 0);
 FUNC_0(&VAR_4->edca, 3, 0x0007, 0x000f, 0x03ff, 0, 0xc8, 0);
 VAR_5 = FUNC_7(VAR_4, &VAR_4->edca);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_2(VAR_4, &VAR_4->edca);
 if (VAR_5)
  goto out;

 VAR_4->setbssparams_done = 0;

 FUNC_4(VAR_4->mac_addr, VAR_3->wiphy->perm_addr, VAR_0);
 VAR_4->mode = VAR_2;
 VAR_4->wep_default_key_id = -1;

 VAR_4->cqm_beacon_loss_count = 10;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  goto out;

out:
 FUNC_6(&VAR_4->conf_mutex);
 return VAR_5;
}
