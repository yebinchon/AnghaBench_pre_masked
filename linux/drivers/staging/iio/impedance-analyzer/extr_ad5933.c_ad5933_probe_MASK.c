
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; int buffer; int num_channels; int channels; int name; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int name; } ;
struct i2c_client {int dev; } ;
struct ad5933_state {int vref_mv; unsigned long mclk_hz; int reg; int mclk; int poll_time_jiffies; int work; int ctrl_lb; int lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ad5933_state*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct ad5933_state*) ;
 int VAR_10 ;
 int FUNC_7 (int ) ;
 unsigned long FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,char*) ;
 struct iio_dev* FUNC_12 (int *,int) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_15 (struct iio_dev*) ;
 int FUNC_16 (int ) ;
 struct ad5933_state* FUNC_17 (struct iio_dev*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;

__attribute__((used)) static int FUNC_23(struct i2c_client *VAR_11,
   const struct i2c_device_id *VAR_12)
{
 int VAR_13;
 struct ad5933_state *VAR_14;
 struct iio_dev *VAR_15;
 unsigned long VAR_16 = 0;

 VAR_15 = FUNC_12(&VAR_11->dev, sizeof(*VAR_14));
 if (!VAR_15)
  return -VAR_5;

 VAR_14 = FUNC_17(VAR_15);
 FUNC_14(VAR_11, VAR_15);
 VAR_14->client = VAR_11;

 FUNC_19(&VAR_14->lock);

 VAR_14->reg = FUNC_13(&VAR_11->dev, "vdd");
 if (FUNC_2(VAR_14->reg))
  return FUNC_3(VAR_14->reg);

 VAR_13 = FUNC_21(VAR_14->reg);
 if (VAR_13) {
  FUNC_10(&VAR_11->dev, "Failed to enable specified VDD supply\n");
  return VAR_13;
 }
 VAR_13 = FUNC_22(VAR_14->reg);

 if (VAR_13 < 0)
  goto error_disable_reg;

 VAR_14->vref_mv = VAR_13 / 1000;

 VAR_14->mclk = FUNC_11(&VAR_11->dev, "mclk");
 if (FUNC_2(VAR_14->mclk) && FUNC_3(VAR_14->mclk) != -VAR_4) {
  VAR_13 = FUNC_3(VAR_14->mclk);
  goto error_disable_reg;
 }

 if (!FUNC_2(VAR_14->mclk)) {
  VAR_13 = FUNC_9(VAR_14->mclk);
  if (VAR_13 < 0)
   goto error_disable_reg;
  VAR_16 = FUNC_8(VAR_14->mclk);
 }

 if (VAR_16) {
  VAR_14->mclk_hz = VAR_16;
  VAR_14->ctrl_lb = VAR_0;
 } else {
  VAR_14->mclk_hz = VAR_2;
  VAR_14->ctrl_lb = VAR_1;
 }

 FUNC_4(VAR_14);
 FUNC_1(&VAR_14->work, VAR_10);
 VAR_14->poll_time_jiffies = FUNC_18(VAR_3);

 VAR_15->dev.parent = &VAR_11->dev;
 VAR_15->info = &VAR_9;
 VAR_15->name = VAR_12->name;
 VAR_15->modes = (VAR_6 | VAR_7);
 VAR_15->channels = VAR_8;
 VAR_15->num_channels = FUNC_0(VAR_8);

 VAR_13 = FUNC_5(VAR_15);
 if (VAR_13)
  goto error_disable_mclk;

 VAR_13 = FUNC_6(VAR_14);
 if (VAR_13)
  goto error_unreg_ring;

 VAR_13 = FUNC_15(VAR_15);
 if (VAR_13)
  goto error_unreg_ring;

 return 0;

error_unreg_ring:
 FUNC_16(VAR_15->buffer);
error_disable_mclk:
 FUNC_7(VAR_14->mclk);
error_disable_reg:
 FUNC_20(VAR_14->reg);

 return VAR_13;
}
