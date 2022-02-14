
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbg_dev {int heartbeat_interval_ms; int heartbeat_timer; int guest_heartbeat_req; } ;
struct timer_list {int dummy; } ;


 struct vbg_dev* FUNC_0 (int ,struct timer_list*,int ) ;
 struct vbg_dev* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vbg_dev*,int ) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct vbg_dev *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);

 FUNC_3(VAR_3, VAR_3->guest_heartbeat_req);
 FUNC_1(&VAR_3->heartbeat_timer,
    FUNC_2(VAR_3->heartbeat_interval_ms));
}
