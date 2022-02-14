
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct tape_request {int * callback; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct tape_request *VAR_0, void *VAR_1)
{
 VAR_0->callback = ((void*)0);
 FUNC_0((wait_queue_head_t *) VAR_1);
}
