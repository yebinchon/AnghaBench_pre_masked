
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_pgoff; int vm_flags; int * vm_ops; struct stk_sio_buffer* vm_private_data; } ;
struct TYPE_3__ {unsigned long offset; } ;
struct TYPE_4__ {int flags; TYPE_1__ m; } ;
struct stk_sio_buffer {TYPE_2__ v4lbuf; int buffer; } ;
struct stk_camera {unsigned int n_sbufs; struct stk_sio_buffer* sio_bufs; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vm_area_struct*,int ,int ) ;
 int FUNC_1 (struct vm_area_struct*) ;
 int VAR_6 ;
 struct stk_camera* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_7, struct vm_area_struct *VAR_8)
{
 unsigned int VAR_9;
 int VAR_10;
 unsigned long VAR_11 = VAR_8->vm_pgoff << VAR_1;
 struct stk_camera *VAR_12 = FUNC_2(VAR_7);
 struct stk_sio_buffer *VAR_13 = ((void*)0);

 if (!(VAR_8->vm_flags & VAR_5) || !(VAR_8->vm_flags & VAR_4))
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_12->n_sbufs; VAR_9++) {
  if (VAR_12->sio_bufs[VAR_9].v4lbuf.m.offset == VAR_11) {
   VAR_13 = VAR_12->sio_bufs + VAR_9;
   break;
  }
 }
 if (VAR_13 == ((void*)0))
  return -VAR_0;
 VAR_10 = FUNC_0(VAR_8, VAR_13->buffer, 0);
 if (VAR_10)
  return VAR_10;
 VAR_8->vm_flags |= VAR_3;
 VAR_8->vm_private_data = VAR_13;
 VAR_8->vm_ops = &VAR_6;
 VAR_13->v4lbuf.flags |= VAR_2;
 FUNC_1(VAR_8);
 return 0;
}
