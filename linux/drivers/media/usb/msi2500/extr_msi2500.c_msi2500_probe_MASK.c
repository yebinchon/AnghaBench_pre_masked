
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct v4l2_subdev {int ctrl_handler; } ;
struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct spi_master {int num_chipselect; int transfer_one_message; scalar_t__ bus_num; } ;
struct spi_board_info {char* modalias; int max_speed_hz; int chip_select; int bus_num; } ;
struct msi2500_frame_buf {int dummy; } ;
struct TYPE_18__ {TYPE_8__* ctrl_handler; int release; } ;
struct TYPE_19__ {int error; } ;
struct TYPE_16__ {int device_caps; int * lock; TYPE_5__* v4l2_dev; TYPE_4__* queue; } ;
struct TYPE_17__ {int io_modes; int buf_struct_size; int * lock; int timestamp_flags; int * mem_ops; int * ops; struct msi2500_dev* drv_priv; int type; } ;
struct msi2500_dev {int num_formats; TYPE_5__ v4l2_dev; struct spi_master* master; TYPE_8__ hdl; int * dev; TYPE_1__ vdev; int v4l2_lock; struct v4l2_subdev* v4l2_subdev; int vb_queue_lock; TYPE_4__ vb_queue; int buffersize; int pixelformat; int f_adc; int udev; int queued_bufs; int queued_bufs_lock; } ;
struct TYPE_15__ {int rangelow; } ;
struct TYPE_14__ {int buffersize; int pixelformat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_13__* VAR_14 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*) ;
 TYPE_12__* VAR_15 ;
 int FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct msi2500_dev*) ;
 struct msi2500_dev* FUNC_6 (int,int ) ;
 int VAR_16 ;
 TYPE_1__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (int *) ;
 struct spi_master* FUNC_8 (int *,int ) ;
 int FUNC_9 (struct spi_master*) ;
 int FUNC_10 (struct spi_master*,struct msi2500_dev*) ;
 int FUNC_11 (struct spi_master*) ;
 int FUNC_12 (struct spi_master*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_8__*,int ,int *,int) ;
 int FUNC_15 (TYPE_8__*) ;
 int FUNC_16 (TYPE_8__*,int ) ;
 int FUNC_17 (int *,TYPE_5__*) ;
 int FUNC_18 (TYPE_5__*) ;
 struct v4l2_subdev* FUNC_19 (TYPE_5__*,struct spi_master*,struct spi_board_info*) ;
 int FUNC_20 (TYPE_4__*) ;
 int VAR_21 ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*,int ,int) ;
 int FUNC_23 (TYPE_1__*,struct msi2500_dev*) ;

