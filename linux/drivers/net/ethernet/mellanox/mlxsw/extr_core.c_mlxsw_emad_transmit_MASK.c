
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct mlxsw_reg_trans {int tx_info; int active; int tx_skb; } ;
struct mlxsw_core {TYPE_1__* driver; } ;
struct TYPE_2__ {scalar_t__ txhdr_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct mlxsw_core*,struct sk_buff*,int *) ;
 int FUNC_3 (struct mlxsw_reg_trans*) ;
 int FUNC_4 (struct mlxsw_core*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct mlxsw_core *VAR_2,
          struct mlxsw_reg_trans *VAR_3)
{
 struct sk_buff *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_5(VAR_3->tx_skb, VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_6(FUNC_4(VAR_2), 0, 0,
       VAR_4->data + VAR_2->driver->txhdr_len,
       VAR_4->len - VAR_2->driver->txhdr_len);

 FUNC_0(&VAR_3->active, 1);
 VAR_5 = FUNC_2(VAR_2, VAR_4, &VAR_3->tx_info);
 if (VAR_5) {
  FUNC_1(VAR_4);
  return VAR_5;
 }
 FUNC_3(VAR_3);
 return 0;
}
