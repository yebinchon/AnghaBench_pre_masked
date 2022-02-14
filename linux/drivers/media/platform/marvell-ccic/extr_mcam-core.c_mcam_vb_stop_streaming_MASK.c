
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_2__ {int delivered; int singles; int frames; } ;
struct mcam_camera {scalar_t__ state; TYPE_1__ frame_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mcam_camera*,char*,int ,int ,int ) ;
 int FUNC_1 (struct mcam_camera*) ;
 int FUNC_2 (struct vb2_queue*,int ) ;
 struct mcam_camera* FUNC_3 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_4(struct vb2_queue *VAR_4)
{
 struct mcam_camera *VAR_5 = FUNC_3(VAR_4);

 FUNC_0(VAR_5, "stop_streaming: %d frames, %d singles, %d delivered\n",
   VAR_5->frame_state.frames, VAR_5->frame_state.singles,
   VAR_5->frame_state.delivered);
 if (VAR_5->state == VAR_0) {

  VAR_5->state = VAR_1;
  return;
 }
 if (VAR_5->state != VAR_2)
  return;
 FUNC_1(VAR_5);




 FUNC_2(VAR_4, VAR_3);
}
