
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_tcp_queue {scalar_t__ state; int state_lock; int release_work; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nvmet_tcp_queue *VAR_1)
{
 FUNC_1(&VAR_1->state_lock);
 if (VAR_1->state != VAR_0) {
  VAR_1->state = VAR_0;
  FUNC_0(&VAR_1->release_work);
 }
 FUNC_2(&VAR_1->state_lock);
}
