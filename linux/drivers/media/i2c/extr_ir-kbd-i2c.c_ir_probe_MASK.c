
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {TYPE_3__* parent; } ;
struct TYPE_7__ {int bustype; } ;
struct rc_dev {char const* device_name; char* map_name; int allowed_protocols; int s_tx_duty_cycle; int s_tx_carrier; int tx_ir; scalar_t__ driver_name; int close; int open; struct IR_i2c* priv; TYPE_2__ dev; int input_phys; TYPE_1__ input_id; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_9__ {struct IR_i2c_init_data* platform_data; } ;
struct i2c_client {unsigned short addr; TYPE_3__ dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {TYPE_3__ dev; } ;
struct IR_i2c_init_data {char* ir_codes; char* name; int type; int internal_get_key_func; void* get_key; scalar_t__ polling_interval; struct rc_dev* rc_dev; } ;
struct IR_i2c {char* ir_codes; int carrier; int duty_cycle; int tx_c; int work; int lock; int phys; void* get_key; struct rc_dev* rc; scalar_t__ polling_interval; struct i2c_client* c; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;







 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (TYPE_3__*,char*) ;
 char* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,char*,unsigned short) ;
 struct IR_i2c* FUNC_6 (TYPE_3__*,int,int ) ;
 int VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 int FUNC_7 (struct i2c_adapter*,int) ;
 int FUNC_8 (struct i2c_client*,struct IR_i2c*) ;
 int FUNC_9 (int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_10 (int *) ;
 struct rc_dev* FUNC_11 (int ) ;
 int FUNC_12 (struct rc_dev*) ;
 int FUNC_13 (struct rc_dev*) ;
 int FUNC_14 (int ,int,char*,char*,char*) ;
 int FUNC_15 (struct IR_i2c*) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_32, const struct i2c_device_id *VAR_33)
{
 char *VAR_34 = ((void*)0);
 const char *VAR_35 = ((void*)0);
 u64 VAR_36 = VAR_18;
 struct IR_i2c *VAR_37;
 struct rc_dev *VAR_38 = ((void*)0);
 struct i2c_adapter *VAR_39 = VAR_32->adapter;
 unsigned short VAR_40 = VAR_32->addr;
 bool VAR_41 = (VAR_33->driver_data & VAR_5) != 0;
 int VAR_42;

 if ((VAR_33->driver_data & VAR_4) && !VAR_19) {
  FUNC_3(&VAR_32->dev, "IR for HDPVR is known to cause problems during recording, use enable_hdpvr modparam to enable\n");
  return -VAR_2;
 }

 VAR_37 = FUNC_6(&VAR_32->dev, sizeof(*VAR_37), VAR_6);
 if (!VAR_37)
  return -VAR_3;

 VAR_37->c = VAR_32;
 VAR_37->polling_interval = VAR_1;
 FUNC_8(VAR_32, VAR_37);

 switch(VAR_40) {
 case 0x64:
  VAR_35 = "Pixelview";
  VAR_37->get_key = VAR_25;
  VAR_36 = VAR_14;
  VAR_34 = VAR_11;
  break;
 case 0x18:
 case 0x1f:
 case 0x1a:
  VAR_35 = "Hauppauge";
  VAR_37->get_key = VAR_22;
  VAR_36 = VAR_15;
  VAR_34 = VAR_13;
  break;
 case 0x30:
  VAR_35 = "KNC One";
  VAR_37->get_key = VAR_24;
  VAR_36 = VAR_14;
  VAR_34 = VAR_11;
  break;
 case 0x6b:
  VAR_35 = "FusionHDTV";
  VAR_37->get_key = VAR_21;
  VAR_36 = VAR_18;
  VAR_34 = VAR_12;
  break;
 case 0x40:
  VAR_35 = "AVerMedia Cardbus remote";
  VAR_37->get_key = VAR_20;
  VAR_36 = VAR_14;
  VAR_34 = VAR_9;
  break;
 case 0x41:
  VAR_35 = "AVerMedia EM78P153";
  VAR_37->get_key = VAR_20;
  VAR_36 = VAR_14;

  VAR_34 = VAR_10;
  break;
 case 0x71:
  VAR_35 = "Hauppauge/Zilog Z8";
  VAR_37->get_key = VAR_23;
  VAR_36 = VAR_15 | VAR_17 |
       VAR_16;
  VAR_34 = VAR_13;
  VAR_41 = 1;
  break;
 }


 if (VAR_32->dev.platform_data) {
  const struct IR_i2c_init_data *VAR_43 =
      VAR_32->dev.platform_data;

  VAR_34 = VAR_43->ir_codes;
  VAR_38 = VAR_43->rc_dev;

  VAR_35 = VAR_43->name;
  if (VAR_43->type)
   VAR_36 = VAR_43->type;

  if (VAR_43->polling_interval)
   VAR_37->polling_interval = VAR_43->polling_interval;

  switch (VAR_43->internal_get_key_func) {
  case 133:

   VAR_37->get_key = VAR_43->get_key;
   break;
  case 128:
   VAR_37->get_key = VAR_25;
   break;
  case 131:
   VAR_37->get_key = VAR_22;
   break;
  case 129:
   VAR_37->get_key = VAR_24;
   break;
  case 132:
   VAR_37->get_key = VAR_21;
   break;
  case 130:
   VAR_37->get_key = VAR_23;
   break;
  case 134:
   VAR_37->get_key = VAR_20;
   break;
  }
 }

 if (!VAR_38) {




  VAR_38 = FUNC_11(VAR_8);
  if (!VAR_38)
   return -VAR_3;
 }
 VAR_37->rc = VAR_38;


 if (!VAR_35 || !VAR_37->get_key || !VAR_36 || !VAR_34) {
  FUNC_5(&VAR_32->dev, "Unsupported device at address 0x%02x\n",
    VAR_40);
  VAR_42 = -VAR_2;
  goto err_out_free;
 }

 VAR_37->ir_codes = VAR_34;

 FUNC_14(VAR_37->phys, sizeof(VAR_37->phys), "%s/%s", FUNC_4(&VAR_39->dev),
   FUNC_4(&VAR_32->dev));





 VAR_38->input_id.bustype = VAR_0;
 VAR_38->input_phys = VAR_37->phys;
 VAR_38->device_name = VAR_35;
 VAR_38->dev.parent = &VAR_32->dev;
 VAR_38->priv = VAR_37;
 VAR_38->open = VAR_27;
 VAR_38->close = VAR_26;




 VAR_38->map_name = VAR_37->ir_codes;
 VAR_38->allowed_protocols = VAR_36;
 if (!VAR_38->driver_name)
  VAR_38->driver_name = VAR_7;

 FUNC_10(&VAR_37->lock);

 FUNC_0(&VAR_37->work, VAR_28);

 if (VAR_41) {
  VAR_37->tx_c = FUNC_7(VAR_32->adapter, 0x70);
  if (FUNC_1(VAR_37->tx_c)) {
   FUNC_3(&VAR_32->dev, "failed to setup tx i2c address");
   VAR_42 = FUNC_2(VAR_37->tx_c);
   goto err_out_free;
  } else if (!FUNC_15(VAR_37)) {
   VAR_37->carrier = 38000;
   VAR_37->duty_cycle = 40;
   VAR_38->tx_ir = VAR_29;
   VAR_38->s_tx_carrier = VAR_30;
   VAR_38->s_tx_duty_cycle = VAR_31;
  }
 }

 VAR_42 = FUNC_13(VAR_38);
 if (VAR_42)
  goto err_out_free;

 return 0;

 err_out_free:
 if (!FUNC_1(VAR_37->tx_c))
  FUNC_9(VAR_37->tx_c);


 FUNC_12(VAR_38);
 return VAR_42;
}
