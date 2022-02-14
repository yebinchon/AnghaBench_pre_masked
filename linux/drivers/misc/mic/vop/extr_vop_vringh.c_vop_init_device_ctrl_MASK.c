
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_vdev {struct mic_device_ctrl* dc; } ;
struct mic_device_desc {int dummy; } ;
struct mic_device_ctrl {int c2h_vdev_db; int h2c_vdev_db; scalar_t__ used_address_updated; scalar_t__ host_ack; scalar_t__ vdev_reset; scalar_t__ guest_ack; scalar_t__ config_change; } ;


 int FUNC_0 (struct mic_device_desc*) ;

__attribute__((used)) static void FUNC_1(struct vop_vdev *VAR_0,
     struct mic_device_desc *VAR_1)
{
 struct mic_device_ctrl *VAR_2;

 VAR_2 = (void *)VAR_1 + FUNC_0(VAR_1);

 VAR_2->config_change = 0;
 VAR_2->guest_ack = 0;
 VAR_2->vdev_reset = 0;
 VAR_2->host_ack = 0;
 VAR_2->used_address_updated = 0;
 VAR_2->c2h_vdev_db = -1;
 VAR_2->h2c_vdev_db = -1;
 VAR_0->dc = VAR_2;
}
