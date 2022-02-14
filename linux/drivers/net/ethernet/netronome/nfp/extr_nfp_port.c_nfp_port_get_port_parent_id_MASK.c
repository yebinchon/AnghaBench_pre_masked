
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nfp_port {TYPE_1__* app; } ;
struct netdev_phys_item_id {int id_len; int id; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int cpp; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int ) ;
 int FUNC_1 (int ,int const**) ;
 struct nfp_port* FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_1,
    struct netdev_phys_item_id *VAR_2)
{
 struct nfp_port *VAR_3;
 const u8 *VAR_4;

 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->id_len = FUNC_1(VAR_3->app->cpp, &VAR_4);
 FUNC_0(&VAR_2->id, VAR_4, VAR_2->id_len);

 return 0;
}
