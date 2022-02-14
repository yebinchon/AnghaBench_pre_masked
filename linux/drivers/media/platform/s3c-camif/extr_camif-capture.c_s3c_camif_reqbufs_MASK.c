
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {scalar_t__ count; } ;
struct file {int dummy; } ;
struct camif_vp {void* owner; scalar_t__ reqbufs_count; int vb_queue; int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,int ,scalar_t__,void*,void*) ;
 int VAR_3 ;
 int FUNC_2 (int *,struct v4l2_requestbuffers*) ;
 struct camif_vp* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4, void *VAR_5,
        struct v4l2_requestbuffers *VAR_6)
{
 struct camif_vp *VAR_7 = FUNC_3(VAR_4);
 int VAR_8;

 FUNC_1("[vp%d] rb count: %d, owner: %p, priv: %p\n",
   VAR_7->id, VAR_6->count, VAR_7->owner, VAR_5);

 if (VAR_7->owner && VAR_7->owner != VAR_5)
  return -VAR_1;

 if (VAR_6->count)
  VAR_6->count = FUNC_0(VAR_3, VAR_0, VAR_6->count);
 else
  VAR_7->owner = ((void*)0);

 VAR_8 = FUNC_2(&VAR_7->vb_queue, VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_6->count && VAR_6->count < VAR_0) {
  VAR_6->count = 0;
  FUNC_2(&VAR_7->vb_queue, VAR_6);
  VAR_8 = -VAR_2;
 }

 VAR_7->reqbufs_count = VAR_6->count;
 if (VAR_7->owner == ((void*)0) && VAR_6->count > 0)
  VAR_7->owner = VAR_5;

 return VAR_8;
}
