
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct wiphy {int dummy; } ;
struct TYPE_3__ {int local_random; int recv_random; int is_wilc_ie; } ;
struct wilc_priv {int dev; TYPE_2__* hif_drv; TYPE_1__ p2p; } ;
struct wilc_vif {int connecting; scalar_t__ iftype; struct wilc* wilc; struct wilc_priv priv; } ;
struct wilc {int sta_ch; scalar_t__ close; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ p2p_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,int ,int *,int ,int,int ) ;
 int FUNC_1 (int ,char*) ;
 struct wilc_vif* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct wilc_vif*) ;
 int FUNC_4 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_6, struct net_device *VAR_7,
        u16 VAR_8)
{
 struct wilc_vif *VAR_9 = FUNC_2(VAR_7);
 struct wilc_priv *VAR_10 = &VAR_9->priv;
 struct wilc *VAR_11 = VAR_9->wilc;
 int VAR_12;

 VAR_9->connecting = 0;

 if (!VAR_11)
  return -VAR_1;

 if (VAR_11->close) {

  FUNC_0(VAR_7, 0, ((void*)0), 0, 1, VAR_2);
  return 0;
 }

 if (VAR_9->iftype != VAR_3)
  VAR_11->sta_ch = VAR_4;
 FUNC_4(VAR_10->dev, ((void*)0), VAR_5);

 VAR_10->p2p.local_random = 0x01;
 VAR_10->p2p.recv_random = 0x00;
 VAR_10->p2p.is_wilc_ie = 0;
 VAR_10->hif_drv->p2p_timeout = 0;

 VAR_12 = FUNC_3(VAR_9);
 if (VAR_12 != 0) {
  FUNC_1(VAR_10->dev, "Error in disconnecting\n");
  VAR_12 = -VAR_0;
 }

 return VAR_12;
}
