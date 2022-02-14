
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_info {int dummy; } ;
struct vop_device {TYPE_1__* hw_ops; } ;
struct mic_device_ctrl {scalar_t__ guest_ack; scalar_t__ config_change; } ;
struct mic_bootparam {int h2c_config_db; } ;
typedef int s8 ;
struct TYPE_2__ {int (* send_intr ) (struct vop_device*,int) ;struct mic_bootparam* (* get_dp ) (struct vop_device*) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 struct mic_bootparam* FUNC_2 (struct vop_device*) ;
 int FUNC_3 (struct vop_device*,int) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct vop_info *VAR_2, struct mic_device_ctrl *VAR_3,
      struct vop_device *VAR_4)
{
 struct mic_bootparam *VAR_5 = VAR_4->hw_ops->get_dp(VAR_4);
 s8 VAR_6;
 int VAR_7, VAR_8;
 FUNC_0(VAR_1);

 VAR_3->config_change = VAR_0;
 VAR_6 = VAR_5->h2c_config_db;
 if (VAR_6 != -1)
  VAR_4->hw_ops->send_intr(VAR_4, VAR_6);
 else
  goto done;
 for (VAR_8 = 15; VAR_8--;) {
  VAR_7 = FUNC_4(VAR_1, VAR_3->guest_ack,
      FUNC_1(1000));
  if (VAR_7)
   break;
 }
done:
 VAR_3->config_change = 0;
 VAR_3->guest_ack = 0;
}
