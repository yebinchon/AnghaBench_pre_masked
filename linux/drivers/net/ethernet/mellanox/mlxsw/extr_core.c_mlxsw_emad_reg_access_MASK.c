
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int dummy; } ;
struct TYPE_8__ {int is_emad; int local_port; } ;
struct mlxsw_reg_trans {unsigned long cb_priv; int type; struct sk_buff* tx_skb; int bulk_list; int list; TYPE_4__ tx_info; int tid; struct mlxsw_reg_info const* reg; int * cb; int completion; int timeout_dw; struct mlxsw_core* core; } ;
struct mlxsw_reg_info {int len; int id; } ;
struct TYPE_7__ {int trans_list_lock; int trans_list; } ;
struct mlxsw_core {TYPE_3__ emad; TYPE_2__* driver; TYPE_1__* bus_info; } ;
struct list_head {int dummy; } ;
typedef int mlxsw_reg_trans_cb_t ;
typedef enum mlxsw_core_reg_access_type { ____Placeholder_mlxsw_core_reg_access_type } mlxsw_core_reg_access_type ;
struct TYPE_6__ {int (* txhdr_construct ) (struct sk_buff*,TYPE_4__*) ;} ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 struct sk_buff* FUNC_9 (struct mlxsw_core*,int ) ;
 int FUNC_10 (struct sk_buff*,struct mlxsw_reg_info const*,char*,int,int ) ;
 int VAR_2 ;
 int FUNC_11 (struct mlxsw_core*,struct mlxsw_reg_trans*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct sk_buff*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_16(struct mlxsw_core *VAR_3,
     const struct mlxsw_reg_info *VAR_4,
     char *VAR_5,
     enum mlxsw_core_reg_access_type VAR_6,
     struct mlxsw_reg_trans *VAR_7,
     struct list_head *VAR_8,
     mlxsw_reg_trans_cb_t *VAR_9,
     unsigned long VAR_10, u64 VAR_11)
{
 struct sk_buff *VAR_12;
 int VAR_13;

 FUNC_1(VAR_3->bus_info->dev, "EMAD reg access (tid=%llx,reg_id=%x(%s),type=%s)\n",
  VAR_11, VAR_4->id, FUNC_12(VAR_4->id),
  FUNC_8(VAR_6));

 VAR_12 = FUNC_9(VAR_3, VAR_4->len);
 if (!VAR_12)
  return -VAR_0;

 FUNC_4(&VAR_7->bulk_list, VAR_8);
 VAR_7->core = VAR_3;
 VAR_7->tx_skb = VAR_12;
 VAR_7->tx_info.local_port = VAR_1;
 VAR_7->tx_info.is_emad = 1;
 FUNC_0(&VAR_7->timeout_dw, VAR_2);
 VAR_7->tid = VAR_11;
 FUNC_3(&VAR_7->completion);
 VAR_7->cb = VAR_9;
 VAR_7->cb_priv = VAR_10;
 VAR_7->reg = VAR_4;
 VAR_7->type = VAR_6;

 FUNC_10(VAR_12, VAR_4, VAR_5, VAR_6, VAR_7->tid);
 VAR_3->driver->txhdr_construct(VAR_12, &VAR_7->tx_info);

 FUNC_13(&VAR_3->emad.trans_list_lock);
 FUNC_5(&VAR_7->list, &VAR_3->emad.trans_list);
 FUNC_14(&VAR_3->emad.trans_list_lock);
 VAR_13 = FUNC_11(VAR_3, VAR_7);
 if (VAR_13)
  goto err_out;
 return 0;

err_out:
 FUNC_13(&VAR_3->emad.trans_list_lock);
 FUNC_7(&VAR_7->list);
 FUNC_14(&VAR_3->emad.trans_list_lock);
 FUNC_6(&VAR_7->bulk_list);
 FUNC_2(VAR_7->tx_skb);
 return VAR_13;
}
