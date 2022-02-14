
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int done_entry; int vb2_queue; } ;
struct dt3155_priv {int lock; struct vb2_v4l2_buffer* curr_buf; int dmaq; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct vb2_v4l2_buffer* FUNC_3 (struct vb2_buffer*) ;
 struct dt3155_priv* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct vb2_buffer *VAR_0)
{
 struct vb2_v4l2_buffer *VAR_1 = FUNC_3(VAR_0);
 struct dt3155_priv *VAR_2 = FUNC_4(VAR_0->vb2_queue);


 FUNC_1(&VAR_2->lock);
 if (VAR_2->curr_buf)
  FUNC_0(&VAR_0->done_entry, &VAR_2->dmaq);
 else
  VAR_2->curr_buf = VAR_1;
 FUNC_2(&VAR_2->lock);
}
