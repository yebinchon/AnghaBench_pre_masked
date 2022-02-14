
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct flow_cls_offload {int cookie; } ;
struct ch_tc_flower_entry {int node; int fs; int filter_id; } ;
struct adapter {int flower_ht_params; int flower_tbl; } ;


 int VAR_0 ;
 struct ch_tc_flower_entry* FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct net_device*,int ,int *) ;
 int FUNC_2 (struct ch_tc_flower_entry*,int ) ;
 struct adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*) ;
 int VAR_1 ;
 int FUNC_5 (int *,int *,int ) ;

int FUNC_6(struct net_device *VAR_2,
       struct flow_cls_offload *VAR_3)
{
 struct adapter *VAR_4 = FUNC_3(VAR_2);
 struct ch_tc_flower_entry *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_3->cookie);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_2, VAR_5->filter_id, &VAR_5->fs);
 if (VAR_6)
  goto err;

 VAR_6 = FUNC_5(&VAR_4->flower_tbl, &VAR_5->node,
         VAR_4->flower_ht_params);
 if (VAR_6) {
  FUNC_4(VAR_2, "Flow remove from rhashtable failed");
  goto err;
 }
 FUNC_2(VAR_5, VAR_1);

err:
 return VAR_6;
}
