
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct remote_event {scalar_t__ armed; scalar_t__ fired; } ;


 int FUNC_0 (int *,struct remote_event*) ;

__attribute__((used)) static inline void
FUNC_1(wait_queue_head_t *VAR_0, struct remote_event *VAR_1)
{
 if (VAR_1->fired && VAR_1->armed)
  FUNC_0(VAR_0, VAR_1);
}
