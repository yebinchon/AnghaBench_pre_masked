
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_flower_priv {int flow_table; } ;
struct TYPE_4__ {int mask_len; int key_len; } ;
struct nfp_fl_payload {unsigned long tc_flower_cookie; int in_hw; struct nfp_fl_payload* unmasked_data; struct nfp_fl_payload* mask_data; struct nfp_fl_payload* action_data; int fl_node; int ingress_dev; TYPE_2__ meta; } ;
struct nfp_fl_key_ls {int key_size; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_3__ {struct netlink_ext_ack* extack; } ;
struct flow_cls_offload {unsigned long cookie; TYPE_1__ common; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfp_fl_payload*) ;
 int FUNC_3 (struct nfp_fl_payload*,struct nfp_fl_payload*,int ) ;
 int FUNC_4 (struct nfp_app*,struct flow_cls_offload*,struct nfp_fl_payload*,int ,struct netlink_ext_ack*) ;
 struct nfp_fl_payload* FUNC_5 (struct nfp_fl_key_ls*) ;
 int FUNC_6 (struct nfp_fl_payload*,struct nfp_fl_payload*) ;
 scalar_t__ FUNC_7 (struct nfp_fl_payload*) ;
 int FUNC_8 (struct nfp_fl_payload*,struct nfp_fl_payload*) ;
 int FUNC_9 (struct nfp_fl_payload*,struct nfp_fl_payload*,struct nfp_fl_payload*) ;
 int VAR_3 ;
 int FUNC_10 (struct nfp_fl_payload*,struct nfp_fl_payload*) ;
 int FUNC_11 (struct nfp_app*,struct nfp_fl_payload*,int ) ;
 int FUNC_12 (struct nfp_app*,struct nfp_fl_payload*) ;
 int FUNC_13 (int *,int *,int ) ;
 int FUNC_14 (int *,int *,int ) ;

int FUNC_15(struct nfp_app *VAR_4,
         struct nfp_fl_payload *VAR_5,
         struct nfp_fl_payload *VAR_6)
{
 struct flow_cls_offload VAR_7;
 struct nfp_flower_priv *VAR_8 = VAR_4->priv;
 struct netlink_ext_ack *VAR_9 = ((void*)0);
 struct nfp_fl_payload *VAR_10;
 struct nfp_fl_key_ls VAR_11;
 int VAR_12;

 FUNC_0();

 VAR_9 = VAR_7.common.extack;
 if (VAR_5 == VAR_6 ||
     FUNC_7(VAR_5) ||
     FUNC_7(VAR_6))
  return -VAR_0;

 VAR_12 = FUNC_6(VAR_5, VAR_6);
 if (VAR_12)
  return VAR_12;

 VAR_11.key_size = VAR_5->meta.key_len;

 VAR_10 = FUNC_5(&VAR_11);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->tc_flower_cookie = (unsigned long)VAR_10;
 VAR_10->ingress_dev = VAR_5->ingress_dev;

 FUNC_3(VAR_10->unmasked_data, VAR_5->unmasked_data,
        VAR_5->meta.key_len);
 FUNC_3(VAR_10->mask_data, VAR_5->mask_data,
        VAR_5->meta.mask_len);

 VAR_12 = FUNC_9(VAR_5, VAR_6, VAR_10);
 if (VAR_12)
  goto err_destroy_merge_flow;

 VAR_12 = FUNC_8(VAR_10, VAR_5);
 if (VAR_12)
  goto err_destroy_merge_flow;

 VAR_12 = FUNC_8(VAR_10, VAR_6);
 if (VAR_12)
  goto err_unlink_sub_flow1;

 VAR_7.cookie = VAR_10->tc_flower_cookie;
 VAR_12 = FUNC_4(VAR_4, &VAR_7, VAR_10,
     VAR_10->ingress_dev, VAR_9);
 if (VAR_12)
  goto err_unlink_sub_flow2;

 VAR_12 = FUNC_13(&VAR_8->flow_table, &VAR_10->fl_node,
         VAR_3);
 if (VAR_12)
  goto err_release_metadata;

 VAR_12 = FUNC_11(VAR_4, VAR_10,
       VAR_2);
 if (VAR_12)
  goto err_remove_rhash;

 VAR_10->in_hw = 1;
 VAR_5->in_hw = 0;

 return 0;

err_remove_rhash:
 FUNC_1(FUNC_14(&VAR_8->flow_table,
         &VAR_10->fl_node,
         VAR_3));
err_release_metadata:
 FUNC_12(VAR_4, VAR_10);
err_unlink_sub_flow2:
 FUNC_10(VAR_10, VAR_6);
err_unlink_sub_flow1:
 FUNC_10(VAR_10, VAR_5);
err_destroy_merge_flow:
 FUNC_2(VAR_10->action_data);
 FUNC_2(VAR_10->mask_data);
 FUNC_2(VAR_10->unmasked_data);
 FUNC_2(VAR_10);
 return VAR_12;
}
