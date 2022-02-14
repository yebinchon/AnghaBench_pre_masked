
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_26__ ;
typedef struct TYPE_30__ TYPE_23__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_16__ ;


struct TYPE_28__ {struct mantis_pci* priv; } ;
struct TYPE_33__ {int capabilities; int (* add_frontend ) (TYPE_3__*,TYPE_4__*) ;int (* connect_frontend ) (TYPE_3__*,TYPE_4__*) ;int (* remove_frontend ) (TYPE_3__*,TYPE_4__*) ;} ;
struct TYPE_31__ {int filternum; int feednum; TYPE_3__ dmx; int * write_to_decoder; int stop_feed; int start_feed; struct mantis_pci* priv; } ;
struct TYPE_30__ {int filternum; scalar_t__ capabilities; TYPE_3__* demux; } ;
struct TYPE_34__ {int source; } ;
struct mantis_pci {TYPE_16__ dvb_adapter; TYPE_26__ demux; TYPE_23__ dmxdev; TYPE_4__ fe_hw; TYPE_4__ fe_mem; TYPE_7__* fe; int dvbnet; int tasklet; struct mantis_hwconfig* hwconfig; TYPE_1__* pdev; } ;
struct mantis_hwconfig {int (* frontend_init ) (struct mantis_pci*,TYPE_7__*) ;} ;
struct TYPE_32__ {int (* release ) (TYPE_7__*) ;} ;
struct TYPE_35__ {TYPE_2__ ops; } ;
struct TYPE_29__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int,char*,...) ;
 int FUNC_1 (TYPE_26__*) ;
 int FUNC_2 (TYPE_26__*) ;
 int FUNC_3 (TYPE_23__*,TYPE_16__*) ;
 int FUNC_4 (TYPE_23__*) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_16__*,int *,TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_16__*,char*,int ,int *,int ) ;
 int FUNC_9 (TYPE_16__*,TYPE_7__*) ;
 int FUNC_10 (TYPE_16__*) ;
 int FUNC_11 (TYPE_7__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_13 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_14 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_15 (struct mantis_pci*,TYPE_7__*) ;
 int FUNC_16 (TYPE_7__*) ;
 int FUNC_17 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_18 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int ,unsigned long) ;
 int FUNC_21 (int *) ;

int FUNC_22(struct mantis_pci *VAR_14)
{
 struct mantis_hwconfig *VAR_15 = VAR_14->hwconfig;
 int VAR_16 = -1;

 FUNC_0(VAR_7, 1, "dvb_register_adapter");

 VAR_16 = FUNC_8(&VAR_14->dvb_adapter,
          "Mantis DVB adapter",
          VAR_9,
          &VAR_14->pdev->dev,
          VAR_10);

 if (VAR_16 < 0) {

  FUNC_0(VAR_8, 1, "Error registering adapter");
  return -VAR_5;
 }

 VAR_14->dvb_adapter.priv = VAR_14;
 VAR_14->demux.dmx.capabilities = VAR_4 |
      VAR_3 |
      VAR_1;

 VAR_14->demux.priv = VAR_14;
 VAR_14->demux.filternum = 256;
 VAR_14->demux.feednum = 256;
 VAR_14->demux.start_feed = VAR_12;
 VAR_14->demux.stop_feed = VAR_13;
 VAR_14->demux.write_to_decoder = ((void*)0);

 FUNC_0(VAR_7, 1, "dvb_dmx_init");
 VAR_16 = FUNC_1(&VAR_14->demux);
 if (VAR_16 < 0) {
  FUNC_0(VAR_8, 1, "dvb_dmx_init failed, ERROR=%d", VAR_16);

  goto err0;
 }

 VAR_14->dmxdev.filternum = 256;
 VAR_14->dmxdev.demux = &VAR_14->demux.dmx;
 VAR_14->dmxdev.capabilities = 0;
 FUNC_0(VAR_7, 1, "dvb_dmxdev_init");

 VAR_16 = FUNC_3(&VAR_14->dmxdev, &VAR_14->dvb_adapter);
 if (VAR_16 < 0) {

  FUNC_0(VAR_8, 1, "dvb_dmxdev_init failed, ERROR=%d", VAR_16);
  goto err1;
 }

 VAR_14->fe_hw.source = VAR_0;
 VAR_16 = VAR_14->demux.dmx.add_frontend(&VAR_14->demux.dmx, &VAR_14->fe_hw);
 if (VAR_16 < 0) {

  FUNC_0(VAR_8, 1, "dvb_dmx_init failed, ERROR=%d", VAR_16);
  goto err2;
 }

 VAR_14->fe_mem.source = VAR_2;
 VAR_16 = VAR_14->demux.dmx.add_frontend(&VAR_14->demux.dmx, &VAR_14->fe_mem);
 if (VAR_16 < 0) {
  FUNC_0(VAR_8, 1, "dvb_dmx_init failed, ERROR=%d", VAR_16);
  goto err3;
 }

 VAR_16 = VAR_14->demux.dmx.connect_frontend(&VAR_14->demux.dmx, &VAR_14->fe_hw);
 if (VAR_16 < 0) {
  FUNC_0(VAR_8, 1, "dvb_dmx_init failed, ERROR=%d", VAR_16);
  goto err4;
 }

 FUNC_6(&VAR_14->dvb_adapter, &VAR_14->dvbnet, &VAR_14->demux.dmx);
 FUNC_20(&VAR_14->tasklet, VAR_11, (unsigned long) VAR_14);
 FUNC_19(&VAR_14->tasklet);
 if (VAR_14->hwconfig) {
  VAR_16 = VAR_15->frontend_init(VAR_14, VAR_14->fe);
  if (VAR_16 < 0) {
   FUNC_0(VAR_8, 1, "!!! NO Frontends found !!!");
   goto err5;
  } else {
   if (VAR_14->fe == ((void*)0)) {
    VAR_16 = -VAR_6;
    FUNC_0(VAR_8, 1, "FE <NULL>");
    goto err5;
   }
   VAR_16 = FUNC_9(&VAR_14->dvb_adapter, VAR_14->fe);
   if (VAR_16) {
    FUNC_0(VAR_8, 1, "ERROR: Frontend registration failed");

    if (VAR_14->fe->ops.release)
     VAR_14->fe->ops.release(VAR_14->fe);

    VAR_14->fe = ((void*)0);
    goto err5;
   }
  }
 }

 return 0;


err5:
 FUNC_21(&VAR_14->tasklet);
 FUNC_7(&VAR_14->dvbnet);
 if (VAR_14->fe) {
  FUNC_11(VAR_14->fe);
  FUNC_5(VAR_14->fe);
 }
err4:
 VAR_14->demux.dmx.remove_frontend(&VAR_14->demux.dmx, &VAR_14->fe_mem);

err3:
 VAR_14->demux.dmx.remove_frontend(&VAR_14->demux.dmx, &VAR_14->fe_hw);

err2:
 FUNC_4(&VAR_14->dmxdev);

err1:
 FUNC_2(&VAR_14->demux);

err0:
 FUNC_10(&VAR_14->dvb_adapter);

 return VAR_16;
}
