
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rocker_port {struct rocker* rocker; } ;
struct TYPE_2__ {int id; } ;
struct rocker {TYPE_1__ hw; } ;
struct netdev_phys_item_id {int id_len; int id; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *,int *,int) ;
 struct rocker_port* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
       struct netdev_phys_item_id *VAR_1)
{
 const struct rocker_port *VAR_2 = FUNC_1(VAR_0);
 const struct rocker *VAR_3 = VAR_2->rocker;

 VAR_1->id_len = sizeof(VAR_3->hw.id);
 FUNC_0(&VAR_1->id, &VAR_3->hw.id, VAR_1->id_len);

 return 0;
}
