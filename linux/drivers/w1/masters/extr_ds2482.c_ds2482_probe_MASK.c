
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;
struct ds2482_data {int w1_count; TYPE_1__* w1_ch; int access_lock; struct i2c_client* client; } ;
struct TYPE_5__ {int set_pullup; int reset_bus; int triplet; int touch_bit; int write_byte; int read_byte; TYPE_1__* data; } ;
struct TYPE_4__ {int channel; TYPE_2__ w1_bm; struct ds2482_data* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct ds2482_data*,int ) ;
 int FUNC_3 (struct ds2482_data*,int ,int ) ;
 scalar_t__ FUNC_4 (struct ds2482_data*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct i2c_client*,struct ds2482_data*) ;
 int FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (struct ds2482_data*) ;
 struct ds2482_data* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_15,
   const struct i2c_device_id *VAR_16)
{
 struct ds2482_data *VAR_17;
 int VAR_18 = -VAR_4;
 int VAR_19;
 int VAR_20;

 if (!FUNC_5(VAR_15->adapter,
         VAR_8 |
         VAR_7))
  return -VAR_4;

 if (!(VAR_17 = FUNC_9(sizeof(struct ds2482_data), VAR_6))) {
  VAR_18 = -VAR_5;
  goto exit;
 }

 VAR_17->client = VAR_15;
 FUNC_6(VAR_15, VAR_17);


 if (FUNC_2(VAR_17, VAR_0) < 0) {
  FUNC_0(&VAR_15->dev, "DS2482 reset failed.\n");
  goto exit_free;
 }


 FUNC_11(525);


 VAR_19 = FUNC_7(VAR_15);
 if (VAR_19 != (VAR_2 | VAR_3)) {
  FUNC_0(&VAR_15->dev, "DS2482 reset status "
    "0x%02X - not a DS2482\n", VAR_19);
  goto exit_free;
 }


 VAR_17->w1_count = 1;
 if (FUNC_4(VAR_17, 7) == 0)
  VAR_17->w1_count = 8;


 FUNC_3(VAR_17, VAR_1,
  FUNC_1(0x00));

 FUNC_10(&VAR_17->access_lock);


 for (VAR_20 = 0; VAR_20 < VAR_17->w1_count; VAR_20++) {
  VAR_17->w1_ch[VAR_20].pdev = VAR_17;
  VAR_17->w1_ch[VAR_20].channel = VAR_20;


  VAR_17->w1_ch[VAR_20].w1_bm.data = &VAR_17->w1_ch[VAR_20];
  VAR_17->w1_ch[VAR_20].w1_bm.read_byte = VAR_9;
  VAR_17->w1_ch[VAR_20].w1_bm.write_byte = VAR_14;
  VAR_17->w1_ch[VAR_20].w1_bm.touch_bit = VAR_12;
  VAR_17->w1_ch[VAR_20].w1_bm.triplet = VAR_13;
  VAR_17->w1_ch[VAR_20].w1_bm.reset_bus = VAR_10;
  VAR_17->w1_ch[VAR_20].w1_bm.set_pullup = VAR_11;

  VAR_18 = FUNC_12(&VAR_17->w1_ch[VAR_20].w1_bm);
  if (VAR_18) {
   VAR_17->w1_ch[VAR_20].pdev = ((void*)0);
   goto exit_w1_remove;
  }
 }

 return 0;

exit_w1_remove:
 for (VAR_20 = 0; VAR_20 < VAR_17->w1_count; VAR_20++) {
  if (VAR_17->w1_ch[VAR_20].pdev != ((void*)0))
   FUNC_13(&VAR_17->w1_ch[VAR_20].w1_bm);
 }
exit_free:
 FUNC_8(VAR_17);
exit:
 return VAR_18;
}
