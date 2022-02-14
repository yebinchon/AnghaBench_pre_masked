
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_request_object {int completed; struct media_request* req; } ;
struct media_request {scalar_t__ state; int lock; int poll_wait; int num_incomplete_objects; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct media_request*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct media_request_object *VAR_2)
{
 struct media_request *VAR_3 = VAR_2->req;
 unsigned long VAR_4;
 bool VAR_5 = 0;

 FUNC_2(&VAR_3->lock, VAR_4);
 if (VAR_2->completed)
  goto unlock;
 VAR_2->completed = 1;
 if (FUNC_0(!VAR_3->num_incomplete_objects) ||
     FUNC_0(VAR_3->state != VAR_1))
  goto unlock;

 if (!--VAR_3->num_incomplete_objects) {
  VAR_3->state = VAR_0;
  FUNC_4(&VAR_3->poll_wait);
  VAR_5 = 1;
 }
unlock:
 FUNC_3(&VAR_3->lock, VAR_4);
 if (VAR_5)
  FUNC_1(VAR_3);
}
