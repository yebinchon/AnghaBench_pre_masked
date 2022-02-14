
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_24__ ;
typedef struct TYPE_30__ TYPE_21__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;


struct module {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_28__ {int mfe_shared; struct cx231xx* priv; } ;
struct TYPE_32__ {int capabilities; int (* add_frontend ) (TYPE_2__*,TYPE_3__*) ;int (* connect_frontend ) (TYPE_2__*,TYPE_3__*) ;int (* remove_frontend ) (TYPE_2__*,TYPE_3__*) ;} ;
struct TYPE_31__ {int filternum; int feednum; TYPE_2__ dmx; int stop_feed; int start_feed; struct cx231xx_dvb* priv; } ;
struct TYPE_30__ {int filternum; scalar_t__ capabilities; TYPE_2__* demux; } ;
struct TYPE_33__ {int source; } ;
struct cx231xx_dvb {TYPE_13__ adapter; TYPE_12__** frontend; TYPE_24__ demux; TYPE_21__ dmxdev; TYPE_3__ fe_hw; TYPE_3__ fe_mem; int net; int lock; } ;
struct cx231xx {scalar_t__ tuner_type; int name; int dev; int media_dev; } ;
struct TYPE_29__ {void* ts_bus_ctrl; } ;
struct TYPE_27__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (TYPE_13__*,int) ;
 int FUNC_2 (TYPE_24__*) ;
 int FUNC_3 (TYPE_24__*) ;
 int FUNC_4 (TYPE_21__*,TYPE_13__*) ;
 int FUNC_5 (TYPE_21__*) ;
 int FUNC_6 (TYPE_12__*) ;
 int FUNC_7 (TYPE_13__*,int *,TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_13__*,int ,struct module*,struct device*,int ) ;
 int FUNC_10 (TYPE_13__*,TYPE_12__*) ;
 int FUNC_11 (TYPE_13__*,int ) ;
 int FUNC_12 (TYPE_13__*) ;
 int FUNC_13 (TYPE_12__*) ;
 int FUNC_14 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_16 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_17 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_18 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_19 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_20(struct cx231xx_dvb *VAR_10,
   struct module *VAR_11,
   struct cx231xx *VAR_12, struct device *VAR_13)
{
 int VAR_14;

 FUNC_14(&VAR_10->lock);



 VAR_14 = FUNC_9(&VAR_10->adapter, VAR_12->name, VAR_11, VAR_13,
          VAR_6);
 if (VAR_14 < 0) {
  FUNC_0(VAR_12->dev,
         "%s: dvb_register_adapter failed (errno = %d)\n",
         VAR_12->name, VAR_14);
  goto fail_adapter;
 }
 FUNC_11(&VAR_10->adapter, VAR_12->media_dev);


 VAR_10->frontend[0]->ops.ts_bus_ctrl = VAR_7;
 if (VAR_10->frontend[1])
  VAR_10->frontend[1]->ops.ts_bus_ctrl = VAR_7;

 VAR_10->adapter.priv = VAR_12;


 VAR_14 = FUNC_10(&VAR_10->adapter, VAR_10->frontend[0]);
 if (VAR_14 < 0) {
  FUNC_0(VAR_12->dev,
         "%s: dvb_register_frontend failed (errno = %d)\n",
         VAR_12->name, VAR_14);
  goto fail_frontend0;
 }

 if (VAR_10->frontend[1]) {
  VAR_14 = FUNC_10(&VAR_10->adapter, VAR_10->frontend[1]);
  if (VAR_14 < 0) {
   FUNC_0(VAR_12->dev,
     "%s: 2nd dvb_register_frontend failed (errno = %d)\n",
    VAR_12->name, VAR_14);
   goto fail_frontend1;
  }


  VAR_10->adapter.mfe_shared = 1;
 }


 VAR_10->demux.dmx.capabilities =
     VAR_4 | VAR_3 |
     VAR_1;
 VAR_10->demux.priv = VAR_10;
 VAR_10->demux.filternum = 256;
 VAR_10->demux.feednum = 256;
 VAR_10->demux.start_feed = VAR_8;
 VAR_10->demux.stop_feed = VAR_9;

 VAR_14 = FUNC_2(&VAR_10->demux);
 if (VAR_14 < 0) {
  FUNC_0(VAR_12->dev,
    "%s: dvb_dmx_init failed (errno = %d)\n",
         VAR_12->name, VAR_14);
  goto fail_dmx;
 }

 VAR_10->dmxdev.filternum = 256;
 VAR_10->dmxdev.demux = &VAR_10->demux.dmx;
 VAR_10->dmxdev.capabilities = 0;
 VAR_14 = FUNC_4(&VAR_10->dmxdev, &VAR_10->adapter);
 if (VAR_14 < 0) {
  FUNC_0(VAR_12->dev,
    "%s: dvb_dmxdev_init failed (errno = %d)\n",
    VAR_12->name, VAR_14);
  goto fail_dmxdev;
 }

 VAR_10->fe_hw.source = VAR_0;
 VAR_14 = VAR_10->demux.dmx.add_frontend(&VAR_10->demux.dmx, &VAR_10->fe_hw);
 if (VAR_14 < 0) {
  FUNC_0(VAR_12->dev,
         "%s: add_frontend failed (DMX_FRONTEND_0, errno = %d)\n",
         VAR_12->name, VAR_14);
  goto fail_fe_hw;
 }

 VAR_10->fe_mem.source = VAR_2;
 VAR_14 = VAR_10->demux.dmx.add_frontend(&VAR_10->demux.dmx, &VAR_10->fe_mem);
 if (VAR_14 < 0) {
  FUNC_0(VAR_12->dev,
    "%s: add_frontend failed (DMX_MEMORY_FE, errno = %d)\n",
    VAR_12->name, VAR_14);
  goto fail_fe_mem;
 }

 VAR_14 = VAR_10->demux.dmx.connect_frontend(&VAR_10->demux.dmx, &VAR_10->fe_hw);
 if (VAR_14 < 0) {
  FUNC_0(VAR_12->dev,
    "%s: connect_frontend failed (errno = %d)\n",
    VAR_12->name, VAR_14);
  goto fail_fe_conn;
 }


 FUNC_7(&VAR_10->adapter, &VAR_10->net, &VAR_10->demux.dmx);
 VAR_14 = FUNC_1(&VAR_10->adapter,
     VAR_12->tuner_type == VAR_5);
 if (VAR_14 < 0)
  goto fail_create_graph;

 return 0;

fail_create_graph:
 FUNC_8(&VAR_10->net);
fail_fe_conn:
 VAR_10->demux.dmx.remove_frontend(&VAR_10->demux.dmx, &VAR_10->fe_mem);
fail_fe_mem:
 VAR_10->demux.dmx.remove_frontend(&VAR_10->demux.dmx, &VAR_10->fe_hw);
fail_fe_hw:
 FUNC_5(&VAR_10->dmxdev);
fail_dmxdev:
 FUNC_3(&VAR_10->demux);
fail_dmx:
 if (VAR_10->frontend[1])
  FUNC_13(VAR_10->frontend[1]);
 FUNC_13(VAR_10->frontend[0]);
fail_frontend1:
 if (VAR_10->frontend[1])
  FUNC_6(VAR_10->frontend[1]);
fail_frontend0:
 FUNC_6(VAR_10->frontend[0]);
 FUNC_12(&VAR_10->adapter);
fail_adapter:
 return VAR_14;
}
