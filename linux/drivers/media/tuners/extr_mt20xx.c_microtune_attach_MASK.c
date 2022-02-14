
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {char* name; struct i2c_adapter* adap; int addr; } ;
struct microtune_priv {TYPE_4__ i2c_props; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_7__ {TYPE_1__ info; } ;
struct TYPE_8__ {TYPE_2__ tuner_ops; } ;
struct dvb_frontend {TYPE_3__ ops; struct microtune_priv* tuner_priv; } ;
typedef int buf ;


 unsigned char FUNC_0 (char**) ;
 int VAR_0 ;


 scalar_t__ VAR_1 ;
 struct microtune_priv* FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 char** VAR_2 ;
 int FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (struct dvb_frontend*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*,int,unsigned char*) ;
 int FUNC_7 (TYPE_4__*,unsigned char*,int) ;
 int FUNC_8 (TYPE_4__*,unsigned char*,int) ;
 int FUNC_9 (char*,...) ;

struct dvb_frontend *FUNC_10(struct dvb_frontend *VAR_3,
          struct i2c_adapter* VAR_4,
          u8 VAR_5)
{
 struct microtune_priv *VAR_6 = ((void*)0);
 char *VAR_7;
 unsigned char VAR_8[21];
 int VAR_9;

 VAR_6 = FUNC_1(sizeof(struct microtune_priv), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 VAR_3->tuner_priv = VAR_6;

 VAR_6->i2c_props.addr = VAR_5;
 VAR_6->i2c_props.adap = VAR_4;
 VAR_6->i2c_props.name = "mt20xx";



 FUNC_2(VAR_8,0,sizeof(VAR_8));

 VAR_7 = "unknown";

 FUNC_8(&VAR_6->i2c_props,VAR_8,1);
 FUNC_7(&VAR_6->i2c_props,VAR_8,21);
 if (VAR_1)
  FUNC_6("MT20xx hexdump: %*ph\n", 21, VAR_8);

 VAR_9 = VAR_8[0x11] << 8 | VAR_8[0x12];
 FUNC_9("microtune: companycode=%04x part=%02x rev=%02x\n",
     VAR_9,VAR_8[0x13],VAR_8[0x14]);


 if (VAR_8[0x13] < FUNC_0(VAR_2) &&
     ((void*)0) != VAR_2[VAR_8[0x13]])
  VAR_7 = VAR_2[VAR_8[0x13]];
 switch (VAR_8[0x13]) {
 case 129:
  FUNC_3(VAR_3);
  break;
 case 128:
  FUNC_4(VAR_3);
  break;
 default:
  FUNC_9("microtune %s found, not (yet?) supported, sorry :-/\n",
      VAR_7);
  return ((void*)0);
 }

 FUNC_5(VAR_3->ops.tuner_ops.info.name, VAR_7,
  sizeof(VAR_3->ops.tuner_ops.info.name));
 FUNC_9("microtune %s found, OK\n",VAR_7);
 return VAR_3;
}
