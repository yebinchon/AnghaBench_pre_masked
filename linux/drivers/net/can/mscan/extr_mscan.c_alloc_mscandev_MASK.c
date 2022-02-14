
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; int * netdev_ops; } ;
struct TYPE_3__ {int ctrlmode_supported; int do_set_mode; int do_set_bittiming; int * bittiming_const; } ;
struct mscan_priv {TYPE_2__* tx_queue; TYPE_1__ can; int napi; } ;
struct TYPE_4__ {int id; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct net_device* FUNC_0 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct mscan_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int *,int ,int) ;

struct net_device *FUNC_3(void)
{
 struct net_device *VAR_10;
 struct mscan_priv *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_0(sizeof(struct mscan_priv), VAR_3);
 if (!VAR_10)
  return ((void*)0);
 VAR_11 = FUNC_1(VAR_10);

 VAR_10->netdev_ops = &VAR_8;

 VAR_10->flags |= VAR_2;

 FUNC_2(VAR_10, &VAR_11->napi, VAR_9, 8);

 VAR_11->can.bittiming_const = &VAR_5;
 VAR_11->can.do_set_bittiming = VAR_6;
 VAR_11->can.do_set_mode = VAR_7;
 VAR_11->can.ctrlmode_supported = VAR_0 |
  VAR_1;

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  VAR_11->tx_queue[VAR_12].id = VAR_12;
  VAR_11->tx_queue[VAR_12].mask = 1 << VAR_12;
 }

 return VAR_10;
}
