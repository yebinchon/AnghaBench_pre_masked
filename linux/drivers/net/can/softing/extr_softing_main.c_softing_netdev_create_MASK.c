
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int freq; } ;
struct TYPE_9__ {int ctrlmode_supported; int do_set_mode; TYPE_2__ clock; TYPE_5__* bittiming_const; } ;
struct TYPE_10__ {int sjw_max; int brp_max; } ;
struct softing_priv {TYPE_4__ can; int output; int chip; TYPE_5__ btr_const; struct softing* card; struct net_device* netdev; } ;
struct softing {TYPE_3__* pdev; TYPE_1__* pdat; } ;
struct net_device {int * netdev_ops; int flags; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {int max_sjw; int max_brp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int *) ;
 int VAR_2 ;
 struct net_device* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_5__*,int *,int) ;
 struct softing_priv* FUNC_4 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct net_device*) ;
 int VAR_5 ;

__attribute__((used)) static struct net_device *FUNC_6(struct softing *VAR_6,
      uint16_t VAR_7)
{
 struct net_device *VAR_8;
 struct softing_priv *VAR_9;

 VAR_8 = FUNC_1(sizeof(*VAR_9), VAR_2);
 if (!VAR_8) {
  FUNC_2(&VAR_6->pdev->dev, "alloc_candev failed\n");
  return ((void*)0);
 }
 VAR_9 = FUNC_4(VAR_8);
 VAR_9->netdev = VAR_8;
 VAR_9->card = VAR_6;
 FUNC_3(&VAR_9->btr_const, &VAR_3, sizeof(VAR_9->btr_const));
 VAR_9->btr_const.brp_max = VAR_6->pdat->max_brp;
 VAR_9->btr_const.sjw_max = VAR_6->pdat->max_sjw;
 VAR_9->can.bittiming_const = &VAR_9->btr_const;
 VAR_9->can.clock.freq = 8000000;
 VAR_9->chip = VAR_7;
 VAR_9->output = FUNC_5(VAR_8);
 FUNC_0(VAR_8, &VAR_6->pdev->dev);

 VAR_8->flags |= VAR_1;
 VAR_8->netdev_ops = &VAR_5;
 VAR_9->can.do_set_mode = VAR_4;
 VAR_9->can.ctrlmode_supported = VAR_0;

 return VAR_8;
}
