
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;
typedef struct TYPE_16__ TYPE_11__ ;


struct dvb_tuner_ops {int dummy; } ;
struct TYPE_22__ {int capabilities; int (* connect_frontend ) (TYPE_5__*,TYPE_6__*) ;int (* add_frontend ) (TYPE_5__*,TYPE_6__*) ;} ;
struct dvb_demux {int filternum; int feednum; TYPE_5__ dmx; int stop_feed; int start_feed; struct ddb_input* priv; } ;
struct dvb_adapter {int dummy; } ;
struct ddb_port {size_t lnr; scalar_t__ nr; int type; TYPE_4__* dev; struct ddb_dvb* dvb; } ;
struct ddb_input {int nr; struct ddb_port* port; } ;
struct ddb_ids {int hwid; } ;
struct TYPE_17__ {int filternum; TYPE_5__* demux; } ;
struct TYPE_23__ {int source; } ;
struct ddb_dvb {int attached; TYPE_11__* fe; TYPE_11__* fe2; TYPE_15__ dmxdev; int dvbnet; TYPE_6__ hw_frontend; struct dvb_demux demux; TYPE_6__ mem_frontend; struct dvb_adapter* adap; } ;
struct TYPE_21__ {int dev; TYPE_3__* link; } ;
struct TYPE_20__ {TYPE_1__* info; struct ddb_ids ids; } ;
struct TYPE_19__ {int tuner_ops; } ;
struct TYPE_18__ {int ts_quirks; } ;
struct TYPE_16__ {TYPE_2__ ops; int tuner_priv; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ddb_input*,int) ;
 int FUNC_1 (struct ddb_input*) ;
 int FUNC_2 (struct ddb_input*,int,int) ;
 int FUNC_3 (struct ddb_input*) ;
 int FUNC_4 (struct ddb_input*) ;
 int FUNC_5 (struct ddb_input*) ;
 int FUNC_6 (struct ddb_input*,int) ;
 int FUNC_7 (struct ddb_input*,int,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct dvb_demux*) ;
 int FUNC_10 (TYPE_15__*,struct dvb_adapter*) ;
 int FUNC_11 (TYPE_11__*) ;
 int FUNC_12 (struct ddb_input*) ;
 int FUNC_13 (struct dvb_adapter*,int *,TYPE_5__*) ;
 scalar_t__ FUNC_14 (struct dvb_adapter*,TYPE_11__*) ;
 int FUNC_15 (TYPE_11__*) ;
 int FUNC_16 (int *,int *,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_17 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_18 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_19 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_20 (struct ddb_input*,int) ;
 int FUNC_21 (struct ddb_input*,int) ;
 int FUNC_22 (struct ddb_input*,int) ;
 int FUNC_23 (struct ddb_input*) ;

__attribute__((used)) static int FUNC_24(struct ddb_input *VAR_10)
{
 int VAR_11 = 0;
 struct ddb_dvb *VAR_12 = &VAR_10->port->dvb[VAR_10->nr & 1];
 struct ddb_port *VAR_13 = VAR_10->port;
 struct dvb_adapter *VAR_14 = VAR_12->adap;
 struct dvb_demux *VAR_15 = &VAR_12->demux;
 struct ddb_ids *VAR_16 = &VAR_10->port->dev->link[VAR_10->port->lnr].ids;
 int VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;
 if (VAR_13->nr == 0 &&
     (VAR_13->type == 133 ||
      VAR_13->type == 134)) {

  if ((VAR_16->hwid & 0x00ffffff) >= 0x00010007)
   VAR_19 = 1;
 }

 VAR_12->attached = 0x01;

 VAR_15->priv = VAR_10;
 VAR_15->dmx.capabilities = VAR_4 |
  VAR_3 | VAR_1;
 VAR_15->start_feed = VAR_8;
 VAR_15->stop_feed = VAR_9;
 VAR_15->filternum = 256;
 VAR_15->feednum = 256;
 VAR_11 = FUNC_9(VAR_15);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_12->attached = 0x10;

 VAR_12->dmxdev.filternum = 256;
 VAR_12->dmxdev.demux = &VAR_15->dmx;
 VAR_11 = FUNC_10(&VAR_12->dmxdev, VAR_14);
 if (VAR_11 < 0)
  goto err_detach;
 VAR_12->attached = 0x11;

 VAR_12->mem_frontend.source = VAR_2;
 VAR_12->demux.dmx.add_frontend(&VAR_12->demux.dmx, &VAR_12->mem_frontend);
 VAR_12->hw_frontend.source = VAR_0;
 VAR_12->demux.dmx.add_frontend(&VAR_12->demux.dmx, &VAR_12->hw_frontend);
 VAR_11 = VAR_15->dmx.connect_frontend(&VAR_15->dmx, &VAR_12->hw_frontend);
 if (VAR_11 < 0)
  goto err_detach;
 VAR_12->attached = 0x12;

 VAR_11 = FUNC_13(VAR_14, &VAR_12->dvbnet, VAR_12->dmxdev.demux);
 if (VAR_11 < 0)
  goto err_detach;
 VAR_12->attached = 0x20;

 VAR_12->fe = ((void*)0);
 VAR_12->fe2 = ((void*)0);
 switch (VAR_13->type) {
 case 128:
  if (FUNC_1(VAR_10) < 0)
   goto err_detach;
  break;
 case 136:
  if (FUNC_6(VAR_10, 0) < 0)
   goto err_detach;
  if (FUNC_20(VAR_10, 0) < 0)
   goto err_tuner;
  break;
 case 132:
  if (FUNC_6(VAR_10, 1) < 0)
   goto err_detach;
  if (FUNC_20(VAR_10, 1) < 0)
   goto err_tuner;
  break;
 case 135:
  if (FUNC_7(VAR_10, 0, VAR_19) < 0)
   goto err_detach;
  if (FUNC_21(VAR_10, 0) < 0)
   goto err_tuner;
  break;
 case 133:
  if (FUNC_7(VAR_10, 1, VAR_19) < 0)
   goto err_detach;
  if (FUNC_21(VAR_10, 1) < 0)
   goto err_tuner;
  break;
 case 134:
  if (FUNC_7(VAR_10, 0, VAR_19) < 0)
   goto err_detach;
  if (FUNC_21(VAR_10, 1) < 0)
   goto err_tuner;
  break;
 case 137:
  if (FUNC_3(VAR_10) < 0)
   goto err_detach;
  if (FUNC_23(VAR_10) < 0)
   goto err_tuner;
  break;
 case 138:
  if (FUNC_5(VAR_10) < 0)
   goto err_detach;
  if (FUNC_22(VAR_10, VAR_13->type) < 0)
   goto err_tuner;
  break;
 case 143:
  if (VAR_10->port->dev->link[VAR_10->port->lnr].info->ts_quirks &
      VAR_6)
   VAR_18 = 0;
  else
   VAR_18 = 1;

 case 139:
 case 141:
 case 130:
  if (VAR_10->port->dev->link[VAR_10->port->lnr].info->ts_quirks
   & VAR_7)
   VAR_17 = 0;
  else
   VAR_17 = 1;
  if (FUNC_2(VAR_10, VAR_17, VAR_18) < 0)
   goto err_detach;
  if (FUNC_22(VAR_10, VAR_13->type) < 0)
   goto err_tuner;
  break;
 case 144:
  VAR_18 = 1;

 case 140:
 case 142:
 case 131:
  if (FUNC_2(VAR_10, 0, VAR_18) < 0)
   goto err_detach;
  if (FUNC_22(VAR_10, VAR_13->type) < 0)
   goto err_tuner;
  break;
 case 145:
  if (FUNC_4(VAR_10) < 0)
   goto err_detach;
  break;
 case 129:
  if (FUNC_0(VAR_10, VAR_13->type) < 0)
   goto err_detach;
  break;
 default:
  return 0;
 }
 VAR_12->attached = 0x30;

 if (VAR_12->fe) {
  if (FUNC_14(VAR_14, VAR_12->fe) < 0)
   goto err_detach;

  if (VAR_12->fe2) {
   if (FUNC_14(VAR_14, VAR_12->fe2) < 0) {
    FUNC_15(VAR_12->fe);
    goto err_detach;
   }
   VAR_12->fe2->tuner_priv = VAR_12->fe->tuner_priv;
   FUNC_16(&VAR_12->fe2->ops.tuner_ops,
          &VAR_12->fe->ops.tuner_ops,
          sizeof(struct dvb_tuner_ops));
  }
 }

 VAR_12->attached = 0x31;
 return 0;

err_tuner:
 FUNC_8(VAR_13->dev->dev, "tuner attach failed!\n");

 if (VAR_12->fe2)
  FUNC_11(VAR_12->fe2);
 if (VAR_12->fe)
  FUNC_11(VAR_12->fe);
err_detach:
 FUNC_12(VAR_10);


 if (VAR_11 < 0)
  return VAR_11;

 return -VAR_5;
}
