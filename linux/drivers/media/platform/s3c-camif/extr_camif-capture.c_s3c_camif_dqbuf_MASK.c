
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct file {int f_flags; } ;
struct camif_vp {void* owner; int vb_queue; int frame_sequence; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *,struct v4l2_buffer*,int) ;
 struct camif_vp* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
      struct v4l2_buffer *VAR_4)
{
 struct camif_vp *VAR_5 = FUNC_2(VAR_2);

 FUNC_0("[vp%d] sequence: %d\n", VAR_5->id, VAR_5->frame_sequence);

 if (VAR_5->owner && VAR_5->owner != VAR_3)
  return -VAR_0;

 return FUNC_1(&VAR_5->vb_queue, VAR_4, VAR_2->f_flags & VAR_1);
}
