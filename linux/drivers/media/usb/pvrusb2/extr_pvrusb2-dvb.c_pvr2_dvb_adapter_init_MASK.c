
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_16__ {struct pvr2_dvb_adapter* priv; } ;
struct TYPE_17__ {int capabilities; } ;
struct TYPE_12__ {int filternum; int feednum; TYPE_7__ dmx; int * write_to_decoder; int stop_feed; int start_feed; struct pvr2_dvb_adapter* priv; } ;
struct TYPE_18__ {int filternum; scalar_t__ capabilities; TYPE_7__* demux; } ;
struct TYPE_15__ {TYPE_2__* hdw; } ;
struct pvr2_dvb_adapter {TYPE_4__ dvb_adap; TYPE_10__ demux; int dvb_net; TYPE_8__ dmxdev; TYPE_3__ channel; } ;
struct TYPE_14__ {TYPE_1__* usb_dev; } ;
struct TYPE_13__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_10__*) ;
 int FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (TYPE_8__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int *,TYPE_7__*) ;
 int FUNC_4 (TYPE_4__*,char*,int ,int *,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int FUNC_7(struct pvr2_dvb_adapter *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_4(&VAR_8->dvb_adap, "pvrusb2-dvb",
       VAR_4 ,
       &VAR_8->channel.hdw->usb_dev->dev,
       VAR_5);
 if (VAR_9 < 0) {
  FUNC_6(VAR_3,
      "dvb_register_adapter failed: error %d", VAR_9);
  goto err;
 }
 VAR_8->dvb_adap.priv = VAR_8;

 VAR_8->demux.dmx.capabilities = VAR_2 |
           VAR_1 |
           VAR_0;
 VAR_8->demux.priv = VAR_8;
 VAR_8->demux.filternum = 256;
 VAR_8->demux.feednum = 256;
 VAR_8->demux.start_feed = VAR_6;
 VAR_8->demux.stop_feed = VAR_7;
 VAR_8->demux.write_to_decoder = ((void*)0);

 VAR_9 = FUNC_0(&VAR_8->demux);
 if (VAR_9 < 0) {
  FUNC_6(VAR_3,
      "dvb_dmx_init failed: error %d", VAR_9);
  goto err_dmx;
 }

 VAR_8->dmxdev.filternum = VAR_8->demux.filternum;
 VAR_8->dmxdev.demux = &VAR_8->demux.dmx;
 VAR_8->dmxdev.capabilities = 0;

 VAR_9 = FUNC_2(&VAR_8->dmxdev, &VAR_8->dvb_adap);
 if (VAR_9 < 0) {
  FUNC_6(VAR_3,
      "dvb_dmxdev_init failed: error %d", VAR_9);
  goto err_dmx_dev;
 }

 FUNC_3(&VAR_8->dvb_adap, &VAR_8->dvb_net, &VAR_8->demux.dmx);

 return 0;

err_dmx_dev:
 FUNC_1(&VAR_8->demux);
err_dmx:
 FUNC_5(&VAR_8->dvb_adap);
err:
 return VAR_9;
}
