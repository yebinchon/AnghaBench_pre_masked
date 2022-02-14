
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned char cam_register; int flicker_mode_req; } ;
struct TYPE_6__ {unsigned char exposure_modes; } ;
struct TYPE_5__ {scalar_t__ device_type; } ;
struct TYPE_8__ {TYPE_3__ flicker_control; TYPE_2__ vp_params; TYPE_1__ pnp_id; } ;
struct camera_data {TYPE_4__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;



 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct camera_data*,int ,int ,int) ;

int FUNC_1(struct camera_data *VAR_12, int VAR_13)
{
 unsigned char VAR_14;
 int VAR_15 = 0;

 if(VAR_12->params.pnp_id.device_type != VAR_8)
  return -VAR_9;


 if((VAR_15 = FUNC_0(VAR_12, VAR_0,
       VAR_10, 0)))
  return VAR_15;
 VAR_14 = VAR_12->params.flicker_control.cam_register;

 switch(VAR_13) {
 case 128:
  VAR_14 |= VAR_7;
  VAR_14 &= ~VAR_6;
  break;
 case 129:
  VAR_14 &= ~VAR_7;
  VAR_14 &= ~VAR_6;
  break;
 case 130:
  VAR_14 &= ~VAR_7;
  VAR_14 |= VAR_6;
  break;
 default:
  return -VAR_9;
 }

 if((VAR_15 = FUNC_0(VAR_12, VAR_3,
       VAR_11, VAR_14)))
  return VAR_15;


 if((VAR_15 = FUNC_0(VAR_12, VAR_1,
       VAR_10, 0)))
  return VAR_15;
 VAR_14 = VAR_12->params.vp_params.exposure_modes;

 if (VAR_13 == 128) {
  VAR_14 |= VAR_5;
 } else {
  VAR_14 &= ~VAR_5;
 }

 if((VAR_15 = FUNC_0(VAR_12, VAR_4,
       VAR_11, VAR_14)))
  return VAR_15;

 if((VAR_15 = FUNC_0(VAR_12, VAR_2,
       VAR_11, 1)))
  return VAR_15;

 switch(VAR_13) {
 case 128:
 case 129:
 case 130:
  VAR_12->params.flicker_control.flicker_mode_req = VAR_13;
  break;
 default:
  VAR_15 = -VAR_9;
 }

 return VAR_15;
}
