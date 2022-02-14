
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef size_t u8 ;
typedef int u16 ;
struct usb_interface_assoc_descriptor {int bFirstInterface; } ;
struct device {int dummy; } ;
struct usb_interface {int num_altsetting; TYPE_8__* altsetting; struct device dev; } ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct TYPE_18__ {int idProduct; int idVendor; } ;
struct usb_device {int speed; char* manufacturer; char* product; int dev; TYPE_13__* actconfig; TYPE_12__ descriptor; TYPE_11__* config; } ;
struct TYPE_20__ {int mdev; } ;
struct TYPE_26__ {int num_alt; int* alt_max_pkt_size; int end_point_addr; } ;
struct TYPE_23__ {int ts1_source; TYPE_2__* hs_config_info; } ;
struct TYPE_29__ {int alt; } ;
struct cx231xx {int devno; scalar_t__ model; int has_alsa_audio; int power_mode; size_t max_iad_interface_count; TYPE_14__ v4l2_dev; int media_dev; TYPE_6__ ts1_mode; TYPE_3__ current_pcb_config; int interface_count; int USE_ISO; scalar_t__ mode_tv; scalar_t__ vbi_or_sliced_cc_mode; int devlist_count; scalar_t__ xc_fw_load_done; scalar_t__ gpio_val; scalar_t__ gpio_dir; struct device* dev; TYPE_9__ video_mode; int name; } ;
struct TYPE_27__ {int bInterfaceNumber; int bNumEndpoints; } ;
struct TYPE_28__ {TYPE_5__* endpoint; TYPE_7__ desc; } ;
struct TYPE_24__ {int wMaxPacketSize; int bEndpointAddress; } ;
struct TYPE_25__ {TYPE_4__ desc; } ;
struct TYPE_21__ {size_t ts1_index; } ;
struct TYPE_22__ {TYPE_1__ interface_info; } ;
struct TYPE_19__ {struct usb_interface** interface; struct usb_interface_assoc_descriptor** intf_assoc; } ;
struct TYPE_16__ {size_t bNumInterfaces; } ;
struct TYPE_17__ {TYPE_10__ desc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct cx231xx*) ;
 int FUNC_3 (struct cx231xx*) ;
 int FUNC_4 (struct cx231xx*) ;
 int VAR_7 ;
 int FUNC_5 (struct cx231xx*) ;
 int FUNC_6 (struct cx231xx*,struct usb_device*,int) ;
 int FUNC_7 (struct cx231xx*,struct usb_device*,struct usb_interface*,int) ;
 int FUNC_8 (struct cx231xx*) ;
 int FUNC_9 (struct cx231xx*,struct usb_device*) ;
 int FUNC_10 (struct cx231xx*) ;
 int FUNC_11 (struct cx231xx*) ;
 int FUNC_12 (struct cx231xx*) ;
 int FUNC_13 (struct cx231xx*) ;
 int FUNC_14 (struct cx231xx*,int ,int) ;
 int FUNC_15 (struct cx231xx*) ;
 int FUNC_16 (struct cx231xx*) ;
 int FUNC_17 (struct cx231xx*) ;
 int FUNC_18 (struct cx231xx*) ;
 int FUNC_19 (struct device*,char*,int,...) ;
 int FUNC_20 (struct device*,char*,...) ;
 int FUNC_21 (struct device*,char*,char*,...) ;
 int* FUNC_22 (int *,int,int,int ) ;
 struct cx231xx* FUNC_23 (int *,int,int ) ;
 int FUNC_24 (int *,int) ;
 int FUNC_25 (struct usb_interface*) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (struct cx231xx*) ;
 int FUNC_29 (int ,int,char*,int) ;
 scalar_t__ FUNC_30 (int,int *) ;
 int VAR_8 ;
 struct usb_device* FUNC_31 (int ) ;
 int FUNC_32 (struct usb_device*) ;
 int FUNC_33 (struct usb_interface*,struct cx231xx*) ;
 int FUNC_34 (struct device*,TYPE_14__*) ;
 int FUNC_35 (TYPE_14__*) ;
 int FUNC_36 (int ) ;

