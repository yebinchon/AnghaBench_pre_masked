
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int error; } ;
struct TYPE_7__ {int device_caps; int release; int * v4l2_dev; int * lock; TYPE_3__* ctrl_handler; } ;
struct si470x_device {int band; scalar_t__ (* set_register ) (struct si470x_device*,size_t) ;int* registers; int buf_size; int v4l2_dev; TYPE_3__ hdl; TYPE_1__ videodev; int read_queue; scalar_t__ rd_index; scalar_t__ wr_index; int buffer; scalar_t__ gpio_reset; int lock; int vidioc_querycap; int fops_release; int fops_open; int get_register; int completion; struct i2c_client* client; } ;
struct i2c_client {int dev; int irq; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,int,int) ;
 int FUNC_4 (int *,char*,...) ;
 scalar_t__ FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,int,int ) ;
 struct si470x_device* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,int ,int *,int ,int,int ,struct si470x_device*) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (struct i2c_client*,struct si470x_device*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int *) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_15 (struct si470x_device*) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_16 (struct si470x_device*,double) ;
 scalar_t__ FUNC_17 (struct si470x_device*,size_t) ;
 TYPE_1__ VAR_29 ;
 int VAR_30 ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*,int) ;
 int FUNC_20 (TYPE_3__*,int *,int ,int ,int,int,int) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (int *) ;
 int VAR_31 ;
 int FUNC_23 (TYPE_1__*,int ,int ) ;
 int FUNC_24 (TYPE_1__*,struct si470x_device*) ;

__attribute__((used)) static int FUNC_25(struct i2c_client *VAR_32)
{
 struct si470x_device *VAR_33;
 int VAR_34 = 0;
 unsigned char VAR_35 = 0;


 VAR_33 = FUNC_7(&VAR_32->dev, sizeof(*VAR_33), VAR_5);
 if (!VAR_33) {
  VAR_34 = -VAR_3;
  goto err_initial;
 }

 VAR_33->client = VAR_32;
 VAR_33->band = 1;
 FUNC_14(&VAR_33->lock);
 FUNC_11(&VAR_33->completion);

 VAR_33->get_register = VAR_27;
 VAR_33->set_register = FUNC_17;
 VAR_33->fops_open = VAR_25;
 VAR_33->fops_release = VAR_26;
 VAR_33->vidioc_querycap = VAR_30;

 VAR_34 = FUNC_21(&VAR_32->dev, &VAR_33->v4l2_dev);
 if (VAR_34 < 0) {
  FUNC_2(&VAR_32->dev, "couldn't register v4l2_device\n");
  goto err_initial;
 }

 FUNC_19(&VAR_33->hdl, 2);
 FUNC_20(&VAR_33->hdl, &VAR_24,
   VAR_19, 0, 1, 1, 1);
 FUNC_20(&VAR_33->hdl, &VAR_24,
   VAR_20, 0, 15, 1, 15);
 if (VAR_33->hdl.error) {
  VAR_34 = VAR_33->hdl.error;
  FUNC_2(&VAR_32->dev, "couldn't register control\n");
  goto err_dev;
 }


 VAR_33->videodev = VAR_29;
 VAR_33->videodev.ctrl_handler = &VAR_33->hdl;
 VAR_33->videodev.lock = &VAR_33->lock;
 VAR_33->videodev.v4l2_dev = &VAR_33->v4l2_dev;
 VAR_33->videodev.release = VAR_31;
 VAR_33->videodev.device_caps =
  VAR_14 | VAR_17 | VAR_18 |
  VAR_15 | VAR_16;
 FUNC_24(&VAR_33->videodev, VAR_33);

 VAR_33->gpio_reset = FUNC_5(&VAR_32->dev, "reset",
          VAR_6);
 if (FUNC_0(VAR_33->gpio_reset)) {
  VAR_34 = FUNC_1(VAR_33->gpio_reset);
  FUNC_2(&VAR_32->dev, "Failed to request gpio: %d\n", VAR_34);
  goto err_all;
 }

 if (VAR_33->gpio_reset)
  FUNC_9(VAR_33->gpio_reset, 1);


 VAR_33->registers[VAR_9] = VAR_10;
 if (FUNC_17(VAR_33, VAR_9) < 0) {
  VAR_34 = -VAR_2;
  goto err_all;
 }
 FUNC_13(110);


 if (FUNC_15(VAR_33) < 0) {
  VAR_34 = -VAR_2;
  goto err_all;
 }
 FUNC_3(&VAR_32->dev, "DeviceID=0x%4.4hx ChipID=0x%4.4hx\n",
   VAR_33->registers[VAR_0], VAR_33->registers[VAR_12]);
 if ((VAR_33->registers[VAR_12] & VAR_13) < VAR_11) {
  FUNC_4(&VAR_32->dev,
   "This driver is known to work with firmware version %hu,\n",
   VAR_11);
  FUNC_4(&VAR_32->dev,
   "but the device has firmware version %hu.\n",
   VAR_33->registers[VAR_12] & VAR_13);
  VAR_35 = 1;
 }


 if (VAR_35 == 1) {
  FUNC_4(&VAR_32->dev,
   "If you have some trouble using this driver,\n");
  FUNC_4(&VAR_32->dev,
   "please report to V4L ML at linux-media@vger.kernel.org\n");
 }


 FUNC_16(VAR_33, 87.5 * VAR_4);


 VAR_33->buf_size = VAR_23 * 3;
 VAR_33->buffer = FUNC_6(&VAR_32->dev, VAR_33->buf_size, VAR_5);
 if (!VAR_33->buffer) {
  VAR_34 = -VAR_2;
  goto err_all;
 }


 VAR_33->wr_index = 0;
 VAR_33->rd_index = 0;
 FUNC_12(&VAR_33->read_queue);

 VAR_34 = FUNC_8(&VAR_32->dev, VAR_32->irq, ((void*)0),
        VAR_28,
        VAR_8 | VAR_7,
        VAR_1, VAR_33);
 if (VAR_34) {
  FUNC_2(&VAR_32->dev, "Failed to register interrupt\n");
  goto err_all;
 }


 VAR_34 = FUNC_23(&VAR_33->videodev, VAR_21,
   VAR_22);
 if (VAR_34) {
  FUNC_4(&VAR_32->dev, "Could not register video device\n");
  goto err_all;
 }
 FUNC_10(VAR_32, VAR_33);

 return 0;
err_all:
 FUNC_18(&VAR_33->hdl);
err_dev:
 FUNC_22(&VAR_33->v4l2_dev);
err_initial:
 return VAR_34;
}
