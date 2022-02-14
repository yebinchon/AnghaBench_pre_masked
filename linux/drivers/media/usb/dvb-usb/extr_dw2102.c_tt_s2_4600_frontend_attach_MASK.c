
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ts2020_config {int clk; int i2c_wr_max; int ts_clk; int agc; int lnb_hv_pol; TYPE_6__* fe; struct i2c_adapter* (* get_i2c_adapter ) (struct i2c_client*) ;TYPE_6__* (* get_dvb_frontend ) (struct i2c_client*) ;scalar_t__ lnb_en_pol; scalar_t__ envelope_mode; int clk_out; scalar_t__ agc_inv; scalar_t__ spec_inv; scalar_t__ ts_clk_pol; int ts_mode; } ;
struct m88ds3103_platform_data {int clk; int i2c_wr_max; int ts_clk; int agc; int lnb_hv_pol; TYPE_6__* fe; struct i2c_adapter* (* get_i2c_adapter ) (struct i2c_client*) ;TYPE_6__* (* get_dvb_frontend ) (struct i2c_client*) ;scalar_t__ lnb_en_pol; scalar_t__ envelope_mode; int clk_out; scalar_t__ agc_inv; scalar_t__ spec_inv; scalar_t__ ts_clk_pol; int ts_mode; } ;
struct TYPE_11__ {TYPE_3__* driver; } ;
struct i2c_client {TYPE_4__ dev; } ;
struct i2c_board_info {int addr; struct ts2020_config* platform_data; int type; } ;
struct i2c_adapter {int dummy; } ;
struct dw2102_state {int* data; scalar_t__ last_lock; int fe_read_status; struct i2c_client* i2c_client_tuner; struct i2c_client* i2c_client_demod; } ;
struct dvb_usb_device {struct i2c_adapter i2c_adap; int data_mutex; struct dw2102_state* priv; } ;
struct dvb_usb_adapter {TYPE_5__* fe_adap; struct dvb_usb_device* dev; } ;
typedef int board_info ;
struct TYPE_8__ {int get_rf_strength; } ;
struct TYPE_9__ {int read_status; TYPE_1__ tuner_ops; int read_signal_strength; } ;
struct TYPE_13__ {TYPE_2__ ops; } ;
struct TYPE_12__ {TYPE_6__* fe; } ;
struct TYPE_10__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int FUNC_2 (char*) ;
 struct i2c_client* FUNC_3 (struct i2c_adapter*,struct i2c_board_info*) ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_board_info*,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,char*,int ) ;
 TYPE_6__* FUNC_11 (struct i2c_client*) ;
 struct i2c_adapter* FUNC_12 (struct i2c_client*) ;
 int FUNC_13 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_14(struct dvb_usb_adapter *VAR_5)
{
 struct dvb_usb_device *VAR_6 = VAR_5->dev;
 struct dw2102_state *VAR_7 = VAR_6->priv;
 struct i2c_adapter *VAR_8;
 struct i2c_client *VAR_9;
 struct i2c_board_info VAR_10;
 struct m88ds3103_platform_data VAR_11 = {};
 struct ts2020_config VAR_12 = {};

 FUNC_7(&VAR_6->data_mutex);

 VAR_7->data[0] = 0xe;
 VAR_7->data[1] = 0x80;
 VAR_7->data[2] = 0x0;

 if (FUNC_1(VAR_6, VAR_7->data, 3, VAR_7->data, 1, 0) < 0)
  FUNC_2("command 0x0e transfer failed.");

 VAR_7->data[0] = 0xe;
 VAR_7->data[1] = 0x02;
 VAR_7->data[2] = 1;

 if (FUNC_1(VAR_6, VAR_7->data, 3, VAR_7->data, 1, 0) < 0)
  FUNC_2("command 0x0e transfer failed.");
 FUNC_6(300);

 VAR_7->data[0] = 0xe;
 VAR_7->data[1] = 0x83;
 VAR_7->data[2] = 0;

 if (FUNC_1(VAR_6, VAR_7->data, 3, VAR_7->data, 1, 0) < 0)
  FUNC_2("command 0x0e transfer failed.");

 VAR_7->data[0] = 0xe;
 VAR_7->data[1] = 0x83;
 VAR_7->data[2] = 1;

 if (FUNC_1(VAR_6, VAR_7->data, 3, VAR_7->data, 1, 0) < 0)
  FUNC_2("command 0x0e transfer failed.");

 VAR_7->data[0] = 0x51;

 if (FUNC_1(VAR_6, VAR_7->data, 1, VAR_7->data, 1, 0) < 0)
  FUNC_2("command 0x51 transfer failed.");

 FUNC_8(&VAR_6->data_mutex);


 VAR_11.clk = 27000000;
 VAR_11.i2c_wr_max = 33;
 VAR_11.ts_mode = VAR_3;
 VAR_11.ts_clk = 16000;
 VAR_11.ts_clk_pol = 0;
 VAR_11.spec_inv = 0;
 VAR_11.agc = 0x99;
 VAR_11.agc_inv = 0;
 VAR_11.clk_out = VAR_2;
 VAR_11.envelope_mode = 0;
 VAR_11.lnb_hv_pol = 1;
 VAR_11.lnb_en_pol = 0;
 FUNC_5(&VAR_10, 0, sizeof(VAR_10));
 FUNC_10(VAR_10.type, "m88ds3103", VAR_1);
 VAR_10.addr = 0x68;
 VAR_10.platform_data = &VAR_11;
 FUNC_9("m88ds3103");
 VAR_9 = FUNC_3(&VAR_6->i2c_adap, &VAR_10);
 if (VAR_9 == ((void*)0) || VAR_9->dev.driver == ((void*)0))
  return -VAR_0;
 if (!FUNC_13(VAR_9->dev.driver->owner)) {
  FUNC_4(VAR_9);
  return -VAR_0;
 }
 VAR_5->fe_adap[0].fe = VAR_11.get_dvb_frontend(VAR_9);
 VAR_8 = VAR_11.get_i2c_adapter(VAR_9);

 VAR_7->i2c_client_demod = VAR_9;


 VAR_12.fe = VAR_5->fe_adap[0].fe;
 FUNC_5(&VAR_10, 0, sizeof(VAR_10));
 FUNC_10(VAR_10.type, "ts2022", VAR_1);
 VAR_10.addr = 0x60;
 VAR_10.platform_data = &VAR_12;
 FUNC_9("ts2020");
 VAR_9 = FUNC_3(VAR_8, &VAR_10);

 if (VAR_9 == ((void*)0) || VAR_9->dev.driver == ((void*)0)) {
  FUNC_0(VAR_5->fe_adap[0].fe);
  return -VAR_0;
 }

 if (!FUNC_13(VAR_9->dev.driver->owner)) {
  FUNC_4(VAR_9);
  FUNC_0(VAR_5->fe_adap[0].fe);
  return -VAR_0;
 }


 VAR_5->fe_adap[0].fe->ops.read_signal_strength =
   VAR_5->fe_adap[0].fe->ops.tuner_ops.get_rf_strength;

 VAR_7->i2c_client_tuner = VAR_9;


 VAR_7->fe_read_status = VAR_5->fe_adap[0].fe->ops.read_status;
 VAR_5->fe_adap[0].fe->ops.read_status = VAR_4;

 VAR_7->last_lock = 0;

 return 0;
}
