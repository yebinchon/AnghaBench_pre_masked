
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ encapsulation; } ;
struct net_device {int dummy; } ;
struct mlx5e_arfs_tables {int arfs_lock; int wq; } ;
struct TYPE_4__ {struct mlx5e_arfs_tables arfs; } ;
struct mlx5e_priv {TYPE_2__ fs; } ;
struct TYPE_3__ {scalar_t__ n_proto; int ip_proto; } ;
struct flow_keys {TYPE_1__ basic; } ;
struct arfs_table {int dummy; } ;
struct arfs_rule {int filter_id; int arfs_work; int rxq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct arfs_rule* FUNC_0 (struct mlx5e_priv*,struct arfs_table*,struct flow_keys*,int ,int ) ;
 struct arfs_rule* FUNC_1 (struct arfs_table*,struct flow_keys*) ;
 struct arfs_table* FUNC_2 (struct mlx5e_arfs_tables*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 struct mlx5e_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct sk_buff const*,struct flow_keys*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct net_device *VAR_4, const struct sk_buff *VAR_5,
   u16 VAR_6, u32 VAR_7)
{
 struct mlx5e_priv *VAR_8 = FUNC_4(VAR_4);
 struct mlx5e_arfs_tables *VAR_9 = &VAR_8->fs.arfs;
 struct arfs_table *VAR_10;
 struct arfs_rule *VAR_11;
 struct flow_keys VAR_12;

 if (!FUNC_6(VAR_5, &VAR_12, 0))
  return -VAR_1;

 if (VAR_12.basic.n_proto != FUNC_3(VAR_2) &&
     VAR_12.basic.n_proto != FUNC_3(VAR_3))
  return -VAR_1;

 if (VAR_5->encapsulation)
  return -VAR_1;

 VAR_10 = FUNC_2(VAR_9, VAR_12.basic.ip_proto, VAR_12.basic.n_proto);
 if (!VAR_10)
  return -VAR_1;

 FUNC_7(&VAR_9->arfs_lock);
 VAR_11 = FUNC_1(VAR_10, &VAR_12);
 if (VAR_11) {
  if (VAR_11->rxq == VAR_6) {
   FUNC_8(&VAR_9->arfs_lock);
   return VAR_11->filter_id;
  }
  VAR_11->rxq = VAR_6;
 } else {
  VAR_11 = FUNC_0(VAR_8, VAR_10, &VAR_12, VAR_6, VAR_7);
  if (!VAR_11) {
   FUNC_8(&VAR_9->arfs_lock);
   return -VAR_0;
  }
 }
 FUNC_5(VAR_8->fs.arfs.wq, &VAR_11->arfs_work);
 FUNC_8(&VAR_9->arfs_lock);
 return VAR_11->filter_id;
}
