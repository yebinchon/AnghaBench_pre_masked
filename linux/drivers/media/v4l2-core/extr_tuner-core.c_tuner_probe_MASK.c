
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int callback; } ;
struct TYPE_7__ {char* name; int function; } ;
struct TYPE_6__ {TYPE_3__ entity; } ;
struct tuner {char* name; int standby; double radio_freq; int tv_freq; int mode_mask; int type; int list; TYPE_1__ fe; int config; int mode; TYPE_2__ sd; TYPE_4__* pad; struct i2c_client* i2c; int audmode; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; int adapter; } ;
typedef int buffer ;
struct TYPE_8__ {void* sig_type; void* flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct i2c_client*,unsigned char*,int) ;
 int FUNC_2 (struct tuner*) ;
 struct tuner* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_3__*,int ,TYPE_4__*) ;
 int FUNC_6 (unsigned char*,int ,int) ;
 int VAR_25 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,...) ;
 int FUNC_9 (struct i2c_client*,int ,int,int ,int ) ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_10 (int ,struct tuner**,struct tuner**) ;
 int VAR_31 ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (TYPE_2__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_32,
         const struct i2c_device_id *VAR_33)
{
 struct tuner *VAR_34;
 struct tuner *VAR_35;
 struct tuner *VAR_36;




 VAR_34 = FUNC_3(sizeof(struct tuner), VAR_2);
 if (((void*)0) == VAR_34)
  return -VAR_1;
 FUNC_12(&VAR_34->sd, VAR_32, &VAR_31);
 VAR_34->i2c = VAR_32;
 VAR_34->name = "(tuner unset)";
 VAR_34->type = VAR_21;
 VAR_34->audmode = VAR_23;
 VAR_34->standby = 1;
 VAR_34->radio_freq = 87.5 * 16000;
 VAR_34->tv_freq = 400 * 16;

 if (VAR_26) {
  unsigned char VAR_37[16];
  int VAR_38;

  FUNC_6(VAR_37, 0, sizeof(VAR_37));
  VAR_38 = FUNC_1(VAR_32, VAR_37, sizeof(VAR_37));
  if (VAR_38 >= 0)
   FUNC_8("I2C RECV = %*ph\n", VAR_38, VAR_37);
 }


 if (!VAR_25) {
  switch (VAR_32->addr) {
  case 0x10:
   if (FUNC_11(VAR_28,
            VAR_34->i2c->adapter,
            VAR_34->i2c->addr) >= 0) {
    VAR_34->type = VAR_17;
    VAR_34->mode_mask = VAR_20;
    FUNC_10(VAR_34->i2c->adapter, &VAR_35, &VAR_36);
    if (VAR_36)
     VAR_36->mode_mask &= ~VAR_20;

    goto register_client;
   }
   FUNC_2(VAR_34);
   return -VAR_0;
  case 0x42:
  case 0x43:
  case 0x4a:
  case 0x4b:


   if (FUNC_11(VAR_27, VAR_34->i2c->adapter,
            VAR_34->i2c->addr) >= 0) {
    FUNC_0("tda829x detected\n");
   } else {

    VAR_34->type = VAR_16;
    VAR_34->mode_mask = VAR_20 | VAR_19;
    goto register_client;
   }
   break;
  case 0x60:
   if (FUNC_11(VAR_29,
            VAR_34->i2c->adapter, VAR_34->i2c->addr)
     >= 0) {
    VAR_34->type = VAR_18;
    VAR_34->mode_mask = VAR_20;

    FUNC_10(VAR_34->i2c->adapter, &VAR_35, &VAR_36);
    if (VAR_36)
     VAR_36->mode_mask &= ~VAR_20;

    goto register_client;
   }
   break;
  }
 }
 FUNC_10(VAR_34->i2c->adapter, &VAR_35, &VAR_36);
 if (VAR_36 == ((void*)0)) {
  VAR_34->mode_mask = VAR_19;
  if (VAR_35 == ((void*)0))
   VAR_34->mode_mask |= VAR_20;
  FUNC_0("Setting mode_mask to 0x%02x\n", VAR_34->mode_mask);
 }


register_client:
 if (VAR_34->mode_mask & VAR_19)
  VAR_34->mode = VAR_22;
 else
  VAR_34->mode = VAR_24;
 FUNC_9(VAR_32, VAR_34->type, VAR_34->mode_mask, VAR_34->config, VAR_34->fe.callback);
 FUNC_4(&VAR_34->list, &VAR_30);

 FUNC_8("Tuner %d found with type(s)%s%s.\n",
     VAR_34->type,
     VAR_34->mode_mask & VAR_20 ? " Radio" : "",
     VAR_34->mode_mask & VAR_19 ? " TV" : "");
 return 0;
}