__attribute__((used)) static int FUNC_37(struct usb_interface *VAR_9,
        const struct usb_device_id *VAR_10)
{
 struct usb_device *VAR_11;
 struct device *VAR_12 = &VAR_9->dev;
 struct usb_interface *VAR_13;
 struct cx231xx *VAR_14 = ((void*)0);
 int VAR_15 = -VAR_3;
 int VAR_16 = 0, VAR_17;
 int VAR_18, VAR_19 = 0;
 char *VAR_20;
 u8 VAR_21;
 struct usb_interface_assoc_descriptor *VAR_22;

 VAR_17 = VAR_9->altsetting[0].desc.bInterfaceNumber;





 if (VAR_17 != 1)
  return -VAR_3;


 do {
  VAR_16 = FUNC_24(&VAR_7, VAR_2);
  if (VAR_16 >= VAR_2) {

   FUNC_20(VAR_12,
    "Supports only %i devices.\n",
    VAR_2);
   return -VAR_4;
  }
 } while (FUNC_30(VAR_16, &VAR_7));

 VAR_11 = FUNC_31(FUNC_25(VAR_9));


 VAR_14 = FUNC_23(&VAR_11->dev, sizeof(*VAR_14), VAR_5);
 if (VAR_14 == ((void*)0)) {
  VAR_15 = -VAR_4;
  goto err_if;
 }

 FUNC_29(VAR_14->name, 29, "cx231xx #%d", VAR_16);
 VAR_14->devno = VAR_16;
 VAR_14->model = VAR_10->driver_info;
 VAR_14->video_mode.alt = -1;
 VAR_14->dev = VAR_12;

 FUNC_15(VAR_14);

 VAR_14->interface_count++;

 VAR_14->gpio_dir = 0;
 VAR_14->gpio_val = 0;
 VAR_14->xc_fw_load_done = 0;
 VAR_14->has_alsa_audio = 1;
 VAR_14->power_mode = -1;
 FUNC_0(&VAR_14->devlist_count, 0);


 VAR_14->vbi_or_sliced_cc_mode = 0;


 VAR_14->max_iad_interface_count = VAR_11->config->desc.bNumInterfaces;




 VAR_14->mode_tv = 0;

 VAR_14->USE_ISO = VAR_8;

 switch (VAR_11->speed) {
 case 129:
  VAR_20 = "1.5";
  break;
 case 128:
 case 131:
  VAR_20 = "12";
  break;
 case 130:
  VAR_20 = "480";
  break;
 default:
  VAR_20 = "unknown";
 }

 FUNC_21(VAR_12,
   "New device %s %s @ %s Mbps (%04x:%04x) with %d interfaces\n",
   VAR_11->manufacturer ? VAR_11->manufacturer : "",
   VAR_11->product ? VAR_11->product : "",
   VAR_20,
   FUNC_26(VAR_11->descriptor.idVendor),
   FUNC_26(VAR_11->descriptor.idProduct),
   VAR_14->max_iad_interface_count);


 VAR_14->interface_count++;


 VAR_16 = VAR_14->devno;

 VAR_22 = VAR_11->actconfig->intf_assoc[0];
 if (!VAR_22 || VAR_22->bFirstInterface != VAR_17) {
  FUNC_20(VAR_12, "Not found matching IAD interface\n");
  VAR_15 = -VAR_3;
  goto err_if;
 }

 FUNC_19(VAR_12, "registering interface %d\n", VAR_17);


 FUNC_33(VAR_9, VAR_14);


 VAR_15 = FUNC_9(VAR_14, VAR_11);
 if (VAR_15) {
  FUNC_20(VAR_12, "cx231xx_media_device_init failed\n");
  goto err_media_init;
 }





 VAR_15 = FUNC_34(&VAR_9->dev, &VAR_14->v4l2_dev);
 if (VAR_15) {
  FUNC_20(VAR_12, "v4l2_device_register failed\n");
  goto err_v4l2;
 }


 VAR_15 = FUNC_6(VAR_14, VAR_11, VAR_16);
 if (VAR_15)
  goto err_init;

 VAR_15 = FUNC_7(VAR_14, VAR_11, VAR_9, VAR_19);
 if (VAR_15)
  goto err_init;

 if (VAR_14->current_pcb_config.ts1_source != 0xff) {

  VAR_21 = VAR_14->current_pcb_config.hs_config_info[0].interface_info.ts1_index + 1;
  if (VAR_21 >= VAR_14->max_iad_interface_count) {
   FUNC_20(VAR_12, "TS1 PCB interface #%d doesn't exist\n",
    VAR_21);
   VAR_15 = -VAR_3;
   goto err_video_alt;
  }
  VAR_13 = VAR_11->actconfig->interface[VAR_21];

  if (VAR_13->altsetting[0].desc.bNumEndpoints < VAR_19 + 1) {
   VAR_15 = -VAR_3;
   goto err_video_alt;
  }

  VAR_14->ts1_mode.end_point_addr =
      VAR_13->altsetting[0].endpoint[VAR_19].
    desc.bEndpointAddress;

  VAR_14->ts1_mode.num_alt = VAR_13->num_altsetting;
  FUNC_21(VAR_12,
    "TS EndPoint Addr 0x%x, Alternate settings: %i\n",
    VAR_14->ts1_mode.end_point_addr,
    VAR_14->ts1_mode.num_alt);

  VAR_14->ts1_mode.alt_max_pkt_size = FUNC_22(&VAR_11->dev, 32, VAR_14->ts1_mode.num_alt, VAR_5);
  if (VAR_14->ts1_mode.alt_max_pkt_size == ((void*)0)) {
   VAR_15 = -VAR_4;
   goto err_video_alt;
  }

  for (VAR_18 = 0; VAR_18 < VAR_14->ts1_mode.num_alt; VAR_18++) {
   u16 VAR_23;

   if (VAR_13->altsetting[VAR_18].desc.bNumEndpoints < VAR_19 + 1) {
    VAR_15 = -VAR_3;
    goto err_video_alt;
   }

   VAR_23 = FUNC_26(VAR_13->altsetting[VAR_18].
      endpoint[VAR_19].desc.
      wMaxPacketSize);
   VAR_14->ts1_mode.alt_max_pkt_size[VAR_18] =
       (VAR_23 & 0x07ff) * (((VAR_23 & 0x1800) >> 11) + 1);
   FUNC_19(VAR_12, "Alternate setting %i, max size= %i\n",
    VAR_18, VAR_14->ts1_mode.alt_max_pkt_size[VAR_18]);
  }
 }

 if (VAR_14->model == VAR_1) {
  FUNC_5(VAR_14);
  FUNC_13(VAR_14);
  FUNC_14(VAR_14, VAR_6, 3);
 }

 if (VAR_14->model == VAR_0)
  FUNC_16(VAR_14);


 FUNC_28(VAR_14);
 if (VAR_15 < 0)
  FUNC_11(VAR_14);
 return VAR_15;

err_video_alt:

 FUNC_3(VAR_14);
 FUNC_8(VAR_14);
 FUNC_10(VAR_14);
 FUNC_2(VAR_14);
 FUNC_12(VAR_14);
 FUNC_4(VAR_14);
err_init:
 FUNC_35(&VAR_14->v4l2_dev);
err_v4l2:
 FUNC_17(VAR_14);
err_media_init:
 FUNC_33(VAR_9, ((void*)0));
err_if:
 FUNC_32(VAR_11);
 FUNC_1(VAR_16, &VAR_7);
 return VAR_15;
}
