
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct wilc_vif {TYPE_2__* ndev; struct host_if_drv* hif_drv; } ;
struct wilc_priv {scalar_t__ p2p_listen_state; } ;
struct wid {int size; int* val; int type; int id; } ;
struct TYPE_4__ {int arg; int (* expired ) (int ,int ) ;} ;
struct host_if_drv {TYPE_1__ remain_on_ch; } ;
struct TYPE_5__ {int ieee80211_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (int ,int ) ;
 struct wilc_priv* FUNC_5 (int ) ;
 int FUNC_6 (struct wilc_vif*,int ,struct wid*,int) ;

__attribute__((used)) static int FUNC_7(struct wilc_vif *VAR_7, u64 VAR_8)
{
 u8 VAR_9;
 struct wid VAR_10;
 int VAR_11;
 struct host_if_drv *VAR_12 = VAR_7->hif_drv;
 struct wilc_priv *VAR_13 = FUNC_5(VAR_7->ndev->ieee80211_ptr);

 if (VAR_13->p2p_listen_state) {
  VAR_9 = 0;
  VAR_10.id = VAR_3;
  VAR_10.type = VAR_4;
  VAR_10.size = 2;

  VAR_10.val = FUNC_1(VAR_10.size, VAR_2);
  if (!VAR_10.val)
   return -VAR_1;

  VAR_10.val[0] = VAR_9;
  VAR_10.val[1] = VAR_5;

  VAR_11 = FUNC_6(VAR_7, VAR_6, &VAR_10, 1);
  FUNC_0(VAR_10.val);
  if (VAR_11 != 0) {
   FUNC_3(VAR_7->ndev, "Failed to set remain channel\n");
   return -VAR_0;
  }

  if (VAR_12->remain_on_ch.expired) {
   VAR_12->remain_on_ch.expired(VAR_12->remain_on_ch.arg,
            VAR_8);
  }
 } else {
  FUNC_2(VAR_7->ndev, "Not in listen state\n");
 }

 return 0;
}
