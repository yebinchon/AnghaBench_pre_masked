
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tveeprom {int dummy; } ;
struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_3__ {scalar_t__ decoder; scalar_t__ tuner_type; int tuner_i2c_master; } ;
struct cx231xx {size_t model; int tuner_addr; int dev; int * sd_tuner; int v4l2_dev; TYPE_1__ board; int * sd_cx25840; int tuner_type; } ;
struct TYPE_4__ {int tuner_addr; int tuner_type; } ;


 scalar_t__ VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_0 (struct cx231xx*) ;
 struct i2c_adapter* FUNC_1 (struct cx231xx*,int ) ;
 int FUNC_2 (struct cx231xx*) ;
 int FUNC_3 (struct cx231xx*,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct eeprom*) ;
 struct eeprom* FUNC_6 (int,int ) ;
 int VAR_7 ;
 int FUNC_7 (struct cx231xx*,struct i2c_client*,int *,int) ;
 int FUNC_8 (struct tveeprom*,int ) ;
 void* FUNC_9 (int *,struct i2c_adapter*,char*,int,int *) ;

void FUNC_10(struct cx231xx *VAR_8)
{

 FUNC_2(VAR_8);

 VAR_8->tuner_type = VAR_6[VAR_8->model].tuner_type;
 if (VAR_6[VAR_8->model].tuner_addr)
  VAR_8->tuner_addr = VAR_6[VAR_8->model].tuner_addr;


 if (VAR_8->board.decoder == VAR_0) {
  VAR_8->sd_cx25840 = FUNC_9(&VAR_8->v4l2_dev,
     FUNC_1(VAR_8, VAR_2),
     "cx25840", 0x88 >> 1, ((void*)0));
  if (VAR_8->sd_cx25840 == ((void*)0))
   FUNC_4(VAR_8->dev,
    "cx25840 subdev registration failure\n");
  FUNC_3(VAR_8, VAR_5, VAR_7);

 }


 if (VAR_8->board.tuner_type != VAR_4) {
  struct i2c_adapter *VAR_9 = FUNC_1(VAR_8,
      VAR_8->board.tuner_i2c_master);
  VAR_8->sd_tuner = FUNC_9(&VAR_8->v4l2_dev,
          VAR_9,
          "tuner",
          VAR_8->tuner_addr, ((void*)0));
  if (VAR_8->sd_tuner == ((void*)0))
   FUNC_4(VAR_8->dev,
    "tuner subdev registration failure\n");
  else
   FUNC_0(VAR_8);
 }

 switch (VAR_8->model) {
 case 132:
 case 131:
 case 129:
 case 130:
 case 128:
  {
   struct eeprom {
    struct tveeprom tvee;
    u8 eeprom[256];
    struct i2c_client client;
   };
   struct eeprom *VAR_10 = FUNC_6(sizeof(*VAR_10), VAR_1);

   if (VAR_10 == ((void*)0)) {
    FUNC_4(VAR_8->dev,
     "failed to allocate memory to read eeprom\n");
    break;
   }
   VAR_10->client.adapter = FUNC_1(VAR_8, VAR_3);
   VAR_10->client.addr = 0xa0 >> 1;

   FUNC_7(VAR_8, &VAR_10->client, VAR_10->eeprom, sizeof(VAR_10->eeprom));
   FUNC_8(&VAR_10->tvee, *(VAR_10->eeprom + 0xc0));
   FUNC_5(VAR_10);
   break;
  }
 }

}
