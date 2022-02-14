
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_12__ {scalar_t__ hw_disabled; } ;
struct TYPE_14__ {int link_id; TYPE_1__ prop; TYPE_2__* ops; int * dev; } ;
struct TYPE_15__ {TYPE_3__ bus; int * dev; scalar_t__ msg_count; int instance; int registers; } ;
struct sdw_intel {TYPE_4__ cdns; TYPE_10__* res; int instance; } ;
struct sdw_cdns_stream_config {int dummy; } ;
struct platform_device {int dev; int id; } ;
struct TYPE_13__ {int read_prop; } ;
struct TYPE_11__ {int irq; int registers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 TYPE_10__* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 struct sdw_intel* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int,struct sdw_intel*) ;
 int FUNC_5 (struct sdw_intel*) ;
 int FUNC_6 (struct sdw_intel*) ;
 int FUNC_7 (struct sdw_intel*) ;
 int FUNC_8 (struct sdw_intel*,struct sdw_cdns_stream_config*) ;
 int VAR_4 ;
 int FUNC_9 (struct sdw_intel*) ;
 int FUNC_10 (struct sdw_intel*) ;
 int FUNC_11 (struct platform_device*,struct sdw_intel*) ;
 int FUNC_12 (int,int ,int ,int ,int ,TYPE_4__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;
 int VAR_5 ;
 int FUNC_16 (TYPE_4__*,struct sdw_cdns_stream_config) ;
 int FUNC_17 (TYPE_4__*) ;
 int VAR_6 ;
 int FUNC_18 (TYPE_3__*) ;
 TYPE_2__ VAR_7 ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_8)
{
 struct sdw_cdns_stream_config VAR_9;
 struct sdw_intel *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(&VAR_8->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->instance = VAR_8->id;
 VAR_10->res = FUNC_1(&VAR_8->dev);
 VAR_10->cdns.dev = &VAR_8->dev;
 VAR_10->cdns.registers = VAR_10->res->registers;
 VAR_10->cdns.instance = VAR_10->instance;
 VAR_10->cdns.msg_count = 0;
 VAR_10->cdns.bus.dev = &VAR_8->dev;
 VAR_10->cdns.bus.link_id = VAR_8->id;

 FUNC_17(&VAR_10->cdns);


 VAR_7.read_prop = VAR_4;
 VAR_10->cdns.bus.ops = &VAR_7;

 FUNC_11(VAR_8, VAR_10);

 VAR_11 = FUNC_13(&VAR_10->cdns.bus);
 if (VAR_11) {
  FUNC_0(&VAR_8->dev, "sdw_add_bus_master fail: %d\n", VAR_11);
  goto err_master_reg;
 }

 if (VAR_10->cdns.bus.prop.hw_disabled) {
  FUNC_2(&VAR_8->dev, "SoundWire master %d is disabled, ignoring\n",
    VAR_10->cdns.bus.link_id);
  return 0;
 }


 FUNC_6(VAR_10);
 FUNC_10(VAR_10);

 VAR_11 = FUNC_15(&VAR_10->cdns);
 if (VAR_11)
  goto err_init;

 VAR_11 = FUNC_14(&VAR_10->cdns);


 FUNC_8(VAR_10, &VAR_9);
 VAR_11 = FUNC_16(&VAR_10->cdns, VAR_9);
 if (VAR_11)
  goto err_init;

 FUNC_7(VAR_10);


 VAR_11 = FUNC_12(VAR_10->res->irq, VAR_5, VAR_6,
       VAR_2, VAR_3, &VAR_10->cdns);
 if (VAR_11 < 0) {
  FUNC_0(VAR_10->cdns.dev, "unable to grab IRQ %d, disabling device\n",
   VAR_10->res->irq);
  goto err_init;
 }


 VAR_11 = FUNC_9(VAR_10);
 if (VAR_11) {
  FUNC_0(VAR_10->cdns.dev, "DAI registration failed: %d\n", VAR_11);
  FUNC_19(VAR_10->cdns.dev);
  goto err_dai;
 }

 FUNC_5(VAR_10);

 return 0;

err_dai:
 FUNC_4(VAR_10->res->irq, VAR_10);
err_init:
 FUNC_18(&VAR_10->cdns.bus);
err_master_reg:
 return VAR_11;
}
