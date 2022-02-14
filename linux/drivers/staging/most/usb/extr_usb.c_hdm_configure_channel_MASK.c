
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u16 ;
struct most_interface {int num_channels; } ;
struct most_dev {int* is_channel_healthy; int* padding_active; unsigned int* ep_address; TYPE_2__* usb_device; struct most_channel_config* conf; int * suffix; TYPE_1__* clear_work; } ;
struct most_channel_config {unsigned int buffer_size; scalar_t__ data_type; int packets_per_xact; unsigned int extra_len; int num_buffers; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {int channel; int ws; struct most_dev* mdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,...) ;
 unsigned int FUNC_3 (struct most_channel_config*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,unsigned int) ;
 struct most_dev* FUNC_5 (struct most_interface*) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct most_interface *VAR_6, int VAR_7,
     struct most_channel_config *VAR_8)
{
 unsigned int VAR_9;
 unsigned int VAR_10;
 struct most_dev *VAR_11 = FUNC_5(VAR_6);
 struct device *VAR_12 = &VAR_11->usb_device->dev;

 VAR_11->is_channel_healthy[VAR_7] = 1;
 VAR_11->clear_work[VAR_7].channel = VAR_7;
 VAR_11->clear_work[VAR_7].mdev = VAR_11;
 FUNC_0(&VAR_11->clear_work[VAR_7].ws, VAR_5);

 if (FUNC_6(!VAR_6 || !VAR_8)) {
  FUNC_1(VAR_12, "Bad interface or config pointer.\n");
  return -VAR_0;
 }
 if (FUNC_6(VAR_7 < 0 || VAR_7 >= VAR_6->num_channels)) {
  FUNC_1(VAR_12, "Channel ID out of range.\n");
  return -VAR_0;
 }
 if (!VAR_8->num_buffers || !VAR_8->buffer_size) {
  FUNC_1(VAR_12, "Misconfig: buffer size or #buffers zero.\n");
  return -VAR_0;
 }

 if (VAR_8->data_type != VAR_3 &&
     !(VAR_8->data_type == VAR_2 &&
       VAR_8->packets_per_xact != 0xFF)) {
  VAR_11->padding_active[VAR_7] = 0;





  goto exit;
 }

 VAR_11->padding_active[VAR_7] = 1;

 VAR_10 = FUNC_3(VAR_8);
 if (VAR_10 == 0 || VAR_10 > VAR_4) {
  FUNC_2(VAR_12, "Misconfig: frame size wrong\n");
  return -VAR_0;
 }

 VAR_9 = VAR_8->buffer_size / VAR_10;

 if (VAR_8->buffer_size % VAR_10) {
  u16 VAR_13 = VAR_8->buffer_size;

  VAR_8->buffer_size = VAR_9 * VAR_10;
  FUNC_2(VAR_12, "%s: fixed buffer size (%d -> %d)\n",
    VAR_11->suffix[VAR_7], VAR_13, VAR_8->buffer_size);
 }


 VAR_8->extra_len = VAR_9 * (VAR_4 - VAR_10);

exit:
 VAR_11->conf[VAR_7] = *VAR_8;
 if (VAR_8->data_type == VAR_1) {
  u16 VAR_14 = VAR_11->ep_address[VAR_7];

  if (FUNC_4(VAR_11->usb_device, VAR_14) < 0)
   FUNC_2(VAR_12, "sync for ep%02x failed", VAR_14);
 }
 return 0;
}