__attribute__((used)) static int FUNC_24(struct usb_interface *VAR_22,
    const struct usb_device_id *VAR_23)
{
 struct msi2500_dev *VAR_24;
 struct v4l2_subdev *VAR_25;
 struct spi_master *VAR_26;
 int VAR_27;
 static struct spi_board_info VAR_28 = {
  .modalias = "msi001",
  .bus_num = 0,
  .chip_select = 0,
  .max_speed_hz = 12000000,
 };

 VAR_24 = FUNC_6(sizeof(*VAR_24), VAR_2);
 if (!VAR_24) {
  VAR_27 = -VAR_1;
  goto err;
 }

 FUNC_7(&VAR_24->v4l2_lock);
 FUNC_7(&VAR_24->vb_queue_lock);
 FUNC_13(&VAR_24->queued_bufs_lock);
 FUNC_0(&VAR_24->queued_bufs);
 VAR_24->dev = &VAR_22->dev;
 VAR_24->udev = FUNC_4(VAR_22);
 VAR_24->f_adc = VAR_14[0].rangelow;
 VAR_24->pixelformat = VAR_15[0].pixelformat;
 VAR_24->buffersize = VAR_15[0].buffersize;
 VAR_24->num_formats = VAR_3;
 if (!VAR_16)
  VAR_24->num_formats -= 2;


 VAR_24->vb_queue.type = VAR_5;
 VAR_24->vb_queue.io_modes = VAR_10 | VAR_12 | VAR_11;
 VAR_24->vb_queue.drv_priv = VAR_24;
 VAR_24->vb_queue.buf_struct_size = sizeof(struct msi2500_frame_buf);
 VAR_24->vb_queue.ops = &VAR_19;
 VAR_24->vb_queue.mem_ops = &VAR_21;
 VAR_24->vb_queue.timestamp_flags = VAR_4;
 VAR_27 = FUNC_20(&VAR_24->vb_queue);
 if (VAR_27) {
  FUNC_1(VAR_24->dev, "Could not initialize vb2 queue\n");
  goto err_free_mem;
 }


 VAR_24->vdev = VAR_17;
 VAR_24->vdev.queue = &VAR_24->vb_queue;
 VAR_24->vdev.queue->lock = &VAR_24->vb_queue_lock;
 FUNC_23(&VAR_24->vdev, VAR_24);


 VAR_24->v4l2_dev.release = VAR_20;
 VAR_27 = FUNC_17(&VAR_22->dev, &VAR_24->v4l2_dev);
 if (VAR_27) {
  FUNC_1(VAR_24->dev, "Failed to register v4l2-device (%d)\n", VAR_27);
  goto err_free_mem;
 }


 VAR_26 = FUNC_8(VAR_24->dev, 0);
 if (VAR_26 == ((void*)0)) {
  VAR_27 = -VAR_1;
  goto err_unregister_v4l2_dev;
 }

 VAR_24->master = VAR_26;
 VAR_26->bus_num = 0;
 VAR_26->num_chipselect = 1;
 VAR_26->transfer_one_message = VAR_18;
 FUNC_10(VAR_26, VAR_24);
 VAR_27 = FUNC_11(VAR_26);
 if (VAR_27) {
  FUNC_9(VAR_26);
  goto err_unregister_v4l2_dev;
 }


 VAR_25 = FUNC_19(&VAR_24->v4l2_dev, VAR_26, &VAR_28);
 VAR_24->v4l2_subdev = VAR_25;
 if (VAR_25 == ((void*)0)) {
  FUNC_1(VAR_24->dev, "cannot get v4l2 subdevice\n");
  VAR_27 = -VAR_0;
  goto err_unregister_master;
 }


 FUNC_16(&VAR_24->hdl, 0);
 if (VAR_24->hdl.error) {
  VAR_27 = VAR_24->hdl.error;
  FUNC_1(VAR_24->dev, "Could not initialize controls\n");
  goto err_free_controls;
 }


 FUNC_14(&VAR_24->hdl, VAR_25->ctrl_handler, ((void*)0), 1);

 VAR_24->v4l2_dev.ctrl_handler = &VAR_24->hdl;
 VAR_24->vdev.v4l2_dev = &VAR_24->v4l2_dev;
 VAR_24->vdev.lock = &VAR_24->v4l2_lock;
 VAR_24->vdev.device_caps = VAR_7 | VAR_8 |
    VAR_6 | VAR_9;

 VAR_27 = FUNC_22(&VAR_24->vdev, VAR_13, -1);
 if (VAR_27) {
  FUNC_1(VAR_24->dev,
   "Failed to register as video device (%d)\n", VAR_27);
  goto err_unregister_v4l2_dev;
 }
 FUNC_2(VAR_24->dev, "Registered as %s\n",
   FUNC_21(&VAR_24->vdev));
 FUNC_3(VAR_24->dev,
     "SDR API is still slightly experimental and functionality changes may follow\n");
 return 0;
err_free_controls:
 FUNC_15(&VAR_24->hdl);
err_unregister_master:
 FUNC_12(VAR_24->master);
err_unregister_v4l2_dev:
 FUNC_18(&VAR_24->v4l2_dev);
err_free_mem:
 FUNC_5(VAR_24);
err:
 return VAR_27;
}
