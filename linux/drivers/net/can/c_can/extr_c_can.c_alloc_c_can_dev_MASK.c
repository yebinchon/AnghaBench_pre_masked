
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int ctrlmode_supported; int do_get_berr_counter; int do_set_mode; int * bittiming_const; } ;
struct c_can_priv {TYPE_1__ can; struct net_device* dev; int napi; } ;


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
 struct c_can_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int *,int ,int ) ;

struct net_device *FUNC_3(void)
{
 struct net_device *VAR_9;
 struct c_can_priv *VAR_10;

 VAR_9 = FUNC_0(sizeof(struct c_can_priv), VAR_3);
 if (!VAR_9)
  return ((void*)0);

 VAR_10 = FUNC_1(VAR_9);
 FUNC_2(VAR_9, &VAR_10->napi, VAR_7, VAR_4);

 VAR_10->dev = VAR_9;
 VAR_10->can.bittiming_const = &VAR_5;
 VAR_10->can.do_set_mode = VAR_8;
 VAR_10->can.do_get_berr_counter = VAR_6;
 VAR_10->can.ctrlmode_supported = VAR_2 |
     VAR_1 |
     VAR_0;

 return VAR_9;
}
