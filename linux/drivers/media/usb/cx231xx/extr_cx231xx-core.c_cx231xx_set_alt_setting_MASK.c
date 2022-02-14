
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_18__ {scalar_t__ no_alt_vanc; } ;
struct TYPE_17__ {int alt; scalar_t__* alt_max_pkt_size; scalar_t__ max_pkt_size; } ;
struct TYPE_16__ {TYPE_6__* hs_config_info; } ;
struct TYPE_13__ {int alt; scalar_t__* alt_max_pkt_size; scalar_t__ max_pkt_size; } ;
struct TYPE_12__ {int alt; scalar_t__* alt_max_pkt_size; scalar_t__ max_pkt_size; } ;
struct TYPE_11__ {int alt; scalar_t__* alt_max_pkt_size; scalar_t__ max_pkt_size; } ;
struct TYPE_10__ {int alt; scalar_t__* alt_max_pkt_size; scalar_t__ max_pkt_size; } ;
struct cx231xx {int dev; int udev; TYPE_9__ board; TYPE_8__ sliced_cc_mode; TYPE_7__ current_pcb_config; TYPE_4__ vbi_mode; TYPE_3__ video_mode; TYPE_2__ adev; TYPE_1__ ts1_mode; } ;
struct TYPE_14__ {int hanc_index; int vanc_index; int video_index; int audio_index; int ts2_index; int ts1_index; } ;
struct TYPE_15__ {TYPE_5__ interface_info; } ;
 int FUNC_0 (char*,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__,int,...) ;
 int FUNC_2 (int ,scalar_t__,int) ;

int FUNC_3(struct cx231xx *VAR_0, u8 VAR_1, u8 VAR_2)
{
 int VAR_3 = 0;
 u32 VAR_4 = 0;
 u32 VAR_5 = 0;

 switch (VAR_1) {
 case 131:
  VAR_4 =
      VAR_0->current_pcb_config.hs_config_info[0].interface_info.
      ts1_index + 1;
  VAR_0->ts1_mode.alt = VAR_2;
  if (VAR_0->ts1_mode.alt_max_pkt_size != ((void*)0))
   VAR_5 = VAR_0->ts1_mode.max_pkt_size =
       VAR_0->ts1_mode.alt_max_pkt_size[VAR_0->ts1_mode.alt];
  break;
 case 130:
  VAR_4 =
      VAR_0->current_pcb_config.hs_config_info[0].interface_info.
      ts2_index + 1;
  break;
 case 133:
  VAR_4 =
      VAR_0->current_pcb_config.hs_config_info[0].interface_info.
      audio_index + 1;
  VAR_0->adev.alt = VAR_2;
  if (VAR_0->adev.alt_max_pkt_size != ((void*)0))
   VAR_5 = VAR_0->adev.max_pkt_size =
       VAR_0->adev.alt_max_pkt_size[VAR_0->adev.alt];
  break;
 case 128:
  VAR_4 =
      VAR_0->current_pcb_config.hs_config_info[0].interface_info.
      video_index + 1;
  VAR_0->video_mode.alt = VAR_2;
  if (VAR_0->video_mode.alt_max_pkt_size != ((void*)0))
   VAR_5 = VAR_0->video_mode.max_pkt_size =
       VAR_0->video_mode.alt_max_pkt_size[VAR_0->video_mode.
            alt];
  break;
 case 129:
  if (VAR_0->board.no_alt_vanc)
   return 0;
  VAR_4 =
      VAR_0->current_pcb_config.hs_config_info[0].interface_info.
      vanc_index + 1;
  VAR_0->vbi_mode.alt = VAR_2;
  if (VAR_0->vbi_mode.alt_max_pkt_size != ((void*)0))
   VAR_5 = VAR_0->vbi_mode.max_pkt_size =
       VAR_0->vbi_mode.alt_max_pkt_size[VAR_0->vbi_mode.alt];
  break;
 case 132:
  VAR_4 =
      VAR_0->current_pcb_config.hs_config_info[0].interface_info.
      hanc_index + 1;
  VAR_0->sliced_cc_mode.alt = VAR_2;
  if (VAR_0->sliced_cc_mode.alt_max_pkt_size != ((void*)0))
   VAR_5 = VAR_0->sliced_cc_mode.max_pkt_size =
       VAR_0->sliced_cc_mode.alt_max_pkt_size[VAR_0->
         sliced_cc_mode.
         alt];
  break;
 default:
  break;
 }

 if (VAR_2 > 0 && VAR_5 == 0) {
  FUNC_1(VAR_0->dev,
   "can't change interface %d alt no. to %d: Max. Pkt size = 0\n",
   VAR_4, VAR_2);


  if (VAR_0->board.no_alt_vanc)
   return -1;
 }

 FUNC_0("setting alternate %d with wMaxPacketSize=%u,Interface = %d\n",
   VAR_2, VAR_5,
   VAR_4);

 if (VAR_4 > 0) {
  VAR_3 = FUNC_2(VAR_0->udev, VAR_4, VAR_2);
  if (VAR_3 < 0) {
   FUNC_1(VAR_0->dev,
    "can't change interface %d alt no. to %d (err=%i)\n",
    VAR_4, VAR_2, VAR_3);
   return VAR_3;
  }
 }

 return VAR_3;
}
