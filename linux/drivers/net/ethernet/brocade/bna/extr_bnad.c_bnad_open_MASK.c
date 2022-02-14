
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dev_addr; } ;
struct TYPE_4__ {int enet; } ;
struct bnad {int conf_mutex; int bna_lock; TYPE_2__ bna; TYPE_1__* netdev; } ;
struct bna_pause_config {scalar_t__ rx_pause; scalar_t__ tx_pause; } ;
struct TYPE_3__ {int mtu; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,struct bna_pause_config*) ;
 int FUNC_4 (struct bnad*,int ) ;
 int FUNC_5 (struct bnad*) ;
 int FUNC_6 (struct bnad*,int ) ;
 int FUNC_7 (struct bnad*,int ) ;
 int FUNC_8 (struct bnad*,int ) ;
 int FUNC_9 (struct bnad*,int ) ;
 int FUNC_10 (struct bnad*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct bnad* FUNC_13 (struct net_device*) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_16(struct net_device *VAR_0)
{
 int VAR_1;
 struct bnad *VAR_2 = FUNC_13(VAR_0);
 struct bna_pause_config VAR_3;
 unsigned long VAR_4;

 FUNC_11(&VAR_2->conf_mutex);


 VAR_1 = FUNC_9(VAR_2, 0);
 if (VAR_1)
  goto err_return;


 VAR_1 = FUNC_8(VAR_2, 0);
 if (VAR_1)
  goto cleanup_tx;


 VAR_3.tx_pause = 0;
 VAR_3.rx_pause = 0;

 FUNC_14(&VAR_2->bna_lock, VAR_4);
 FUNC_2(&VAR_2->bna.enet,
    FUNC_0(VAR_2->netdev->mtu), ((void*)0));
 FUNC_3(&VAR_2->bna.enet, &VAR_3);
 FUNC_1(&VAR_2->bna.enet);
 FUNC_15(&VAR_2->bna_lock, VAR_4);


 FUNC_5(VAR_2);


 FUNC_7(VAR_2, 0);


 FUNC_14(&VAR_2->bna_lock, VAR_4);
 FUNC_6(VAR_2, VAR_0->dev_addr);
 FUNC_15(&VAR_2->bna_lock, VAR_4);


 FUNC_10(VAR_2);

 FUNC_12(&VAR_2->conf_mutex);

 return 0;

cleanup_tx:
 FUNC_4(VAR_2, 0);

err_return:
 FUNC_12(&VAR_2->conf_mutex);
 return VAR_1;
}
