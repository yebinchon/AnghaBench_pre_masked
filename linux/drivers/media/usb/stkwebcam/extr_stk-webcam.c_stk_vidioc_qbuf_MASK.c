
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {scalar_t__ memory; scalar_t__ index; int flags; } ;
struct stk_sio_buffer {struct v4l2_buffer v4lbuf; int list; } ;
struct stk_camera {scalar_t__ n_sbufs; int spinlock; int sio_avail; struct stk_sio_buffer* sio_bufs; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct stk_camera* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4,
  void *VAR_5, struct v4l2_buffer *VAR_6)
{
 struct stk_camera *VAR_7 = FUNC_3(VAR_4);
 struct stk_sio_buffer *VAR_8;
 unsigned long VAR_9;

 if (VAR_6->memory != VAR_3)
  return -VAR_0;

 if (VAR_6->index >= VAR_7->n_sbufs)
  return -VAR_0;
 VAR_8 = VAR_7->sio_bufs + VAR_6->index;
 if (VAR_8->v4lbuf.flags & VAR_2)
  return 0;
 VAR_8->v4lbuf.flags |= VAR_2;
 VAR_8->v4lbuf.flags &= ~VAR_1;
 FUNC_1(&VAR_7->spinlock, VAR_9);
 FUNC_0(&VAR_8->list, &VAR_7->sio_avail);
 *VAR_6 = VAR_8->v4lbuf;
 FUNC_2(&VAR_7->spinlock, VAR_9);
 return 0;
}
