
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt_tc_info {int enabled; int flow_table; int l2_table; int decap_l2_table; int decap_table; void* encap_ht_params; int encap_table; void* decap_ht_params; void* decap_l2_ht_params; void* l2_ht_params; void* flow_ht_params; void* packets_mask; void* bytes_mask; int lock; } ;
struct bnxt {int hwrm_spec_code; struct bnxt_tc_info* tc_info; TYPE_1__* dev; } ;
struct TYPE_2__ {int features; int hw_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (struct bnxt_tc_info*) ;
 struct bnxt_tc_info* FUNC_1 (int,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,void**) ;

int FUNC_7(struct bnxt *VAR_8)
{
 struct bnxt_tc_info *VAR_9;
 int VAR_10;

 if (VAR_8->hwrm_spec_code < 0x10803) {
  FUNC_4(VAR_8->dev,
       "Firmware does not support TC flower offload.\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_0;
 FUNC_3(&VAR_9->lock);


 VAR_9->bytes_mask = FUNC_2(36);
 VAR_9->packets_mask = FUNC_2(28);

 VAR_9->flow_ht_params = VAR_5;
 VAR_10 = FUNC_6(&VAR_9->flow_table, &VAR_9->flow_ht_params);
 if (VAR_10)
  goto free_tc_info;

 VAR_9->l2_ht_params = VAR_6;
 VAR_10 = FUNC_6(&VAR_9->l2_table, &VAR_9->l2_ht_params);
 if (VAR_10)
  goto destroy_flow_table;

 VAR_9->decap_l2_ht_params = VAR_4;
 VAR_10 = FUNC_6(&VAR_9->decap_l2_table,
        &VAR_9->decap_l2_ht_params);
 if (VAR_10)
  goto destroy_l2_table;

 VAR_9->decap_ht_params = VAR_7;
 VAR_10 = FUNC_6(&VAR_9->decap_table,
        &VAR_9->decap_ht_params);
 if (VAR_10)
  goto destroy_decap_l2_table;

 VAR_9->encap_ht_params = VAR_7;
 VAR_10 = FUNC_6(&VAR_9->encap_table,
        &VAR_9->encap_ht_params);
 if (VAR_10)
  goto destroy_decap_table;

 VAR_9->enabled = 1;
 VAR_8->dev->hw_features |= VAR_3;
 VAR_8->dev->features |= VAR_3;
 VAR_8->tc_info = VAR_9;
 return 0;

destroy_decap_table:
 FUNC_5(&VAR_9->decap_table);
destroy_decap_l2_table:
 FUNC_5(&VAR_9->decap_l2_table);
destroy_l2_table:
 FUNC_5(&VAR_9->l2_table);
destroy_flow_table:
 FUNC_5(&VAR_9->flow_table);
free_tc_info:
 FUNC_0(VAR_9);
 return VAR_10;
}
