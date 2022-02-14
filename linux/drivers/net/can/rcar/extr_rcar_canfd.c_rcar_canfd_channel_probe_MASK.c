
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct rcar_canfd_global {struct rcar_canfd_channel** ch; scalar_t__ fdmode; int base; struct platform_device* pdev; } ;
struct TYPE_3__ {size_t freq; } ;
struct TYPE_4__ {int do_get_berr_counter; int do_set_mode; void* ctrlmode_supported; int * bittiming_const; int * data_bittiming_const; TYPE_1__ clock; } ;
struct rcar_canfd_channel {size_t channel; int napi; int tx_lock; struct rcar_canfd_global* gpriv; TYPE_2__ can; int base; struct net_device* ndev; } ;
struct platform_device {int dev; } ;
struct net_device {int flags; int * netdev_ops; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,size_t) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 struct rcar_canfd_channel* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,int *,int ,int ) ;
 int FUNC_9 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct rcar_canfd_global *VAR_14, u32 VAR_15,
        u32 VAR_16)
{
 struct platform_device *VAR_17 = VAR_14->pdev;
 struct rcar_canfd_channel *VAR_18;
 struct net_device *VAR_19;
 int VAR_20 = -VAR_2;

 VAR_19 = FUNC_1(sizeof(*VAR_18), VAR_5);
 if (!VAR_19) {
  FUNC_3(&VAR_17->dev, "alloc_candev() failed\n");
  VAR_20 = -VAR_3;
  goto fail;
 }
 VAR_18 = FUNC_7(VAR_19);

 VAR_19->netdev_ops = &VAR_11;
 VAR_19->flags |= VAR_4;
 VAR_18->ndev = VAR_19;
 VAR_18->base = VAR_14->base;
 VAR_18->channel = VAR_15;
 VAR_18->can.clock.freq = VAR_16;
 FUNC_4(&VAR_17->dev, "can_clk rate is %u\n", VAR_18->can.clock.freq);

 if (VAR_14->fdmode) {
  VAR_18->can.bittiming_const = &VAR_12;
  VAR_18->can.data_bittiming_const =
   &VAR_8;


  FUNC_2(VAR_19, VAR_1);
  VAR_18->can.ctrlmode_supported = VAR_0;
 } else {

  VAR_18->can.bittiming_const = &VAR_7;
  VAR_18->can.ctrlmode_supported = VAR_0;
 }

 VAR_18->can.do_set_mode = VAR_9;
 VAR_18->can.do_get_berr_counter = VAR_10;
 VAR_18->gpriv = VAR_14;
 FUNC_0(VAR_19, &VAR_17->dev);

 FUNC_8(VAR_19, &VAR_18->napi, VAR_13,
         VAR_6);
 VAR_20 = FUNC_10(VAR_19);
 if (VAR_20) {
  FUNC_3(&VAR_17->dev,
   "register_candev() failed, error %d\n", VAR_20);
  goto fail_candev;
 }
 FUNC_11(&VAR_18->tx_lock);
 FUNC_5(VAR_19);
 VAR_14->ch[VAR_18->channel] = VAR_18;
 FUNC_4(&VAR_17->dev, "device registered (channel %u)\n", VAR_18->channel);
 return 0;

fail_candev:
 FUNC_9(&VAR_18->napi);
 FUNC_6(VAR_19);
fail:
 return VAR_20;
}
