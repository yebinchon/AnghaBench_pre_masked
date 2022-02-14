
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


struct TYPE_15__ {int height; int width; } ;
struct TYPE_14__ {scalar_t__ sensor_flags; } ;
struct TYPE_13__ {void* frame_rate; scalar_t__ gpio_data; scalar_t__ gpio_direction; scalar_t__ lowlight_boost; } ;
struct TYPE_12__ {scalar_t__ device_type; } ;
struct TYPE_11__ {int quality; } ;
struct TYPE_10__ {int creep_period; int user_squeeze; int inhibit_htables; int jpeg_options; } ;
struct TYPE_9__ {int flicker_mode_req; } ;
struct TYPE_16__ {TYPE_7__ roi; TYPE_6__ version; TYPE_5__ vp_params; TYPE_4__ pnp_id; TYPE_3__ vc_params; TYPE_2__ compression; TYPE_1__ flicker_control; } ;
struct camera_data {TYPE_8__ params; int height; int width; int video_size; int sensor_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_0(struct camera_data *VAR_14)
{



 VAR_14->params.vp_params.lowlight_boost = 0;


 VAR_14->params.flicker_control.flicker_mode_req = VAR_7;


 VAR_14->params.compression.jpeg_options = VAR_2;
 VAR_14->params.compression.creep_period = 2;
 VAR_14->params.compression.user_squeeze = 20;
 VAR_14->params.compression.inhibit_htables = 0;


 VAR_14->params.vp_params.gpio_direction = 0;
 VAR_14->params.vp_params.gpio_data = 0;


 VAR_14->params.vc_params.quality = 100;




 if(VAR_14->params.pnp_id.device_type == VAR_6) {
  if(VAR_14->params.version.sensor_flags == VAR_5)
   VAR_14->params.vp_params.frame_rate = VAR_3;
  else
   VAR_14->params.vp_params.frame_rate = VAR_4;
 } else {
  VAR_14->params.vp_params.frame_rate = VAR_4;
 }





 if (VAR_14->params.version.sensor_flags == VAR_5) {
  VAR_14->sensor_type = VAR_1;
  VAR_14->video_size = VAR_13;
  VAR_14->params.roi.width = VAR_10;
  VAR_14->params.roi.height = VAR_11;
 } else {
  VAR_14->sensor_type = VAR_0;
  VAR_14->video_size = VAR_12;
  VAR_14->params.roi.width = VAR_8;
  VAR_14->params.roi.height = VAR_9;
 }

 VAR_14->width = VAR_14->params.roi.width;
 VAR_14->height = VAR_14->params.roi.height;
}
