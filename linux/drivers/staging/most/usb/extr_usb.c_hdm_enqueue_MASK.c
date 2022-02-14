
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct urb {int transfer_flags; int transfer_dma; } ;
struct most_interface {int num_channels; } ;
struct most_dev {int io_mutex; TYPE_1__* usb_device; int * busy_urbs; int * ep_address; scalar_t__* padding_active; struct most_channel_config* conf; } ;
struct most_channel_config {int direction; scalar_t__ data_type; unsigned long extra_len; } ;
struct mbo {unsigned long buffer_length; void* virt_address; int bus_address; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (struct most_dev*,int,struct mbo*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct most_dev* FUNC_4 (struct most_interface*) ;
 scalar_t__ FUNC_5 (int) ;
 struct urb* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct urb*,int *) ;
 int FUNC_8 (struct urb*,TYPE_1__*,int ,void*,unsigned long,int ,struct mbo*) ;
 int FUNC_9 (struct urb*) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (struct urb*,int ) ;
 int FUNC_13 (struct urb*) ;

__attribute__((used)) static int FUNC_14(struct most_interface *VAR_14, int VAR_15,
         struct mbo *VAR_16)
{
 struct most_dev *VAR_17;
 struct most_channel_config *VAR_18;
 int VAR_19 = 0;
 struct urb *VAR_20;
 unsigned long VAR_21;
 void *VAR_22;

 if (FUNC_5(!VAR_14 || !VAR_16))
  return -VAR_1;
 if (FUNC_5(VAR_14->num_channels <= VAR_15 || VAR_15 < 0))
  return -VAR_0;

 VAR_17 = FUNC_4(VAR_14);
 VAR_18 = &VAR_17->conf[VAR_15];

 FUNC_2(&VAR_17->io_mutex);
 if (!VAR_17->usb_device) {
  VAR_19 = -VAR_2;
  goto unlock_io_mutex;
 }

 VAR_20 = FUNC_6(VAR_9, VAR_4);
 if (!VAR_20) {
  VAR_19 = -VAR_3;
  goto unlock_io_mutex;
 }

 if ((VAR_18->direction & VAR_8) && VAR_17->padding_active[VAR_15] &&
     FUNC_1(VAR_17, VAR_15, VAR_16)) {
  VAR_19 = -VAR_1;
  goto err_free_urb;
 }

 VAR_20->transfer_dma = VAR_16->bus_address;
 VAR_22 = VAR_16->virt_address;
 VAR_21 = VAR_16->buffer_length;

 if (VAR_18->direction & VAR_8) {
  FUNC_8(VAR_20, VAR_17->usb_device,
      FUNC_11(VAR_17->usb_device,
        VAR_17->ep_address[VAR_15]),
      VAR_22,
      VAR_21,
      VAR_13,
      VAR_16);
  if (VAR_18->data_type != VAR_6 &&
      VAR_18->data_type != VAR_7)
   VAR_20->transfer_flags |= VAR_11;
 } else {
  FUNC_8(VAR_20, VAR_17->usb_device,
      FUNC_10(VAR_17->usb_device,
        VAR_17->ep_address[VAR_15]),
      VAR_22,
      VAR_21 + VAR_18->extra_len,
      VAR_12,
      VAR_16);
 }
 VAR_20->transfer_flags |= VAR_10;

 FUNC_7(VAR_20, &VAR_17->busy_urbs[VAR_15]);

 VAR_19 = FUNC_12(VAR_20, VAR_5);
 if (VAR_19) {
  FUNC_0(&VAR_17->usb_device->dev,
   "URB submit failed with error %d.\n", VAR_19);
  goto err_unanchor_urb;
 }
 goto unlock_io_mutex;

err_unanchor_urb:
 FUNC_13(VAR_20);
err_free_urb:
 FUNC_9(VAR_20);
unlock_io_mutex:
 FUNC_3(&VAR_17->io_mutex);
 return VAR_19;
}
