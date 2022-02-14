
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_create_buffers {int count; } ;
struct file {int dummy; } ;
struct camif_vp {void* owner; int vb_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct v4l2_create_buffers*) ;
 struct camif_vp* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
     struct v4l2_create_buffers *VAR_4)
{
 struct camif_vp *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 if (VAR_5->owner && VAR_5->owner != VAR_3)
  return -VAR_0;

 VAR_4->count = FUNC_0(VAR_1, 1, VAR_4->count);
 VAR_6 = FUNC_1(&VAR_5->vb_queue, VAR_4);

 if (!VAR_6 && VAR_5->owner == ((void*)0))
  VAR_5->owner = VAR_3;

 return VAR_6;
}
