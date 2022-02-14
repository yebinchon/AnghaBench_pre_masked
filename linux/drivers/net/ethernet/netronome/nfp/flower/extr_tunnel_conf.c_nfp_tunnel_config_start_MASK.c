
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int notifier_call; } ;
struct TYPE_3__ {int offloaded_macs; TYPE_2__ neigh_nb; int neigh_off_list; int neigh_off_lock; int ipv4_off_list; int ipv4_off_lock; int mac_off_ids; } ;
struct nfp_flower_priv {TYPE_1__ tun; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct nfp_app *VAR_3)
{
 struct nfp_flower_priv *VAR_4 = VAR_3->priv;
 int VAR_5;


 VAR_5 = FUNC_5(&VAR_4->tun.offloaded_macs,
         &VAR_2);
 if (VAR_5)
  return VAR_5;

 FUNC_1(&VAR_4->tun.mac_off_ids);


 FUNC_2(&VAR_4->tun.ipv4_off_lock);
 FUNC_0(&VAR_4->tun.ipv4_off_list);


 FUNC_6(&VAR_4->tun.neigh_off_lock);
 FUNC_0(&VAR_4->tun.neigh_off_list);
 VAR_4->tun.neigh_nb.notifier_call = VAR_1;

 VAR_5 = FUNC_3(&VAR_4->tun.neigh_nb);
 if (VAR_5) {
  FUNC_4(&VAR_4->tun.offloaded_macs,
         VAR_0, ((void*)0));
  return VAR_5;
 }

 return 0;
}
