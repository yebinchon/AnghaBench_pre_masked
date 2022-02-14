
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_common {int state; int lock; scalar_t__ thread_task; void* exception_arg; int ep0_req_tag; int exception_req_tag; } ;
typedef enum fsg_state { ____Placeholder_fsg_state } fsg_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct fsg_common *VAR_2, enum fsg_state VAR_3,
         void *VAR_4)
{
 unsigned long VAR_5;






 FUNC_1(&VAR_2->lock, VAR_5);
 if (VAR_2->state <= VAR_3) {
  VAR_2->exception_req_tag = VAR_2->ep0_req_tag;
  VAR_2->state = VAR_3;
  VAR_2->exception_arg = VAR_4;
  if (VAR_2->thread_task)
   FUNC_0(VAR_1, VAR_0,
          VAR_2->thread_task);
 }
 FUNC_2(&VAR_2->lock, VAR_5);
}
