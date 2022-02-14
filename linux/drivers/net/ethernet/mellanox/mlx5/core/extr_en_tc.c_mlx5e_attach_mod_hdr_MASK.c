
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mod_hdr_tbl {int lock; int hlist; } ;
struct mod_hdr_key {int num_actions; int actions; } ;
struct mlx5e_tc_flow_parse_attr {int num_mod_hdr_actions; int mod_hdr_actions; } ;
struct mlx5e_tc_flow {TYPE_3__* nic_attr; TYPE_2__* esw_attr; int mod_hdr; struct mlx5e_mod_hdr_entry* mh; } ;
struct mlx5e_priv {int mdev; } ;
struct TYPE_4__ {int num_actions; void* actions; } ;
struct mlx5e_mod_hdr_entry {int compl_result; int res_ready; int modify_hdr; int flows_lock; int flows; TYPE_1__ key; int mod_hdr_hlist; int refcnt; } ;
struct TYPE_6__ {int modify_hdr; } ;
struct TYPE_5__ {int modify_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlx5e_tc_flow*) ;
 struct mod_hdr_tbl* FUNC_5 (struct mlx5e_priv*,int) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (struct mod_hdr_key*) ;
 int FUNC_8 (int *) ;
 struct mlx5e_mod_hdr_entry* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (void*,int ,int) ;
 int FUNC_12 (int ,int,int,void*) ;
 scalar_t__ FUNC_13 (struct mlx5e_tc_flow*) ;
 struct mlx5e_mod_hdr_entry* FUNC_14 (struct mod_hdr_tbl*,struct mod_hdr_key*,int ) ;
 int FUNC_15 (struct mlx5e_priv*,struct mlx5e_mod_hdr_entry*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int FUNC_23(struct mlx5e_priv *VAR_4,
    struct mlx5e_tc_flow *VAR_5,
    struct mlx5e_tc_flow_parse_attr *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;
 struct mlx5e_mod_hdr_entry *VAR_11;
 struct mod_hdr_tbl *VAR_12;
 struct mod_hdr_key VAR_13;
 u32 VAR_14;

 VAR_7 = VAR_6->num_mod_hdr_actions;
 VAR_8 = VAR_3 * VAR_7;

 VAR_13.actions = VAR_6->mod_hdr_actions;
 VAR_13.num_actions = VAR_7;

 VAR_14 = FUNC_7(&VAR_13);

 VAR_9 = FUNC_4(VAR_5);
 VAR_12 = FUNC_5(VAR_4, VAR_9);

 FUNC_16(&VAR_12->lock);
 VAR_11 = FUNC_14(VAR_12, &VAR_13, VAR_14);
 if (VAR_11) {
  FUNC_17(&VAR_12->lock);
  FUNC_22(&VAR_11->res_ready);

  if (VAR_11->compl_result < 0) {
   VAR_10 = -VAR_1;
   goto attach_header_err;
  }
  goto attach_flow;
 }

 VAR_11 = FUNC_9(sizeof(*VAR_11) + VAR_8, VAR_2);
 if (!VAR_11) {
  FUNC_17(&VAR_12->lock);
  return -VAR_0;
 }

 VAR_11->key.actions = (void *)VAR_11 + sizeof(*VAR_11);
 FUNC_11(VAR_11->key.actions, VAR_13.actions, VAR_8);
 VAR_11->key.num_actions = VAR_7;
 FUNC_20(&VAR_11->flows_lock);
 FUNC_0(&VAR_11->flows);
 FUNC_18(&VAR_11->refcnt, 1);
 FUNC_8(&VAR_11->res_ready);

 FUNC_6(VAR_12->hlist, &VAR_11->mod_hdr_hlist, VAR_14);
 FUNC_17(&VAR_12->lock);

 VAR_11->modify_hdr = FUNC_12(VAR_4->mdev, VAR_9,
        VAR_11->key.num_actions,
        VAR_11->key.actions);
 if (FUNC_1(VAR_11->modify_hdr)) {
  VAR_10 = FUNC_2(VAR_11->modify_hdr);
  VAR_11->compl_result = VAR_10;
  goto alloc_header_err;
 }
 VAR_11->compl_result = 1;
 FUNC_3(&VAR_11->res_ready);

attach_flow:
 VAR_5->mh = VAR_11;
 FUNC_19(&VAR_11->flows_lock);
 FUNC_10(&VAR_5->mod_hdr, &VAR_11->flows);
 FUNC_21(&VAR_11->flows_lock);
 if (FUNC_13(VAR_5))
  VAR_5->esw_attr->modify_hdr = VAR_11->modify_hdr;
 else
  VAR_5->nic_attr->modify_hdr = VAR_11->modify_hdr;

 return 0;

alloc_header_err:
 FUNC_3(&VAR_11->res_ready);
attach_header_err:
 FUNC_15(VAR_4, VAR_11, VAR_9);
 return VAR_10;
}
