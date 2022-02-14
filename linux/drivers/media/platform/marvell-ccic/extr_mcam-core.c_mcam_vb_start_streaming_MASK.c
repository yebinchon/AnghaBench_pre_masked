
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_2__ {scalar_t__ delivered; scalar_t__ singles; scalar_t__ frames; } ;
struct mcam_camera {scalar_t__ state; scalar_t__ buffer_mode; unsigned int nbufs; int flags; int buffers; scalar_t__ sequence; TYPE_1__ frame_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct mcam_camera*) ;
 int FUNC_3 (struct vb2_queue*,int ) ;
 struct mcam_camera* FUNC_4 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_5(struct vb2_queue *VAR_6, unsigned int VAR_7)
{
 struct mcam_camera *VAR_8 = FUNC_4(VAR_6);
 unsigned int VAR_9;
 int VAR_10;

 if (VAR_8->state != VAR_4) {
  FUNC_3(VAR_6, VAR_5);
  return -VAR_2;
 }
 VAR_8->frame_state.frames = 0;
 VAR_8->frame_state.singles = 0;
 VAR_8->frame_state.delivered = 0;
 VAR_8->sequence = 0;







 if (VAR_8->buffer_mode != VAR_0 && FUNC_1(&VAR_8->buffers)) {
  VAR_8->state = VAR_3;
  return 0;
 }





 for (VAR_9 = 0; VAR_9 < VAR_8->nbufs; VAR_9++)
  FUNC_0(VAR_1 + VAR_9, &VAR_8->flags);

 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10)
  FUNC_3(VAR_6, VAR_5);
 return VAR_10;
}
