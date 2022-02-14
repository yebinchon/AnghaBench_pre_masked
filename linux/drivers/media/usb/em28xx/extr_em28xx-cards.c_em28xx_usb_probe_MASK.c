
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct usb_interface {int num_altsetting; int dev; TYPE_7__* altsetting; } ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct TYPE_9__ {int idProduct; int idVendor; } ;
struct usb_device {int speed; char* manufacturer; char* product; TYPE_3__* config; TYPE_1__ descriptor; } ;
struct TYPE_12__ {scalar_t__ decoder; scalar_t__ has_ir_i2c; int * ir_codes; scalar_t__ has_dual_ts; } ;
struct em28xx {int devno; int alt; int is_audio_only; int has_video; int ifnum; int num_alt; scalar_t__ em28xx_sensor; scalar_t__ tuner_type; int analog_xfer_bulk; int dvb_xfer_bulk; struct em28xx* alt_max_pkt_size_isoc; int media_dev; int ref; struct em28xx* dev_next; int dvb_alt_isoc; int dvb_max_pkt_size_isoc_ts2; int dvb_max_pkt_size_isoc; scalar_t__ dvb_ep_bulk_ts2; scalar_t__ dvb_ep_bulk; scalar_t__ dvb_ep_isoc_ts2; scalar_t__ dvb_ep_isoc; TYPE_5__* intf; scalar_t__ is_webcam; TYPE_4__ board; int lock; scalar_t__ model; int ts; scalar_t__ analog_ep_bulk; scalar_t__ analog_ep_isoc; int usb_audio_type; int name; } ;
struct TYPE_16__ {scalar_t__ type; } ;
struct TYPE_14__ {int bInterfaceNumber; scalar_t__ bInterfaceClass; int bNumEndpoints; } ;
struct TYPE_15__ {TYPE_6__ desc; } ;
struct TYPE_13__ {int dev; } ;
struct TYPE_10__ {int bNumInterfaces; } ;
struct TYPE_11__ {struct usb_interface** interface; TYPE_2__ desc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_8__* FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;




