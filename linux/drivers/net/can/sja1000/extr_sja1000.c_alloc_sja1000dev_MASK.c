
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrlmode_supported; int do_get_berr_counter; int do_set_mode; int do_set_bittiming; int * bittiming_const; } ;
struct sja1000_priv {void* priv; int cmdreg_lock; TYPE_1__ can; struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct net_device* FUNC_0 (int,int ) ;
 struct sja1000_priv* FUNC_1 (struct net_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;

struct net_device *FUNC_3(int VAR_11)
{
 struct net_device *VAR_12;
 struct sja1000_priv *VAR_13;

 VAR_12 = FUNC_0(sizeof(struct sja1000_priv) + VAR_11,
  VAR_6);
 if (!VAR_12)
  return ((void*)0);

 VAR_13 = FUNC_1(VAR_12);

 VAR_13->dev = VAR_12;
 VAR_13->can.bittiming_const = &VAR_7;
 VAR_13->can.do_set_bittiming = VAR_9;
 VAR_13->can.do_set_mode = VAR_10;
 VAR_13->can.do_get_berr_counter = VAR_8;
 VAR_13->can.ctrlmode_supported = VAR_3 |
           VAR_2 |
           VAR_0 |
           VAR_4 |
           VAR_1 |
           VAR_5;

 FUNC_2(&VAR_13->cmdreg_lock);

 if (VAR_11)
  VAR_13->priv = (void *)VAR_13 + sizeof(struct sja1000_priv);

 return VAR_12;
}
