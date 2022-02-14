
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ intr_type; } ;
struct vxgedev {int no_of_vpath; int vp_reset_timer; int devh; TYPE_1__ config; int vp_reset; } ;
struct timer_list {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct vxgedev* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int,int *) ;
 struct vxgedev* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vxgedev*,int) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_5)
{
 struct vxgedev *VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_4);
 int VAR_7, VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_6->no_of_vpath; VAR_7++) {
  if (FUNC_2(VAR_7, &VAR_6->vp_reset)) {
   FUNC_5(VAR_6, VAR_7);
   VAR_8++;
  }
 }
 if (VAR_8 && (VAR_6->config.intr_type != VAR_1)) {
  FUNC_4(VAR_6->devh);
  FUNC_3(VAR_6->devh);
 }

 FUNC_1(&VAR_6->vp_reset_timer, VAR_2 + VAR_0 / 2);
}
