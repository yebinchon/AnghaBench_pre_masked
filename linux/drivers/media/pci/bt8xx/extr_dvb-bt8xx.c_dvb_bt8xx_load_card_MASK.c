
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_19__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_14__ ;


typedef int u32 ;
struct dvb_demux {int dummy; } ;
struct TYPE_25__ {struct dvb_bt8xx_card* priv; } ;
struct TYPE_29__ {int capabilities; int (* add_frontend ) (TYPE_3__*,TYPE_4__*) ;int (* connect_frontend ) (TYPE_3__*,TYPE_4__*) ;int (* remove_frontend ) (TYPE_3__*,TYPE_4__*) ;int (* disconnect_frontend ) (TYPE_3__*) ;} ;
struct TYPE_24__ {int filternum; int feednum; TYPE_3__ dmx; int * write_to_decoder; int stop_feed; int start_feed; struct dvb_bt8xx_card* priv; } ;
struct TYPE_26__ {int filternum; scalar_t__ capabilities; TYPE_3__* demux; } ;
struct TYPE_30__ {int source; } ;
struct dvb_bt8xx_card {TYPE_15__ dvb_adapter; TYPE_14__ demux; TYPE_19__ dmxdev; TYPE_4__ fe_hw; TYPE_4__ fe_mem; TYPE_2__* bt; int dvbnet; int i2c_adapter; int card_name; } ;
struct TYPE_28__ {int tasklet; int adapter; TYPE_1__* dev; } ;
struct TYPE_27__ {int dev; } ;


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
 int FUNC_0 (TYPE_14__*) ;
 int FUNC_1 (TYPE_14__*) ;
 int FUNC_2 (TYPE_19__*,TYPE_15__*) ;
 int FUNC_3 (TYPE_19__*) ;
 int FUNC_4 (TYPE_15__*,int *,TYPE_3__*) ;
 int FUNC_5 (TYPE_15__*,int ,int ,int *,int ) ;
 int FUNC_6 (TYPE_15__*) ;
 int FUNC_7 (struct dvb_bt8xx_card*,int ) ;
 int FUNC_8 (TYPE_14__*,int ,int) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_11 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_12 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_15 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_16 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_17(struct dvb_bt8xx_card *VAR_10, u32 VAR_11)
{
 int VAR_12;

 VAR_12 = FUNC_5(&VAR_10->dvb_adapter, VAR_10->card_name,
          VAR_5, &VAR_10->bt->dev->dev,
          VAR_6);
 if (VAR_12 < 0) {
  FUNC_9("dvb_register_adapter failed (errno = %d)\n", VAR_12);
  return VAR_12;
 }
 VAR_10->dvb_adapter.priv = VAR_10;

 VAR_10->bt->adapter = VAR_10->i2c_adapter;

 FUNC_8(&VAR_10->demux, 0, sizeof(struct dvb_demux));

 VAR_10->demux.dmx.capabilities = VAR_4 | VAR_3 | VAR_1;

 VAR_10->demux.priv = VAR_10;
 VAR_10->demux.filternum = 256;
 VAR_10->demux.feednum = 256;
 VAR_10->demux.start_feed = VAR_7;
 VAR_10->demux.stop_feed = VAR_8;
 VAR_10->demux.write_to_decoder = ((void*)0);

 VAR_12 = FUNC_0(&VAR_10->demux);
 if (VAR_12 < 0) {
  FUNC_9("dvb_dmx_init failed (errno = %d)\n", VAR_12);
  goto err_unregister_adaptor;
 }

 VAR_10->dmxdev.filternum = 256;
 VAR_10->dmxdev.demux = &VAR_10->demux.dmx;
 VAR_10->dmxdev.capabilities = 0;

 VAR_12 = FUNC_2(&VAR_10->dmxdev, &VAR_10->dvb_adapter);
 if (VAR_12 < 0) {
  FUNC_9("dvb_dmxdev_init failed (errno = %d)\n", VAR_12);
  goto err_dmx_release;
 }

 VAR_10->fe_hw.source = VAR_0;

 VAR_12 = VAR_10->demux.dmx.add_frontend(&VAR_10->demux.dmx, &VAR_10->fe_hw);
 if (VAR_12 < 0) {
  FUNC_9("dvb_dmx_init failed (errno = %d)\n", VAR_12);
  goto err_dmxdev_release;
 }

 VAR_10->fe_mem.source = VAR_2;

 VAR_12 = VAR_10->demux.dmx.add_frontend(&VAR_10->demux.dmx, &VAR_10->fe_mem);
 if (VAR_12 < 0) {
  FUNC_9("dvb_dmx_init failed (errno = %d)\n", VAR_12);
  goto err_remove_hw_frontend;
 }

 VAR_12 = VAR_10->demux.dmx.connect_frontend(&VAR_10->demux.dmx, &VAR_10->fe_hw);
 if (VAR_12 < 0) {
  FUNC_9("dvb_dmx_init failed (errno = %d)\n", VAR_12);
  goto err_remove_mem_frontend;
 }

 VAR_12 = FUNC_4(&VAR_10->dvb_adapter, &VAR_10->dvbnet, &VAR_10->demux.dmx);
 if (VAR_12 < 0) {
  FUNC_9("dvb_net_init failed (errno = %d)\n", VAR_12);
  goto err_disconnect_frontend;
 }

 FUNC_16(&VAR_10->bt->tasklet, VAR_9, (unsigned long) VAR_10);

 FUNC_7(VAR_10, VAR_11);

 return 0;

err_disconnect_frontend:
 VAR_10->demux.dmx.disconnect_frontend(&VAR_10->demux.dmx);
err_remove_mem_frontend:
 VAR_10->demux.dmx.remove_frontend(&VAR_10->demux.dmx, &VAR_10->fe_mem);
err_remove_hw_frontend:
 VAR_10->demux.dmx.remove_frontend(&VAR_10->demux.dmx, &VAR_10->fe_hw);
err_dmxdev_release:
 FUNC_3(&VAR_10->dmxdev);
err_dmx_release:
 FUNC_1(&VAR_10->demux);
err_unregister_adaptor:
 FUNC_6(&VAR_10->dvb_adapter);
 return VAR_12;
}
