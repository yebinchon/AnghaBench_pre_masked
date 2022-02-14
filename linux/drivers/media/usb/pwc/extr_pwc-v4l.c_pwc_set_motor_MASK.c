
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pwc_device {int* ctrl_buf; TYPE_4__* motor_tilt; TYPE_3__* motor_pan; TYPE_2__* motor_tilt_reset; TYPE_1__* motor_pan_reset; } ;
struct TYPE_8__ {int val; scalar_t__ is_new; } ;
struct TYPE_7__ {int val; scalar_t__ is_new; } ;
struct TYPE_6__ {scalar_t__ is_new; } ;
struct TYPE_5__ {scalar_t__ is_new; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct pwc_device*,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct pwc_device *VAR_3)
{
 int VAR_4;

 VAR_3->ctrl_buf[0] = 0;
 if (VAR_3->motor_pan_reset->is_new)
  VAR_3->ctrl_buf[0] |= 0x01;
 if (VAR_3->motor_tilt_reset->is_new)
  VAR_3->ctrl_buf[0] |= 0x02;
 if (VAR_3->motor_pan_reset->is_new || VAR_3->motor_tilt_reset->is_new) {
  VAR_4 = FUNC_1(VAR_3, VAR_2,
           VAR_1,
           VAR_3->ctrl_buf, 1);
  if (VAR_4 < 0)
   return VAR_4;
 }

 FUNC_0(VAR_3->ctrl_buf, 0, 4);
 if (VAR_3->motor_pan->is_new) {
  VAR_3->ctrl_buf[0] = VAR_3->motor_pan->val & 0xFF;
  VAR_3->ctrl_buf[1] = (VAR_3->motor_pan->val >> 8);
 }
 if (VAR_3->motor_tilt->is_new) {
  VAR_3->ctrl_buf[2] = VAR_3->motor_tilt->val & 0xFF;
  VAR_3->ctrl_buf[3] = (VAR_3->motor_tilt->val >> 8);
 }
 if (VAR_3->motor_pan->is_new || VAR_3->motor_tilt->is_new) {
  VAR_4 = FUNC_1(VAR_3, VAR_2,
           VAR_0,
           VAR_3->ctrl_buf, 4);
  if (VAR_4 < 0)
   return VAR_4;
 }

 return 0;
}
