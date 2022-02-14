
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_request_object_ops {int release; } ;
struct media_request_object {int list; void* priv; struct media_request_object_ops const* ops; struct media_request* req; } ;
struct media_request {scalar_t__ state; int lock; int num_incomplete_objects; int objects; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct media_request *VAR_3,
         const struct media_request_object_ops *VAR_4,
         void *VAR_5, bool VAR_6,
         struct media_request_object *VAR_7)
{
 unsigned long VAR_8;
 int VAR_9 = -VAR_1;

 if (FUNC_0(!VAR_4->release))
  return -VAR_0;

 FUNC_3(&VAR_3->lock, VAR_8);

 if (FUNC_0(VAR_3->state != VAR_2))
  goto unlock;

 VAR_7->req = VAR_3;
 VAR_7->ops = VAR_4;
 VAR_7->priv = VAR_5;

 if (VAR_6)
  FUNC_2(&VAR_7->list, &VAR_3->objects);
 else
  FUNC_1(&VAR_7->list, &VAR_3->objects);
 VAR_3->num_incomplete_objects++;
 VAR_9 = 0;

unlock:
 FUNC_4(&VAR_3->lock, VAR_8);
 return VAR_9;
}