 scalar_t__* VAR_12 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,...) ;
 scalar_t__ VAR_13 ;
 unsigned int VAR_14 ;
 int FUNC_4 (struct em28xx*,struct usb_device*,struct usb_interface*,int,int,int*,int*,int*) ;
 int VAR_15 ;
 scalar_t__ FUNC_5 (struct em28xx*) ;
 int FUNC_6 (struct em28xx*,struct usb_device*,struct usb_interface*,int) ;
 int FUNC_7 (struct em28xx*,int,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct usb_interface*) ;
 struct em28xx* FUNC_10 (int,int,int ) ;
 int FUNC_11 (struct em28xx*) ;
 int FUNC_12 (int *) ;
 struct em28xx* FUNC_13 (int,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct em28xx*) ;
 int FUNC_19 (int ,int,char*) ;
 scalar_t__ FUNC_20 (int,int ) ;
 struct usb_device* FUNC_21 (int ) ;
 int FUNC_22 (struct usb_device*) ;
 int FUNC_23 (struct usb_interface*,struct em28xx*) ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static int FUNC_24(struct usb_interface *VAR_17,
       const struct usb_device_id *VAR_18)
{
 struct usb_device *VAR_19;
 struct em28xx *VAR_20 = ((void*)0);
 int VAR_21;
 bool VAR_22 = 0, VAR_23 = 0, VAR_24 = 0;
 int VAR_25, VAR_26, VAR_27;
 const int VAR_28 = VAR_17->altsetting[0].desc.bInterfaceNumber;
 char *VAR_29;

 VAR_19 = FUNC_21(FUNC_9(VAR_17));


 do {
  VAR_26 = FUNC_8(VAR_15, VAR_0);
  if (VAR_26 >= VAR_0) {

   FUNC_2(&VAR_17->dev,
    "Driver supports up to %i em28xx boards.\n",
          VAR_0);
   VAR_21 = -VAR_6;
   goto err_no_slot;
  }
 } while (FUNC_20(VAR_26, VAR_15));


 if (VAR_17->altsetting[0].desc.bInterfaceClass == VAR_11) {
  FUNC_3(&VAR_17->dev,
   "audio device (%04x:%04x): interface %i, class %i\n",
   FUNC_14(VAR_19->descriptor.idVendor),
   FUNC_14(VAR_19->descriptor.idProduct),
   VAR_28,
   VAR_17->altsetting[0].desc.bInterfaceClass);

  VAR_21 = -VAR_5;
  goto err;
 }


 VAR_20 = FUNC_13(sizeof(*VAR_20), VAR_7);
 if (!VAR_20) {
  VAR_21 = -VAR_6;
  goto err;
 }


 VAR_20->alt_max_pkt_size_isoc = FUNC_10(VAR_17->num_altsetting,
          sizeof(VAR_20->alt_max_pkt_size_isoc[0]),
          VAR_7);
 if (!VAR_20->alt_max_pkt_size_isoc) {
  FUNC_11(VAR_20);
  VAR_21 = -VAR_6;
  goto err;
 }


 for (VAR_25 = 0; VAR_25 < VAR_17->num_altsetting; VAR_25++) {
  int VAR_30;

  for (VAR_30 = 0;
       VAR_30 < VAR_17->altsetting[VAR_25].desc.bNumEndpoints;
       VAR_30++)
   FUNC_4(VAR_20, VAR_19, VAR_17,
          VAR_25, VAR_30,
          &VAR_22,
          &VAR_23,
          &VAR_24);
 }

 if (!(VAR_22 || VAR_23 || VAR_24)) {
  VAR_21 = -VAR_5;
  goto err_free;
 }

 switch (VAR_19->speed) {
 case 129:
  VAR_29 = "1.5";
  break;
 case 128:
 case 131:
  VAR_29 = "12";
  break;
 case 130:
  VAR_29 = "480";
  break;
 default:
  VAR_29 = "unknown";
 }

 FUNC_3(&VAR_17->dev,
  "New device %s %s @ %s Mbps (%04x:%04x, interface %d, class %d)\n",
  VAR_19->manufacturer ? VAR_19->manufacturer : "",
  VAR_19->product ? VAR_19->product : "",
  VAR_29,
  FUNC_14(VAR_19->descriptor.idVendor),
  FUNC_14(VAR_19->descriptor.idProduct),
  VAR_28,
  VAR_17->altsetting->desc.bInterfaceNumber);






 if (VAR_19->speed != 130 && VAR_13 == 0) {
  FUNC_2(&VAR_17->dev, "Device initialization failed.\n");
  FUNC_2(&VAR_17->dev,
   "Device must be connected to a high-speed USB 2.0 port.\n");
  VAR_21 = -VAR_5;
  goto err_free;
 }

 VAR_20->devno = VAR_26;
 VAR_20->model = VAR_18->driver_info;
 VAR_20->alt = -1;
 VAR_20->is_audio_only = VAR_22 && !(VAR_23 || VAR_24);
 VAR_20->has_video = VAR_23;
 VAR_20->ifnum = VAR_28;

 VAR_20->ts = VAR_8;
 FUNC_19(VAR_20->name, 28, "em28xx");
 VAR_20->dev_next = ((void*)0);

 if (VAR_22) {
  FUNC_3(&VAR_17->dev,
   "Audio interface %i found (Vendor Class)\n", VAR_28);
  VAR_20->usb_audio_type = VAR_4;
 }

 for (VAR_25 = 0; VAR_25 < VAR_19->config->desc.bNumInterfaces; VAR_25++) {
  struct usb_interface *VAR_31 = VAR_19->config->interface[VAR_25];

  if (VAR_31->altsetting[0].desc.bInterfaceClass == VAR_11) {
   if (VAR_22)
    FUNC_2(&VAR_17->dev,
     "em28xx: device seems to have vendor AND usb audio class interfaces !\n"
     "\t\tThe vendor interface will be ignored. Please contact the developers <linux-media@vger.kernel.org>\n");
   VAR_20->usb_audio_type = VAR_3;
   break;
  }
 }

 if (VAR_23)
  FUNC_3(&VAR_17->dev, "Video interface %i found:%s%s\n",
   VAR_28,
   VAR_20->analog_ep_bulk ? " bulk" : "",
   VAR_20->analog_ep_isoc ? " isoc" : "");
 if (VAR_24)
  FUNC_3(&VAR_17->dev, "DVB interface %i found:%s%s\n",
   VAR_28,
   VAR_20->dvb_ep_bulk ? " bulk" : "",
   VAR_20->dvb_ep_isoc ? " isoc" : "");

 VAR_20->num_alt = VAR_17->num_altsetting;

 if ((unsigned int)VAR_12[VAR_26] < VAR_14)
  VAR_20->model = VAR_12[VAR_26];


 FUNC_23(VAR_17, VAR_20);


 FUNC_17(&VAR_20->lock);
 VAR_21 = FUNC_6(VAR_20, VAR_19, VAR_17, VAR_26);
 if (VAR_21)
  goto err_free;

 if (VAR_16 < 0) {
  if (VAR_20->is_webcam)
   VAR_27 = 1;
  else
   VAR_27 = 0;
 } else {
  VAR_27 = VAR_16 > 0;
 }


 if (VAR_23 &&
     VAR_20->board.decoder == VAR_1 &&
     VAR_20->em28xx_sensor == VAR_2) {
  FUNC_2(&VAR_17->dev,
   "Currently, V4L2 is not supported on this model\n");
  VAR_23 = 0;
  VAR_20->has_video = 0;
 }

 if (VAR_20->board.has_dual_ts &&
     (VAR_20->tuner_type != VAR_10 || FUNC_0(0)->type)) {




  FUNC_2(&VAR_17->dev,
   "We currently don't support analog TV or stream capture on dual tuners.\n");
  VAR_23 = 0;
 }


 if (VAR_23) {
  if (!VAR_20->analog_ep_isoc || (VAR_27 && VAR_20->analog_ep_bulk))
   VAR_20->analog_xfer_bulk = 1;
  FUNC_3(&VAR_17->dev, "analog set to %s mode.\n",
   VAR_20->analog_xfer_bulk ? "bulk" : "isoc");
 }
 if (VAR_24) {
  if (!VAR_20->dvb_ep_isoc || (VAR_27 && VAR_20->dvb_ep_bulk))
   VAR_20->dvb_xfer_bulk = 1;
  FUNC_3(&VAR_17->dev, "dvb set to %s mode.\n",
   VAR_20->dvb_xfer_bulk ? "bulk" : "isoc");
 }

 if (VAR_20->board.has_dual_ts && FUNC_5(VAR_20) == 0) {
  VAR_20->dev_next->ts = VAR_9;
  VAR_20->dev_next->alt = -1;
  VAR_20->dev_next->is_audio_only = VAR_22 &&
      !(VAR_23 || VAR_24);
  VAR_20->dev_next->has_video = 0;
  VAR_20->dev_next->ifnum = VAR_28;
  VAR_20->dev_next->model = VAR_18->driver_info;

  FUNC_17(&VAR_20->dev_next->lock);
  VAR_21 = FUNC_6(VAR_20->dev_next, VAR_19, VAR_17,
      VAR_20->dev_next->devno);
  if (VAR_21)
   goto err_free;

  VAR_20->dev_next->board.ir_codes = ((void*)0);
  VAR_20->dev_next->board.has_ir_i2c = 0;

  if (VAR_16 < 0) {
   if (VAR_20->dev_next->is_webcam)
    VAR_27 = 1;
   else
    VAR_27 = 0;
  } else {
   VAR_27 = VAR_16 > 0;
  }


  if (VAR_24) {
   if (!VAR_20->dvb_ep_isoc_ts2 ||
       (VAR_27 && VAR_20->dvb_ep_bulk_ts2))
    VAR_20->dev_next->dvb_xfer_bulk = 1;
   FUNC_3(&VAR_20->intf->dev, "dvb ts2 set to %s mode.\n",
     VAR_20->dev_next->dvb_xfer_bulk ? "bulk" : "isoc");
  }

  VAR_20->dev_next->dvb_ep_isoc = VAR_20->dvb_ep_isoc_ts2;
  VAR_20->dev_next->dvb_ep_bulk = VAR_20->dvb_ep_bulk_ts2;
  VAR_20->dev_next->dvb_max_pkt_size_isoc = VAR_20->dvb_max_pkt_size_isoc_ts2;
  VAR_20->dev_next->dvb_alt_isoc = VAR_20->dvb_alt_isoc;


  if (VAR_20->dvb_xfer_bulk) {

   FUNC_7(VAR_20, 0x0b, 0x96);
   FUNC_15(100);
   FUNC_7(VAR_20, 0x0b, 0x80);
   FUNC_15(100);
  } else {

   FUNC_7(VAR_20, 0x0b, 0x96);
   FUNC_15(100);
   FUNC_7(VAR_20, 0x0b, 0x82);
   FUNC_15(100);
  }

  FUNC_12(&VAR_20->dev_next->ref);
 }

 FUNC_12(&VAR_20->ref);

 FUNC_18(VAR_20);
 return 0;

err_free:
 FUNC_11(VAR_20->alt_max_pkt_size_isoc);
 FUNC_11(VAR_20);

err:
 FUNC_1(VAR_26, VAR_15);

err_no_slot:
 FUNC_22(VAR_19);
 return VAR_21;
}
