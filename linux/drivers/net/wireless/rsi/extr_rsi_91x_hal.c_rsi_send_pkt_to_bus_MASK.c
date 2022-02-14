
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct rsi_hw {TYPE_1__* host_intf_ops; } ;
struct rsi_common {int coex_mode; int tx_bus_mutex; struct rsi_hw* priv; } ;
struct TYPE_2__ {int (* write_pkt ) (struct rsi_hw*,int ,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rsi_hw*,int ,int ) ;

int FUNC_3(struct rsi_common *VAR_0, struct sk_buff *VAR_1)
{
 struct rsi_hw *VAR_2 = VAR_0->priv;
 int VAR_3;

 if (VAR_0->coex_mode > 1)
  FUNC_0(&VAR_0->tx_bus_mutex);

 VAR_3 = VAR_2->host_intf_ops->write_pkt(VAR_0->priv,
         VAR_1->data, VAR_1->len);

 if (VAR_0->coex_mode > 1)
  FUNC_1(&VAR_0->tx_bus_mutex);

 return VAR_3;
}
