
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct cfhsi {TYPE_1__* ops; int * rx_flip_buf; int * rx_buf; int * tx_buf; int wq; int aggregation_timer; int rx_slowpath_timer; int inactivity_timer; int bits; } ;
struct TYPE_3__ {int (* cfhsi_down ) (TYPE_1__*) ;int (* cfhsi_rx_cancel ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct cfhsi*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct cfhsi* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1)
{
 struct cfhsi *VAR_2 = FUNC_4(VAR_1);
 u8 *VAR_3, *VAR_4, *VAR_5;


 FUNC_5(VAR_0, &VAR_2->bits);


 FUNC_1(&VAR_2->inactivity_timer);
 FUNC_1(&VAR_2->rx_slowpath_timer);
 FUNC_1(&VAR_2->aggregation_timer);


 VAR_2->ops->cfhsi_rx_cancel(VAR_2->ops);


 FUNC_2(VAR_2->wq);


 VAR_3 = VAR_2->tx_buf;
 VAR_4 = VAR_2->rx_buf;
 VAR_5 = VAR_2->rx_flip_buf;

 FUNC_0(VAR_2);


 VAR_2->ops->cfhsi_down(VAR_2->ops);


 FUNC_3(VAR_3);
 FUNC_3(VAR_4);
 FUNC_3(VAR_5);
 return 0;
}
