
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int frames; } ;
struct mcam_camera {int next_buf; scalar_t__ state; int (* frame_complete ) (struct mcam_camera*,int) ;TYPE_1__ frame_state; int sequence; scalar_t__* buf_seq; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct mcam_camera*,int) ;

__attribute__((used)) static void FUNC_3(struct mcam_camera *VAR_2, int VAR_3)
{



 FUNC_1(VAR_3, &VAR_2->flags);
 FUNC_0(VAR_0, &VAR_2->flags);
 VAR_2->next_buf = VAR_3;
 VAR_2->buf_seq[VAR_3] = VAR_2->sequence++;
 VAR_2->frame_state.frames++;



 if (VAR_2->state != VAR_1)
  return;



 VAR_2->frame_complete(VAR_2, VAR_3);
}
