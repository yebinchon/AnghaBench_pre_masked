
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u16 ;
struct usb_interface {int num_altsetting; TYPE_10__* altsetting; } ;
struct usb_device {int dev; TYPE_6__* actconfig; } ;
struct TYPE_14__ {int num_alt; int* alt_max_pkt_size; int end_point_addr; } ;
struct TYPE_18__ {TYPE_4__* hs_config_info; } ;
struct TYPE_13__ {int num_alt; int* alt_max_pkt_size; int end_point_addr; } ;
struct TYPE_15__ {int num_alt; int* alt_max_pkt_size; int end_point_addr; } ;
struct cx231xx {int max_iad_interface_count; TYPE_1__ sliced_cc_mode; int dev; TYPE_5__ current_pcb_config; TYPE_11__ vbi_mode; TYPE_2__ video_mode; } ;
struct TYPE_21__ {int wMaxPacketSize; int bEndpointAddress; } ;
struct TYPE_22__ {TYPE_8__ desc; } ;
struct TYPE_20__ {int bNumEndpoints; } ;
struct TYPE_19__ {struct usb_interface** interface; } ;
struct TYPE_16__ {int video_index; int vanc_index; int hanc_index; } ;
struct TYPE_17__ {TYPE_3__ interface_info; } ;
struct TYPE_12__ {TYPE_9__* endpoint; TYPE_7__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int ,int) ;
 void* FUNC_3 (int *,int,int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct cx231xx *VAR_3,
        struct usb_device *VAR_4,
        struct usb_interface *VAR_5,
        int VAR_6)
{
 struct usb_interface *VAR_7;
 int VAR_8, VAR_9;




 VAR_9 = VAR_3->current_pcb_config.hs_config_info[0].interface_info.video_index + 1;
 if (VAR_9 >= VAR_3->max_iad_interface_count) {
  FUNC_1(VAR_3->dev,
   "Video PCB interface #%d doesn't exist\n", VAR_9);
  return -VAR_0;
 }

 VAR_7 = VAR_4->actconfig->interface[VAR_9];

 if (VAR_7->altsetting[0].desc.bNumEndpoints < VAR_6 + 1)
  return -VAR_0;

 VAR_3->video_mode.end_point_addr = VAR_7->altsetting[0].endpoint[VAR_6].desc.bEndpointAddress;
 VAR_3->video_mode.num_alt = VAR_7->num_altsetting;

 FUNC_2(VAR_3->dev,
   "video EndPoint Addr 0x%x, Alternate settings: %i\n",
   VAR_3->video_mode.end_point_addr,
   VAR_3->video_mode.num_alt);

 VAR_3->video_mode.alt_max_pkt_size = FUNC_3(&VAR_4->dev, 32, VAR_3->video_mode.num_alt, VAR_2);
 if (VAR_3->video_mode.alt_max_pkt_size == ((void*)0))
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_3->video_mode.num_alt; VAR_8++) {
  u16 VAR_10;

  if (VAR_7->altsetting[VAR_8].desc.bNumEndpoints < VAR_6 + 1)
   return -VAR_0;

  VAR_10 = FUNC_4(VAR_7->altsetting[VAR_8].endpoint[VAR_6].desc.wMaxPacketSize);
  VAR_3->video_mode.alt_max_pkt_size[VAR_8] = (VAR_10 & 0x07ff) * (((VAR_10 & 0x1800) >> 11) + 1);
  FUNC_0(VAR_3->dev,
   "Alternate setting %i, max size= %i\n", VAR_8,
   VAR_3->video_mode.alt_max_pkt_size[VAR_8]);
 }



 VAR_9 = VAR_3->current_pcb_config.hs_config_info[0].interface_info.vanc_index + 1;
 if (VAR_9 >= VAR_3->max_iad_interface_count) {
  FUNC_1(VAR_3->dev,
   "VBI PCB interface #%d doesn't exist\n", VAR_9);
  return -VAR_0;
 }
 VAR_7 = VAR_4->actconfig->interface[VAR_9];

 if (VAR_7->altsetting[0].desc.bNumEndpoints < VAR_6 + 1)
  return -VAR_0;

 VAR_3->vbi_mode.end_point_addr =
     VAR_7->altsetting[0].endpoint[VAR_6].desc.
   bEndpointAddress;

 VAR_3->vbi_mode.num_alt = VAR_7->num_altsetting;
 FUNC_2(VAR_3->dev,
   "VBI EndPoint Addr 0x%x, Alternate settings: %i\n",
   VAR_3->vbi_mode.end_point_addr,
   VAR_3->vbi_mode.num_alt);


 VAR_3->vbi_mode.alt_max_pkt_size = FUNC_3(&VAR_4->dev, 32, VAR_3->vbi_mode.num_alt, VAR_2);
 if (VAR_3->vbi_mode.alt_max_pkt_size == ((void*)0))
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_3->vbi_mode.num_alt; VAR_8++) {
  u16 VAR_11;

  if (VAR_7->altsetting[VAR_8].desc.bNumEndpoints < VAR_6 + 1)
   return -VAR_0;

  VAR_11 = FUNC_4(VAR_7->altsetting[VAR_8].endpoint[VAR_6].
    desc.wMaxPacketSize);
  VAR_3->vbi_mode.alt_max_pkt_size[VAR_8] =
      (VAR_11 & 0x07ff) * (((VAR_11 & 0x1800) >> 11) + 1);
  FUNC_0(VAR_3->dev,
   "Alternate setting %i, max size= %i\n", VAR_8,
   VAR_3->vbi_mode.alt_max_pkt_size[VAR_8]);
 }




 VAR_9 = VAR_3->current_pcb_config.hs_config_info[0].interface_info.hanc_index + 1;
 if (VAR_9 >= VAR_3->max_iad_interface_count) {
  FUNC_1(VAR_3->dev,
   "Sliced CC PCB interface #%d doesn't exist\n", VAR_9);
  return -VAR_0;
 }
 VAR_7 = VAR_4->actconfig->interface[VAR_9];

 if (VAR_7->altsetting[0].desc.bNumEndpoints < VAR_6 + 1)
  return -VAR_0;

 VAR_3->sliced_cc_mode.end_point_addr =
     VAR_7->altsetting[0].endpoint[VAR_6].desc.
   bEndpointAddress;

 VAR_3->sliced_cc_mode.num_alt = VAR_7->num_altsetting;
 FUNC_2(VAR_3->dev,
   "sliced CC EndPoint Addr 0x%x, Alternate settings: %i\n",
   VAR_3->sliced_cc_mode.end_point_addr,
   VAR_3->sliced_cc_mode.num_alt);
 VAR_3->sliced_cc_mode.alt_max_pkt_size = FUNC_3(&VAR_4->dev, 32, VAR_3->sliced_cc_mode.num_alt, VAR_2);
 if (VAR_3->sliced_cc_mode.alt_max_pkt_size == ((void*)0))
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_3->sliced_cc_mode.num_alt; VAR_8++) {
  u16 VAR_12;

  if (VAR_7->altsetting[VAR_8].desc.bNumEndpoints < VAR_6 + 1)
   return -VAR_0;

  VAR_12 = FUNC_4(VAR_7->altsetting[VAR_8].endpoint[VAR_6].
    desc.wMaxPacketSize);
  VAR_3->sliced_cc_mode.alt_max_pkt_size[VAR_8] =
      (VAR_12 & 0x07ff) * (((VAR_12 & 0x1800) >> 11) + 1);
  FUNC_0(VAR_3->dev,
   "Alternate setting %i, max size= %i\n", VAR_8,
   VAR_3->sliced_cc_mode.alt_max_pkt_size[VAR_8]);
 }

 return 0;
}
