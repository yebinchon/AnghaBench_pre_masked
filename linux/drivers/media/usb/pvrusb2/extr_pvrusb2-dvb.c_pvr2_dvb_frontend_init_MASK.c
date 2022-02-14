
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct pvr2_hdw {TYPE_1__* hdw_desc; } ;
struct pvr2_dvb_props {scalar_t__ (* frontend_attach ) (struct pvr2_dvb_adapter*) ;scalar_t__ (* tuner_attach ) (struct pvr2_dvb_adapter*) ;} ;
struct TYPE_15__ {struct pvr2_hdw* hdw; } ;
struct TYPE_16__ {int mfe_shared; } ;
struct pvr2_dvb_adapter {int * i2c_client_demod; int i2c_client_tuner; TYPE_4__** fe; TYPE_6__ channel; TYPE_8__ dvb_adap; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_12__ {int (* standby ) (TYPE_4__*) ;} ;
struct TYPE_13__ {void* ts_bus_ctrl; TYPE_2__ analog_ops; int tuner_ops; } ;
struct TYPE_14__ {int id; TYPE_3__ ops; int tuner_priv; } ;
struct TYPE_11__ {struct pvr2_dvb_props* dvb_props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_8__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (TYPE_6__*,int) ;
 void* VAR_5 ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ FUNC_7 (struct pvr2_dvb_adapter*) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (struct pvr2_dvb_adapter*) ;
 int FUNC_10 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_11(struct pvr2_dvb_adapter *VAR_6)
{
 struct pvr2_hdw *VAR_7 = VAR_6->channel.hdw;
 const struct pvr2_dvb_props *VAR_8 = VAR_7->hdw_desc->dvb_props;
 int VAR_9 = 0;

 if (VAR_8 == ((void*)0)) {
  FUNC_6(VAR_3, "fe_props not defined!");
  return -VAR_0;
 }

 VAR_9 = FUNC_5(
     &VAR_6->channel,
     (1 << VAR_2));
 if (VAR_9) {
  FUNC_6(VAR_3,
      "failed to grab control of dtv input (code=%d)",
      VAR_9);
  return VAR_9;
 }

 if (VAR_8->frontend_attach == ((void*)0)) {
  FUNC_6(VAR_3,
      "frontend_attach not defined!");
  VAR_9 = -VAR_0;
  goto done;
 }

 if (VAR_8->frontend_attach(VAR_6) == 0 && VAR_6->fe[0]) {
  if (FUNC_2(&VAR_6->dvb_adap, VAR_6->fe[0])) {
   FUNC_6(VAR_3,
       "frontend registration failed!");
   VAR_9 = -VAR_1;
   goto fail_frontend0;
  }
  if (VAR_6->fe[0]->ops.analog_ops.standby)
   VAR_6->fe[0]->ops.analog_ops.standby(VAR_6->fe[0]);

  FUNC_6(VAR_4, "transferring fe[%d] ts_bus_ctrl() to pvr2_dvb_bus_ctrl()",
      VAR_6->fe[0]->id);
  VAR_6->fe[0]->ops.ts_bus_ctrl = VAR_5;
 } else {
  FUNC_6(VAR_3,
      "no frontend was attached!");
  VAR_9 = -VAR_1;
  return VAR_9;
 }

 if (VAR_8->tuner_attach && VAR_8->tuner_attach(VAR_6)) {
  FUNC_6(VAR_3, "tuner attach failed");
  VAR_9 = -VAR_1;
  goto fail_tuner;
 }

 if (VAR_6->fe[1]) {
  VAR_6->fe[1]->id = 1;
  VAR_6->fe[1]->tuner_priv = VAR_6->fe[0]->tuner_priv;
  FUNC_4(&VAR_6->fe[1]->ops.tuner_ops,
         &VAR_6->fe[0]->ops.tuner_ops,
         sizeof(struct dvb_tuner_ops));

  if (FUNC_2(&VAR_6->dvb_adap, VAR_6->fe[1])) {
   FUNC_6(VAR_3,
       "frontend registration failed!");
   VAR_9 = -VAR_1;
   goto fail_frontend1;
  }

  VAR_6->dvb_adap.mfe_shared = 1;

  if (VAR_6->fe[1]->ops.analog_ops.standby)
   VAR_6->fe[1]->ops.analog_ops.standby(VAR_6->fe[1]);

  FUNC_6(VAR_4, "transferring fe[%d] ts_bus_ctrl() to pvr2_dvb_bus_ctrl()",
      VAR_6->fe[1]->id);
  VAR_6->fe[1]->ops.ts_bus_ctrl = VAR_5;
 }
done:
 FUNC_5(&VAR_6->channel, 0);
 return VAR_9;

fail_frontend1:
 FUNC_0(VAR_6->fe[1]);
 VAR_6->fe[1] = ((void*)0);
fail_tuner:
 FUNC_3(VAR_6->fe[0]);
fail_frontend0:
 FUNC_0(VAR_6->fe[0]);
 VAR_6->fe[0] = ((void*)0);
 FUNC_1(VAR_6->i2c_client_tuner);
 FUNC_1(VAR_6->i2c_client_demod[1]);
 FUNC_1(VAR_6->i2c_client_demod[0]);

 return VAR_9;
}
