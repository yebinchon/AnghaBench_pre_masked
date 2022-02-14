
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_interface {int dev; TYPE_2__* altsetting; } ;
struct usb_device_id {int dummy; } ;
struct gs_usb {int byte_order; int icount; TYPE_3__** canch; int rx_submitted; int udev; int active_channels; } ;
struct gs_host_config {int byte_order; int icount; TYPE_3__** canch; int rx_submitted; int udev; int active_channels; } ;
struct gs_device_config {int byte_order; int icount; TYPE_3__** canch; int rx_submitted; int udev; int active_channels; } ;
struct TYPE_9__ {struct gs_usb* parent; } ;
struct TYPE_7__ {int bInterfaceNumber; } ;
struct TYPE_8__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,unsigned int) ;
 int FUNC_4 (int *,char*,unsigned int) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (unsigned int,struct usb_interface*,struct gs_usb*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (struct gs_usb*) ;
 struct gs_usb* FUNC_10 (int,int ) ;
 struct gs_usb* FUNC_11 (int,int ) ;
 int FUNC_12 (int ,int ,int ,int,int,int ,struct gs_usb*,int,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (struct usb_interface*,struct gs_usb*) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static int FUNC_17(struct usb_interface *VAR_10,
   const struct usb_device_id *VAR_11)
{
 struct gs_usb *VAR_12;
 int VAR_13 = -VAR_1;
 unsigned int VAR_14, VAR_15;
 struct gs_host_config *VAR_16;
 struct gs_device_config *VAR_17;

 VAR_16 = FUNC_10(sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->byte_order = 0x0000beef;


 VAR_13 = FUNC_12(FUNC_8(VAR_10),
        FUNC_16(FUNC_8(VAR_10), 0),
        VAR_5,
        VAR_7 | VAR_9 | VAR_8,
        1,
        VAR_10->altsetting[0].desc.bInterfaceNumber,
        VAR_16,
        sizeof(*VAR_16),
        1000);

 FUNC_9(VAR_16);

 if (VAR_13 < 0) {
  FUNC_3(&VAR_10->dev, "Couldn't send data format (err=%d)\n",
   VAR_13);
  return VAR_13;
 }

 VAR_17 = FUNC_10(sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return -VAR_1;


 VAR_13 = FUNC_12(FUNC_8(VAR_10),
        FUNC_14(FUNC_8(VAR_10), 0),
        VAR_4,
        VAR_6 | VAR_9 | VAR_8,
        1,
        VAR_10->altsetting[0].desc.bInterfaceNumber,
        VAR_17,
        sizeof(*VAR_17),
        1000);
 if (VAR_13 < 0) {
  FUNC_3(&VAR_10->dev, "Couldn't get device config: (err=%d)\n",
   VAR_13);
  FUNC_9(VAR_17);
  return VAR_13;
 }

 VAR_14 = VAR_17->icount + 1;
 FUNC_4(&VAR_10->dev, "Configuring for %d interfaces\n", VAR_14);

 if (VAR_14 > VAR_3) {
  FUNC_3(&VAR_10->dev,
   "Driver cannot handle more that %d CAN interfaces\n",
   VAR_3);
  FUNC_9(VAR_17);
  return -VAR_0;
 }

 VAR_12 = FUNC_11(sizeof(*VAR_12), VAR_2);
 if (!VAR_12) {
  FUNC_9(VAR_17);
  return -VAR_1;
 }

 FUNC_7(&VAR_12->rx_submitted);

 FUNC_2(&VAR_12->active_channels, 0);

 FUNC_15(VAR_10, VAR_12);
 VAR_12->udev = FUNC_8(VAR_10);

 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
  VAR_12->canch[VAR_15] = FUNC_6(VAR_15, VAR_10, VAR_17);
  if (FUNC_0(VAR_12->canch[VAR_15])) {

   VAR_13 = FUNC_1(VAR_12->canch[VAR_15]);


   VAR_14 = VAR_15;
   for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
    FUNC_5(VAR_12->canch[VAR_15]);

   FUNC_13(&VAR_12->rx_submitted);
   FUNC_9(VAR_17);
   FUNC_9(VAR_12);
   return VAR_13;
  }
  VAR_12->canch[VAR_15]->parent = VAR_12;
 }

 FUNC_9(VAR_17);

 return 0;
}
