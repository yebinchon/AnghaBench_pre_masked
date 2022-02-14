
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_phys_item_id {int id_len; int id; } ;
struct net_device {int dummy; } ;
struct bnx2x {int flags; int phys_port_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct bnx2x* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
      struct netdev_phys_item_id *VAR_3)
{
 struct bnx2x *VAR_4 = FUNC_1(VAR_2);

 if (!(VAR_4->flags & VAR_1))
  return -VAR_0;

 VAR_3->id_len = sizeof(VAR_4->phys_port_id);
 FUNC_0(VAR_3->id, VAR_4->phys_port_id, VAR_3->id_len);

 return 0;
}
