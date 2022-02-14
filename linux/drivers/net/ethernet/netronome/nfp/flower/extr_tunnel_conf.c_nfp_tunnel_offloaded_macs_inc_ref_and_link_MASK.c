
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_tun_offloaded_mac {int ref_count; int bridge_count; int repr_list; } ;
struct nfp_repr {struct nfp_flower_repr_priv* app_priv; } ;
struct nfp_flower_repr_priv {int mac_list; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 struct nfp_repr* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static void
FUNC_5(struct nfp_tun_offloaded_mac *VAR_0,
        struct net_device *VAR_1, bool VAR_2)
{
 if (FUNC_4(VAR_1)) {
  struct nfp_flower_repr_priv *VAR_3;
  struct nfp_repr *VAR_4;

  VAR_4 = FUNC_2(VAR_1);
  VAR_3 = VAR_4->app_priv;


  if (VAR_2)
   FUNC_1(&VAR_3->mac_list);

  FUNC_0(&VAR_3->mac_list, &VAR_0->repr_list);
 } else if (FUNC_3(VAR_1)) {
  VAR_0->bridge_count++;
 }

 VAR_0->ref_count++;
}
