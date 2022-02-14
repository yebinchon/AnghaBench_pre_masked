
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct si2157_dev {int if_frequency; scalar_t__ chiptype; int active; int stat_work; } ;
struct si2157_cmd {int* args; int wlen; int rlen; } ;
struct i2c_client {int dev; } ;
struct firmware {int size; int* data; } ;
struct TYPE_4__ {int len; TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_2__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct i2c_client* tuner_priv; } ;
struct TYPE_3__ {int scale; } ;


 int VAR_0 ;
 int VAR_1 ;

 char* VAR_2 ;




 char* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

 char* VAR_7 ;

 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,...) ;
 struct si2157_dev* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int*,char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct firmware const*) ;
 int FUNC_7 (struct firmware const**,char const*,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct i2c_client*,struct si2157_cmd*) ;

__attribute__((used)) static int FUNC_10(struct dvb_frontend *VAR_8)
{
 struct i2c_client *VAR_9 = VAR_8->tuner_priv;
 struct si2157_dev *VAR_10 = FUNC_3(VAR_9);
 struct dtv_frontend_properties *VAR_11 = &VAR_8->dtv_property_cache;
 int VAR_12, VAR_13, VAR_14;
 struct si2157_cmd VAR_15;
 const struct firmware *VAR_16;
 const char *VAR_17;
 unsigned int VAR_18, VAR_19;

 FUNC_0(&VAR_9->dev, "\n");


 FUNC_4(VAR_15.args, "\x15\x00\x06\x07", 4);
 VAR_15.wlen = 4;
 VAR_15.rlen = 4;
 VAR_12 = FUNC_9(VAR_9, &VAR_15);
 if (VAR_12)
  goto err;

 VAR_18 = VAR_15.args[2] << 0 | VAR_15.args[3] << 8;
 FUNC_0(&VAR_9->dev, "if_frequency kHz=%u\n", VAR_18);

 if (VAR_18 == VAR_10->if_frequency / 1000)
  goto warm;


 if (VAR_10->chiptype == VAR_6) {
  FUNC_4(VAR_15.args, "\xc0\x05\x01\x00\x00\x0b\x00\x00\x01", 9);
  VAR_15.wlen = 9;
 } else if (VAR_10->chiptype == VAR_5) {
  FUNC_4(VAR_15.args, "\xc0\x00\x0d\x0e\x00\x01\x01\x01\x01\x03", 10);
  VAR_15.wlen = 10;
 } else {
  FUNC_4(VAR_15.args, "\xc0\x00\x0c\x00\x00\x01\x01\x01\x01\x01\x01\x02\x00\x00\x01", 15);
  VAR_15.wlen = 15;
 }
 VAR_15.rlen = 1;
 VAR_12 = FUNC_9(VAR_9, &VAR_15);
 if (VAR_12)
  goto err;


 if (VAR_10->chiptype == VAR_5) {
  FUNC_4(VAR_15.args, "\xc0\x08\x01\x02\x00\x00\x01", 7);
  VAR_15.wlen = 7;
  VAR_12 = FUNC_9(VAR_9, &VAR_15);
  if (VAR_12)
   goto err;
 }


 FUNC_4(VAR_15.args, "\x02", 1);
 VAR_15.wlen = 1;
 VAR_15.rlen = 13;
 VAR_12 = FUNC_9(VAR_9, &VAR_15);
 if (VAR_12)
  goto err;

 VAR_19 = VAR_15.args[1] << 24 | VAR_15.args[2] << 16 | VAR_15.args[3] << 8 |
   VAR_15.args[4] << 0;
 switch (VAR_19) {
 case ('A' << 24 | 58 << 16 | '2' << 8 | '0' << 0):
 case ('A' << 24 | 48 << 16 | '2' << 8 | '0' << 0):
  VAR_17 = VAR_7;
  break;
 case ('A' << 24 | 41 << 16 | '1' << 8 | '0' << 0):
  VAR_17 = VAR_2;
  break;
 case ('A' << 24 | 77 << 16 | '3' << 8 | '0' << 0):
  VAR_17 = VAR_3;
  break;
 case ('A' << 24 | 57 << 16 | '3' << 8 | '0' << 0):
 case ('A' << 24 | 47 << 16 | '3' << 8 | '0' << 0):
 case ('A' << 24 | 46 << 16 | '1' << 8 | '0' << 0):
  VAR_17 = ((void*)0);
  break;
 default:
  FUNC_1(&VAR_9->dev, "unknown chip version Si21%d-%c%c%c\n",
    VAR_15.args[2], VAR_15.args[1],
    VAR_15.args[3], VAR_15.args[4]);
  VAR_12 = -VAR_0;
  goto err;
 }

 FUNC_2(&VAR_9->dev, "found a 'Silicon Labs Si21%d-%c%c%c'\n",
   VAR_15.args[2], VAR_15.args[1], VAR_15.args[3], VAR_15.args[4]);

 if (VAR_17 == ((void*)0))
  goto skip_fw_download;


 VAR_12 = FUNC_7(&VAR_16, VAR_17, &VAR_9->dev);
 if (VAR_12) {
  FUNC_1(&VAR_9->dev, "firmware file '%s' not found\n",
    VAR_17);
  goto err;
 }


 if (VAR_16->size % 17 != 0) {
  FUNC_1(&VAR_9->dev, "firmware file '%s' is invalid\n",
    VAR_17);
  VAR_12 = -VAR_0;
  goto err_release_firmware;
 }

 FUNC_2(&VAR_9->dev, "downloading firmware from file '%s'\n",
   VAR_17);

 for (VAR_14 = VAR_16->size; VAR_14 > 0; VAR_14 -= 17) {
  VAR_13 = VAR_16->data[VAR_16->size - VAR_14];
  if (VAR_13 > VAR_4) {
   FUNC_1(&VAR_9->dev, "Bad firmware length\n");
   VAR_12 = -VAR_0;
   goto err_release_firmware;
  }
  FUNC_4(VAR_15.args, &VAR_16->data[(VAR_16->size - VAR_14) + 1], VAR_13);
  VAR_15.wlen = VAR_13;
  VAR_15.rlen = 1;
  VAR_12 = FUNC_9(VAR_9, &VAR_15);
  if (VAR_12) {
   FUNC_1(&VAR_9->dev, "firmware download failed %d\n",
     VAR_12);
   goto err_release_firmware;
  }
 }

 FUNC_6(VAR_16);

skip_fw_download:

 FUNC_4(VAR_15.args, "\x01\x01", 2);
 VAR_15.wlen = 2;
 VAR_15.rlen = 1;
 VAR_12 = FUNC_9(VAR_9, &VAR_15);
 if (VAR_12)
  goto err;


 FUNC_4(VAR_15.args, "\x11", 1);
 VAR_15.wlen = 1;
 VAR_15.rlen = 10;
 VAR_12 = FUNC_9(VAR_9, &VAR_15);
 if (VAR_12)
  goto err;

 FUNC_2(&VAR_9->dev, "firmware version: %c.%c.%d\n",
   VAR_15.args[6], VAR_15.args[7], VAR_15.args[8]);
warm:

 VAR_11->strength.len = 1;
 VAR_11->strength.stat[0].scale = VAR_1;

 FUNC_8(&VAR_10->stat_work, FUNC_5(1000));

 VAR_10->active = 1;
 return 0;
err_release_firmware:
 FUNC_6(VAR_16);
err:
 FUNC_0(&VAR_9->dev, "failed=%d\n", VAR_12);
 return VAR_12;
}
