
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nfp_reprs {int num_reprs; int * reprs; } ;
struct nfp_repr {struct nfp_flower_repr_priv* app_priv; } ;
struct TYPE_3__ {int netdev_port_id; } ;
struct nfp_flower_repr_priv {TYPE_1__ qos_table; } ;
struct nfp_flower_priv {TYPE_2__* app; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int * reprs; } ;


 size_t VAR_0 ;
 struct nfp_repr* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nfp_flower_priv*,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(struct nfp_flower_priv *VAR_1)
{
 struct nfp_reprs *VAR_2;
 int VAR_3;

 FUNC_3();
 VAR_2 = FUNC_2(VAR_1->app->reprs[VAR_0]);
 if (!VAR_2)
  goto exit_unlock_rcu;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_reprs; VAR_3++) {
  struct net_device *VAR_4;

  VAR_4 = FUNC_2(VAR_2->reprs[VAR_3]);
  if (VAR_4) {
   struct nfp_repr *VAR_5 = FUNC_0(VAR_4);
   struct nfp_flower_repr_priv *VAR_6;
   u32 VAR_7;

   VAR_6 = VAR_5->app_priv;
   VAR_7 = VAR_6->qos_table.netdev_port_id;
   if (!VAR_7)
    continue;

   FUNC_1(VAR_1, VAR_7);
  }
 }

exit_unlock_rcu:
 FUNC_4();
}
