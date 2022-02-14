
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct media_request_object {TYPE_1__* ops; int completed; struct media_request* req; int list; } ;
struct media_request {scalar_t__ state; int lock; int poll_wait; int num_incomplete_objects; } ;
struct TYPE_2__ {int (* unbind ) (struct media_request_object*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct media_request*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct media_request_object*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct media_request_object *VAR_4)
{
 struct media_request *VAR_5 = VAR_4->req;
 unsigned long VAR_6;
 bool VAR_7 = 0;

 if (FUNC_0(!VAR_5))
  return;

 FUNC_3(&VAR_5->lock, VAR_6);
 FUNC_1(&VAR_4->list);
 VAR_4->req = ((void*)0);

 if (VAR_5->state == VAR_1)
  goto unlock;

 if (FUNC_0(VAR_5->state == VAR_3))
  goto unlock;

 if (VAR_5->state == VAR_0) {
  if (!VAR_4->completed)
   VAR_5->num_incomplete_objects--;
  goto unlock;
 }

 if (FUNC_0(!VAR_5->num_incomplete_objects))
  goto unlock;

 VAR_5->num_incomplete_objects--;
 if (VAR_5->state == VAR_2 &&
     !VAR_5->num_incomplete_objects) {
  VAR_5->state = VAR_1;
  VAR_7 = 1;
  FUNC_6(&VAR_5->poll_wait);
 }

unlock:
 FUNC_4(&VAR_5->lock, VAR_6);
 if (VAR_4->ops->unbind)
  VAR_4->ops->unbind(VAR_4);
 if (VAR_7)
  FUNC_2(VAR_5);
}
