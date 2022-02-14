
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct nfp_tun_offloaded_mac {int index; int ht_node; int ref_count; int repr_list; int addr; scalar_t__ bridge_count; } ;
struct TYPE_2__ {int mac_off_ids; int offloaded_macs; } ;
struct nfp_flower_priv {TYPE_1__ tun; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct nfp_app*,int ,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct nfp_tun_offloaded_mac*) ;
 struct nfp_tun_offloaded_mac* FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 struct nfp_tun_offloaded_mac* FUNC_11 (struct nfp_app*,int ) ;
 int FUNC_12 (struct nfp_tun_offloaded_mac*,struct net_device*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_13 (int *,int *,int ) ;
 int FUNC_14 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_15(struct nfp_app *VAR_5, struct net_device *VAR_6,
     int VAR_7, bool VAR_8)
{
 struct nfp_flower_priv *VAR_9 = VAR_5->priv;
 int VAR_10 = VAR_2, VAR_11;
 struct nfp_tun_offloaded_mac *VAR_12;
 u16 VAR_13 = 0;

 VAR_12 = FUNC_11(VAR_5, VAR_6->dev_addr);
 if (VAR_12 && FUNC_10(VAR_12->index)) {
  if (VAR_12->bridge_count ||
      !FUNC_7(VAR_6)) {
   FUNC_12(VAR_12,
           VAR_6, VAR_8);
   return 0;
  }


  VAR_13 = VAR_12->index | VAR_3;
 }

 if (!VAR_13) {

  if (VAR_12 || !VAR_7) {
   VAR_10 = FUNC_3(&VAR_9->tun.mac_off_ids, 0,
       VAR_2, VAR_1);
   if (VAR_10 < 0)
    return VAR_10;

   VAR_13 =
    FUNC_8(VAR_10);

   if (FUNC_7(VAR_6))
    VAR_13 |= VAR_3;

  } else {
   VAR_13 =
    FUNC_9(VAR_7);
  }
 }

 if (!VAR_12) {
  VAR_12 = FUNC_6(sizeof(*VAR_12), VAR_1);
  if (!VAR_12) {
   VAR_11 = -VAR_0;
   goto err_free_ida;
  }

  FUNC_2(VAR_12->addr, VAR_6->dev_addr);
  FUNC_0(&VAR_12->repr_list);

  if (FUNC_13(&VAR_9->tun.offloaded_macs,
        &VAR_12->ht_node,
        VAR_4)) {
   VAR_11 = -VAR_0;
   goto err_free_entry;
  }
 }

 VAR_11 = FUNC_1(VAR_5, VAR_6->dev_addr,
           VAR_13, 0);
 if (VAR_11) {

  if (!VAR_12->ref_count)
   goto err_remove_hash;
  goto err_free_ida;
 }

 VAR_12->index = VAR_13;
 FUNC_12(VAR_12, VAR_6, VAR_8);

 return 0;

err_remove_hash:
 FUNC_14(&VAR_9->tun.offloaded_macs, &VAR_12->ht_node,
          VAR_4);
err_free_entry:
 FUNC_5(VAR_12);
err_free_ida:
 if (VAR_10 != VAR_2)
  FUNC_4(&VAR_9->tun.mac_off_ids, VAR_10);

 return VAR_11;
}
