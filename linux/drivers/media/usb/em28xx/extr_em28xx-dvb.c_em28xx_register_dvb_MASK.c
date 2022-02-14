
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_24__ ;
typedef struct TYPE_30__ TYPE_21__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_14__ ;
typedef struct TYPE_27__ TYPE_13__ ;


struct module {int dummy; } ;
struct TYPE_28__ {int * priv; int mdev; } ;
struct TYPE_33__ {int capabilities; int (* add_frontend ) (TYPE_3__*,TYPE_4__*) ;int (* connect_frontend ) (TYPE_3__*,TYPE_4__*) ;int (* remove_frontend ) (TYPE_3__*,TYPE_4__*) ;} ;
struct TYPE_31__ {int filternum; int feednum; TYPE_3__ dmx; int stop_feed; int start_feed; struct em28xx_dvb* priv; } ;
struct TYPE_30__ {int filternum; scalar_t__ capabilities; TYPE_3__* demux; } ;
struct TYPE_34__ {int source; } ;
struct em28xx_dvb {TYPE_14__ adapter; TYPE_13__** fe; TYPE_24__ demux; TYPE_21__ dmxdev; TYPE_4__ fe_hw; TYPE_4__ fe_mem; int net; int lock; } ;
struct em28xx {size_t def_i2c_bus; scalar_t__ tuner_type; int has_video; TYPE_2__* intf; int * i2c_bus; int media_dev; } ;
struct device {int dummy; } ;
struct TYPE_32__ {int dev; } ;
struct TYPE_29__ {void* ts_bus_ctrl; } ;
struct TYPE_27__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (TYPE_14__*,int) ;
 int FUNC_3 (TYPE_24__*) ;
 int FUNC_4 (TYPE_24__*) ;
 int FUNC_5 (TYPE_21__*,TYPE_14__*) ;
 int FUNC_6 (TYPE_21__*) ;
 int FUNC_7 (TYPE_13__*) ;
 int FUNC_8 (TYPE_14__*,int *,TYPE_3__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_14__*,int ,struct module*,struct device*,int ) ;
 int FUNC_11 (TYPE_14__*,TYPE_13__*) ;
 int FUNC_12 (TYPE_14__*) ;
 int FUNC_13 (TYPE_13__*) ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_16 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_17 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_18 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_19 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_20(struct em28xx_dvb *VAR_10, struct module *VAR_11,
          struct em28xx *VAR_12, struct device *VAR_13)
{
 int VAR_14;
 bool VAR_15 = 0;

 FUNC_14(&VAR_10->lock);


 VAR_14 = FUNC_10(&VAR_10->adapter,
          FUNC_0(&VAR_12->intf->dev), VAR_11,
          VAR_13, VAR_6);
 if (VAR_14 < 0) {
  FUNC_1(&VAR_12->intf->dev,
    "dvb_register_adapter failed (errno = %d)\n",
    VAR_14);
  goto fail_adapter;
 }





 VAR_10->fe[0]->ops.ts_bus_ctrl = VAR_7;
 if (VAR_10->fe[1])
  VAR_10->fe[1]->ops.ts_bus_ctrl = VAR_7;

 VAR_10->adapter.priv = &VAR_12->i2c_bus[VAR_12->def_i2c_bus];


 VAR_14 = FUNC_11(&VAR_10->adapter, VAR_10->fe[0]);
 if (VAR_14 < 0) {
  FUNC_1(&VAR_12->intf->dev,
    "dvb_register_frontend failed (errno = %d)\n",
    VAR_14);
  goto fail_frontend0;
 }


 if (VAR_10->fe[1]) {
  VAR_14 = FUNC_11(&VAR_10->adapter, VAR_10->fe[1]);
  if (VAR_14 < 0) {
   FUNC_1(&VAR_12->intf->dev,
     "2nd dvb_register_frontend failed (errno = %d)\n",
     VAR_14);
   goto fail_frontend1;
  }
 }


 VAR_10->demux.dmx.capabilities =
  VAR_4 | VAR_3 |
  VAR_1;
 VAR_10->demux.priv = VAR_10;
 VAR_10->demux.filternum = 256;
 VAR_10->demux.feednum = 256;
 VAR_10->demux.start_feed = VAR_8;
 VAR_10->demux.stop_feed = VAR_9;

 VAR_14 = FUNC_3(&VAR_10->demux);
 if (VAR_14 < 0) {
  FUNC_1(&VAR_12->intf->dev,
    "dvb_dmx_init failed (errno = %d)\n",
    VAR_14);
  goto fail_dmx;
 }

 VAR_10->dmxdev.filternum = 256;
 VAR_10->dmxdev.demux = &VAR_10->demux.dmx;
 VAR_10->dmxdev.capabilities = 0;
 VAR_14 = FUNC_5(&VAR_10->dmxdev, &VAR_10->adapter);
 if (VAR_14 < 0) {
  FUNC_1(&VAR_12->intf->dev,
    "dvb_dmxdev_init failed (errno = %d)\n",
    VAR_14);
  goto fail_dmxdev;
 }

 VAR_10->fe_hw.source = VAR_0;
 VAR_14 = VAR_10->demux.dmx.add_frontend(&VAR_10->demux.dmx, &VAR_10->fe_hw);
 if (VAR_14 < 0) {
  FUNC_1(&VAR_12->intf->dev,
    "add_frontend failed (DMX_FRONTEND_0, errno = %d)\n",
    VAR_14);
  goto fail_fe_hw;
 }

 VAR_10->fe_mem.source = VAR_2;
 VAR_14 = VAR_10->demux.dmx.add_frontend(&VAR_10->demux.dmx, &VAR_10->fe_mem);
 if (VAR_14 < 0) {
  FUNC_1(&VAR_12->intf->dev,
    "add_frontend failed (DMX_MEMORY_FE, errno = %d)\n",
    VAR_14);
  goto fail_fe_mem;
 }

 VAR_14 = VAR_10->demux.dmx.connect_frontend(&VAR_10->demux.dmx, &VAR_10->fe_hw);
 if (VAR_14 < 0) {
  FUNC_1(&VAR_12->intf->dev,
    "connect_frontend failed (errno = %d)\n",
    VAR_14);
  goto fail_fe_conn;
 }


 FUNC_8(&VAR_10->adapter, &VAR_10->net, &VAR_10->demux.dmx);


 if (!VAR_12->has_video || VAR_12->tuner_type == VAR_5)
  VAR_15 = 1;

 VAR_14 = FUNC_2(&VAR_10->adapter, VAR_15);
 if (VAR_14 < 0)
  goto fail_create_graph;

 return 0;

fail_create_graph:
 FUNC_9(&VAR_10->net);
fail_fe_conn:
 VAR_10->demux.dmx.remove_frontend(&VAR_10->demux.dmx, &VAR_10->fe_mem);
fail_fe_mem:
 VAR_10->demux.dmx.remove_frontend(&VAR_10->demux.dmx, &VAR_10->fe_hw);
fail_fe_hw:
 FUNC_6(&VAR_10->dmxdev);
fail_dmxdev:
 FUNC_4(&VAR_10->demux);
fail_dmx:
 if (VAR_10->fe[1])
  FUNC_13(VAR_10->fe[1]);
 FUNC_13(VAR_10->fe[0]);
fail_frontend1:
 if (VAR_10->fe[1])
  FUNC_7(VAR_10->fe[1]);
fail_frontend0:
 FUNC_7(VAR_10->fe[0]);
 FUNC_12(&VAR_10->adapter);
fail_adapter:
 return VAR_14;
}
