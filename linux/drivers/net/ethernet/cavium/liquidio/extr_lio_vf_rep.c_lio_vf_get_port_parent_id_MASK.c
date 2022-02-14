
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_phys_item_id {int id; int id_len; } ;
struct net_device {int dummy; } ;
struct lio_vf_rep_desc {struct net_device* parent_ndev; } ;
struct TYPE_2__ {int hw_addr; } ;
struct lio {TYPE_1__ linfo; } ;


 int VAR_0 ;
 struct lio* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,void*) ;
 struct lio_vf_rep_desc* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
         struct netdev_phys_item_id *VAR_2)
{
 struct lio_vf_rep_desc *VAR_3 = FUNC_2(VAR_1);
 struct net_device *VAR_4 = VAR_3->parent_ndev;
 struct lio *VAR_5 = FUNC_0(VAR_4);

 VAR_2->id_len = VAR_0;
 FUNC_1(VAR_2->id, (void *)&VAR_5->linfo.hw_addr + 2);

 return 0;
}
