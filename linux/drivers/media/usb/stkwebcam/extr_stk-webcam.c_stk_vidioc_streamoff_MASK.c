
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stk_camera {int n_sbufs; int spinlock; TYPE_2__* sio_bufs; int sio_full; int sio_avail; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_3__ {scalar_t__ flags; } ;
struct TYPE_4__ {TYPE_1__ v4lbuf; int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct stk_camera*) ;
 struct stk_camera* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_0,
  void *VAR_1, enum v4l2_buf_type VAR_2)
{
 struct stk_camera *VAR_3 = FUNC_4(VAR_0);
 unsigned long VAR_4;
 int VAR_5;
 FUNC_3(VAR_3);
 FUNC_1(&VAR_3->spinlock, VAR_4);
 FUNC_0(&VAR_3->sio_avail);
 FUNC_0(&VAR_3->sio_full);
 for (VAR_5 = 0; VAR_5 < VAR_3->n_sbufs; VAR_5++) {
  FUNC_0(&VAR_3->sio_bufs[VAR_5].list);
  VAR_3->sio_bufs[VAR_5].v4lbuf.flags = 0;
 }
 FUNC_2(&VAR_3->spinlock, VAR_4);
 return 0;
}
