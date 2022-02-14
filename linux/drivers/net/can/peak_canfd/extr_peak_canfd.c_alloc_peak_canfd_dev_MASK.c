
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrlmode_supported; int do_set_data_bittiming; int do_set_bittiming; int do_get_berr_counter; int do_set_mode; int * data_bittiming_const; int * bittiming_const; int state; } ;
struct peak_canfd_priv {int index; int echo_lock; scalar_t__ cmd_len; struct net_device* ndev; TYPE_1__ can; } ;
struct net_device {int dev_id; int * netdev_ops; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct net_device* FUNC_0 (int,int) ;
 struct peak_canfd_priv* FUNC_1 (struct net_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int *) ;

struct net_device *FUNC_3(int VAR_16, int VAR_17,
     int VAR_18)
{
 struct net_device *VAR_19;
 struct peak_canfd_priv *VAR_20;


 if (VAR_18 < 0)
  VAR_18 = VAR_8;


 VAR_19 = FUNC_0(VAR_16, VAR_18);
 if (!VAR_19)
  return ((void*)0);

 VAR_20 = FUNC_1(VAR_19);


 VAR_20->can.state = VAR_6;
 VAR_20->can.bittiming_const = &VAR_12;
 VAR_20->can.data_bittiming_const = &VAR_9;

 VAR_20->can.do_set_mode = VAR_15;
 VAR_20->can.do_get_berr_counter = VAR_10;
 VAR_20->can.do_set_bittiming = VAR_13;
 VAR_20->can.do_set_data_bittiming = VAR_14;
 VAR_20->can.ctrlmode_supported = VAR_5 |
           VAR_4 |
           VAR_0 |
           VAR_2 |
           VAR_3 |
           VAR_1;

 VAR_20->ndev = VAR_19;
 VAR_20->index = VAR_17;
 VAR_20->cmd_len = 0;
 FUNC_2(&VAR_20->echo_lock);

 VAR_19->flags |= VAR_7;
 VAR_19->netdev_ops = &VAR_11;
 VAR_19->dev_id = VAR_17;

 return VAR_19;
}
