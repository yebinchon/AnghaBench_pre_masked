
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_25__ {int proposed_mac; struct dvb_usb_adapter* priv; } ;
struct TYPE_16__ {int capabilities; } ;
struct TYPE_18__ {scalar_t__ filternum; scalar_t__ feednum; TYPE_10__ dmx; int * write_to_decoder; int stop_feed; int start_feed; struct dvb_usb_adapter* priv; } ;
struct TYPE_17__ {scalar_t__ filternum; scalar_t__ capabilities; TYPE_10__* demux; } ;
struct TYPE_22__ {int num_frontends; } ;
struct dvb_usb_adapter {TYPE_7__ dvb_adap; TYPE_14__ demux; TYPE_11__ dmxdev; int state; int dvb_net; TYPE_5__* fe_adap; TYPE_4__ props; TYPE_6__* dev; } ;
struct TYPE_21__ {scalar_t__ (* read_mac_address ) (TYPE_6__*,int ) ;} ;
struct TYPE_24__ {TYPE_3__ props; TYPE_2__* udev; int owner; TYPE_1__* desc; } ;
struct TYPE_23__ {scalar_t__ max_feed_count; } ;
struct TYPE_20__ {int dev; } ;
struct TYPE_19__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_14__*) ;
 int FUNC_2 (TYPE_14__*) ;
 int FUNC_3 (TYPE_11__*,TYPE_7__*) ;
 int FUNC_4 (TYPE_11__*) ;
 int FUNC_5 (TYPE_7__*,int *,TYPE_10__*) ;
 int FUNC_6 (TYPE_7__*,int ,int ,int *,short*) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (struct dvb_usb_adapter*) ;
 int FUNC_9 (struct dvb_usb_adapter*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,int ) ;
 scalar_t__ FUNC_12 (TYPE_6__*,int ) ;

int FUNC_13(struct dvb_usb_adapter *VAR_5, short *VAR_6)
{
 int VAR_7;
 int VAR_8 = FUNC_6(&VAR_5->dvb_adap, VAR_5->dev->desc->name,
           VAR_5->dev->owner, &VAR_5->dev->udev->dev,
           VAR_6);

 if (VAR_8 < 0) {
  FUNC_0("dvb_register_adapter failed: error %d", VAR_8);
  goto err;
 }
 VAR_5->dvb_adap.priv = VAR_5;

 VAR_8 = FUNC_8(VAR_5);
 if (VAR_8 < 0) {
  FUNC_0("dvb_usb_media_device_init failed: error %d", VAR_8);
  goto err_mc;
 }

 if (VAR_5->dev->props.read_mac_address) {
  if (VAR_5->dev->props.read_mac_address(VAR_5->dev, VAR_5->dvb_adap.proposed_mac) == 0)
   FUNC_11("MAC address: %pM", VAR_5->dvb_adap.proposed_mac);
  else
   FUNC_10("MAC address reading failed.");
 }


 VAR_5->demux.dmx.capabilities = VAR_1 | VAR_0;
 VAR_5->demux.priv = VAR_5;

 VAR_5->demux.filternum = 0;
 for (VAR_7 = 0; VAR_7 < VAR_5->props.num_frontends; VAR_7++) {
  if (VAR_5->demux.filternum < VAR_5->fe_adap[VAR_7].max_feed_count)
   VAR_5->demux.filternum = VAR_5->fe_adap[VAR_7].max_feed_count;
 }
 VAR_5->demux.feednum = VAR_5->demux.filternum;
 VAR_5->demux.start_feed = VAR_3;
 VAR_5->demux.stop_feed = VAR_4;
 VAR_5->demux.write_to_decoder = ((void*)0);
 if ((VAR_8 = FUNC_1(&VAR_5->demux)) < 0) {
  FUNC_10("dvb_dmx_init failed: error %d", VAR_8);
  goto err_dmx;
 }

 VAR_5->dmxdev.filternum = VAR_5->demux.filternum;
 VAR_5->dmxdev.demux = &VAR_5->demux.dmx;
 VAR_5->dmxdev.capabilities = 0;
 if ((VAR_8 = FUNC_3(&VAR_5->dmxdev, &VAR_5->dvb_adap)) < 0) {
  FUNC_10("dvb_dmxdev_init failed: error %d", VAR_8);
  goto err_dmx_dev;
 }

 if ((VAR_8 = FUNC_5(&VAR_5->dvb_adap, &VAR_5->dvb_net,
      &VAR_5->demux.dmx)) < 0) {
  FUNC_10("dvb_net_init failed: error %d", VAR_8);
  goto err_net_init;
 }

 VAR_5->state |= VAR_2;
 return 0;

err_net_init:
 FUNC_4(&VAR_5->dmxdev);
err_dmx_dev:
 FUNC_2(&VAR_5->demux);
err_dmx:
 FUNC_9(VAR_5);
err_mc:
 FUNC_7(&VAR_5->dvb_adap);
err:
 return VAR_8;
}
