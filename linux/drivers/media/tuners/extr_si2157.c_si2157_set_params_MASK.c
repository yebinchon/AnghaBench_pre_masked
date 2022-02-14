
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct si2157_dev {scalar_t__ chiptype; int if_port; int if_frequency; scalar_t__ inversion; int active; } ;
struct si2157_cmd {int* args; int wlen; int rlen; } ;
struct i2c_client {int dev; } ;
struct dtv_frontend_properties {int delivery_system; int frequency; int bandwidth_hz; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct i2c_client* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;





 int FUNC_0 (int *,char*,int,...) ;
 struct si2157_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int*,char*,int) ;
 int FUNC_3 (struct i2c_client*,struct si2157_cmd*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_3)
{
 struct i2c_client *VAR_4 = VAR_3->tuner_priv;
 struct si2157_dev *VAR_5 = FUNC_1(VAR_4);
 struct dtv_frontend_properties *VAR_6 = &VAR_3->dtv_property_cache;
 int VAR_7;
 struct si2157_cmd VAR_8;
 u8 VAR_9, VAR_10;
 u32 VAR_11 = 5000000;

 FUNC_0(&VAR_4->dev,
   "delivery_system=%d frequency=%u bandwidth_hz=%u\n",
   VAR_6->delivery_system, VAR_6->frequency, VAR_6->bandwidth_hz);

 if (!VAR_5->active) {
  VAR_7 = -VAR_0;
  goto err;
 }

 if (VAR_6->bandwidth_hz <= 6000000)
  VAR_9 = 0x06;
 else if (VAR_6->bandwidth_hz <= 7000000)
  VAR_9 = 0x07;
 else if (VAR_6->bandwidth_hz <= 8000000)
  VAR_9 = 0x08;
 else
  VAR_9 = 0x0f;

 switch (VAR_6->delivery_system) {
 case 132:
   VAR_10 = 0x00;
   VAR_11 = 3250000;
   break;
 case 130:
   VAR_10 = 0x10;
   VAR_11 = 4000000;
   break;
 case 129:
 case 128:
   VAR_10 = 0x20;
   break;
 case 131:
   VAR_10 = 0x30;
   break;
 default:
   VAR_7 = -VAR_1;
   goto err;
 }

 FUNC_2(VAR_8.args, "\x14\x00\x03\x07\x00\x00", 6);
 VAR_8.args[4] = VAR_10 | VAR_9;
 if (VAR_5->inversion)
  VAR_8.args[5] = 0x01;
 VAR_8.wlen = 6;
 VAR_8.rlen = 4;
 VAR_7 = FUNC_3(VAR_4, &VAR_8);
 if (VAR_7)
  goto err;

 if (VAR_5->chiptype == VAR_2)
  FUNC_2(VAR_8.args, "\x14\x00\x02\x07\x00\x01", 6);
 else
  FUNC_2(VAR_8.args, "\x14\x00\x02\x07\x00\x00", 6);
 VAR_8.args[4] = VAR_5->if_port;
 VAR_8.wlen = 6;
 VAR_8.rlen = 4;
 VAR_7 = FUNC_3(VAR_4, &VAR_8);
 if (VAR_7)
  goto err;


 if (VAR_11 != VAR_5->if_frequency) {
  FUNC_2(VAR_8.args, "\x14\x00\x06\x07", 4);
  VAR_8.args[4] = (VAR_11 / 1000) & 0xff;
  VAR_8.args[5] = ((VAR_11 / 1000) >> 8) & 0xff;
  VAR_8.wlen = 6;
  VAR_8.rlen = 4;
  VAR_7 = FUNC_3(VAR_4, &VAR_8);
  if (VAR_7)
   goto err;

  VAR_5->if_frequency = VAR_11;
 }


 FUNC_2(VAR_8.args, "\x41\x00\x00\x00\x00\x00\x00\x00", 8);
 VAR_8.args[4] = (VAR_6->frequency >> 0) & 0xff;
 VAR_8.args[5] = (VAR_6->frequency >> 8) & 0xff;
 VAR_8.args[6] = (VAR_6->frequency >> 16) & 0xff;
 VAR_8.args[7] = (VAR_6->frequency >> 24) & 0xff;
 VAR_8.wlen = 8;
 VAR_8.rlen = 1;
 VAR_7 = FUNC_3(VAR_4, &VAR_8);
 if (VAR_7)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_4->dev, "failed=%d\n", VAR_7);
 return VAR_7;
}
