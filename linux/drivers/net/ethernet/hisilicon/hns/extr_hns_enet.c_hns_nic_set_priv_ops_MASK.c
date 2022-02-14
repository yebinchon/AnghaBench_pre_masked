
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int features; } ;
struct TYPE_4__ {void* maybe_stop_tx; int fill_desc; int get_rxd_bnum; } ;
struct hns_nic_priv {TYPE_1__ ops; int enet_ver; struct hnae_handle* ae_handle; } ;
struct hnae_handle {TYPE_3__* dev; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* set_tso_stats ) (struct hnae_handle*,int) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 struct hns_nic_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct hnae_handle*,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_9)
{
 struct hns_nic_priv *VAR_10 = FUNC_1(VAR_9);
 struct hnae_handle *VAR_11 = VAR_10->ae_handle;

 if (FUNC_0(VAR_10->enet_ver)) {
  VAR_10->ops.fill_desc = VAR_2;
  VAR_10->ops.get_rxd_bnum = VAR_5;
  VAR_10->ops.maybe_stop_tx = VAR_8;
 } else {
  VAR_10->ops.get_rxd_bnum = VAR_6;
  if ((VAR_9->features & VAR_0) ||
      (VAR_9->features & VAR_1)) {
   VAR_10->ops.fill_desc = VAR_3;
   VAR_10->ops.maybe_stop_tx = VAR_7;

   FUNC_2(VAR_9, 7 * 4096);
  } else {
   VAR_10->ops.fill_desc = VAR_4;
   VAR_10->ops.maybe_stop_tx = VAR_8;
  }



  VAR_11->dev->ops->set_tso_stats(VAR_11, 1);
 }
}
