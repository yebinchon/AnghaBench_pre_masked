
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_phys_item_id {int id_len; int id; } ;
struct net_device {int dummy; } ;
struct bnxt {scalar_t__ eswitch_mode; int switch_id; } ;


 int FUNC_0 (struct bnxt*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 struct bnxt* FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_2,
       struct netdev_phys_item_id *VAR_3)
{
 struct bnxt *VAR_4 = FUNC_2(VAR_2);

 if (VAR_4->eswitch_mode != VAR_0)
  return -VAR_1;


 if (!FUNC_0(VAR_4))
  return -VAR_1;

 VAR_3->id_len = sizeof(VAR_4->switch_id);
 FUNC_1(VAR_3->id, VAR_4->switch_id, VAR_3->id_len);

 return 0;
}
