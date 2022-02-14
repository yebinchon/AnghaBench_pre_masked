
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int if_dvbc; int if_dvbt2_8; int if_dvbt2_7; int if_dvbt2_6; int if_dvbt_8; int if_dvbt_7; int if_dvbt_6; int if_atsc_qam; int if_atsc_vsb; } ;
struct tda18212_dev {int if_frequency; TYPE_3__* client; int regmap; TYPE_1__ cfg; } ;
struct TYPE_5__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dtv_frontend_properties {int delivery_system; int frequency; int bandwidth_hz; } ;
struct dvb_frontend {TYPE_2__ ops; struct dtv_frontend_properties dtv_property_cache; struct tda18212_dev* tuner_priv; } ;
typedef int buf ;
struct TYPE_6__ {int dev; } ;




 int FUNC_0 (int ,int) ;
 int VAR_0 ;






 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (int ,int,int*,int) ;
 int FUNC_3 (int ,int,int const) ;
 int FUNC_4 (struct dvb_frontend*,int) ;
 int FUNC_5 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_1)
{
 struct tda18212_dev *VAR_2 = VAR_1->tuner_priv;
 struct dtv_frontend_properties *VAR_3 = &VAR_1->dtv_property_cache;
 int VAR_4, VAR_5;
 u32 VAR_6;
 u8 VAR_7[9];
 static const u8 VAR_8[][3] = {

  [0] = { 0xb3, 0x20, 0x03 },
  [1] = { 0xb3, 0x31, 0x01 },
  [2] = { 0xb3, 0x22, 0x01 },
  [3] = { 0xbc, 0x20, 0x03 },
  [4] = { 0xbc, 0x72, 0x03 },
  [5] = { 0xbc, 0x22, 0x01 },
  [6] = { 0x92, 0x50, 0x03 },
  [7] = { 0x92, 0x53, 0x03 },
  [8] = { 0x7d, 0x20, 0x63 },
  [9] = { 0x7d, 0x20, 0x63 },
 };

 FUNC_1(&VAR_2->client->dev,
   "delivery_system=%d frequency=%d bandwidth_hz=%d\n",
   VAR_3->delivery_system, VAR_3->frequency,
   VAR_3->bandwidth_hz);

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);

 switch (VAR_3->delivery_system) {
 case 133:
  VAR_6 = VAR_2->cfg.if_atsc_vsb;
  VAR_5 = 8;
  break;
 case 131:
  VAR_6 = VAR_2->cfg.if_atsc_qam;
  VAR_5 = 9;
  break;
 case 129:
  switch (VAR_3->bandwidth_hz) {
  case 6000000:
   VAR_6 = VAR_2->cfg.if_dvbt_6;
   VAR_5 = 0;
   break;
  case 7000000:
   VAR_6 = VAR_2->cfg.if_dvbt_7;
   VAR_5 = 1;
   break;
  case 8000000:
   VAR_6 = VAR_2->cfg.if_dvbt_8;
   VAR_5 = 2;
   break;
  default:
   VAR_4 = -VAR_0;
   goto error;
  }
  break;
 case 128:
  switch (VAR_3->bandwidth_hz) {
  case 6000000:
   VAR_6 = VAR_2->cfg.if_dvbt2_6;
   VAR_5 = 3;
   break;
  case 7000000:
   VAR_6 = VAR_2->cfg.if_dvbt2_7;
   VAR_5 = 4;
   break;
  case 8000000:
   VAR_6 = VAR_2->cfg.if_dvbt2_8;
   VAR_5 = 5;
   break;
  default:
   VAR_4 = -VAR_0;
   goto error;
  }
  break;
 case 132:
 case 130:
  VAR_6 = VAR_2->cfg.if_dvbc;
  VAR_5 = 7;
  break;
 default:
  VAR_4 = -VAR_0;
  goto error;
 }

 VAR_4 = FUNC_3(VAR_2->regmap, 0x23, VAR_8[VAR_5][2]);
 if (VAR_4)
  goto error;

 VAR_4 = FUNC_3(VAR_2->regmap, 0x06, 0x00);
 if (VAR_4)
  goto error;

 VAR_4 = FUNC_3(VAR_2->regmap, 0x0f, VAR_8[VAR_5][0]);
 if (VAR_4)
  goto error;

 VAR_7[0] = 0x02;
 VAR_7[1] = VAR_8[VAR_5][1];
 VAR_7[2] = 0x03;
 VAR_7[3] = FUNC_0(VAR_6, 50);
 VAR_7[4] = ((VAR_3->frequency / 1000) >> 16) & 0xff;
 VAR_7[5] = ((VAR_3->frequency / 1000) >> 8) & 0xff;
 VAR_7[6] = ((VAR_3->frequency / 1000) >> 0) & 0xff;
 VAR_7[7] = 0xc1;
 VAR_7[8] = 0x01;
 VAR_4 = FUNC_2(VAR_2->regmap, 0x12, VAR_7, sizeof(VAR_7));
 if (VAR_4)
  goto error;


 VAR_2->if_frequency = VAR_7[3] * 50 * 1000;

exit:
 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 0);

 return VAR_4;

error:
 FUNC_1(&VAR_2->client->dev, "failed=%d\n", VAR_4);
 goto exit;
}
