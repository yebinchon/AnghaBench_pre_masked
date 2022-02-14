
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct remote_event {int fired; scalar_t__ armed; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void
FUNC_1(wait_queue_head_t *VAR_0, struct remote_event *VAR_1)
{
 VAR_1->fired = 1;
 VAR_1->armed = 0;
 FUNC_0(VAR_0);
}
