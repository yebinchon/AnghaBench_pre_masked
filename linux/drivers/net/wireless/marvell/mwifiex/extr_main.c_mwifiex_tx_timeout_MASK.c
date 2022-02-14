
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mwifiex_private {scalar_t__ tx_timeout_cnt; TYPE_2__* adapter; int bss_num; int bss_type; int num_tx_timeout; } ;
struct TYPE_4__ {int (* card_reset ) (TYPE_2__*) ;} ;
struct TYPE_5__ {TYPE_1__ if_ops; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,char*,...) ;
 struct mwifiex_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_3)
{
 struct mwifiex_private *VAR_4 = FUNC_1(VAR_3);

 VAR_4->num_tx_timeout++;
 VAR_4->tx_timeout_cnt++;
 FUNC_0(VAR_4->adapter, VAR_0,
      "%lu : Tx timeout(#%d), bss_type-num = %d-%d\n",
      VAR_2, VAR_4->tx_timeout_cnt, VAR_4->bss_type,
      VAR_4->bss_num);
 FUNC_2(VAR_3);

 if (VAR_4->tx_timeout_cnt > VAR_1 &&
     VAR_4->adapter->if_ops.card_reset) {
  FUNC_0(VAR_4->adapter, VAR_0,
       "tx_timeout_cnt exceeds threshold.\t"
       "Triggering card reset!\n");
  VAR_4->adapter->if_ops.card_reset(VAR_4->adapter);
 }
}
