
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_event_struct {int dummy; } ;
struct event_pool {int size; struct srp_event_struct* events; } ;



__attribute__((used)) static int FUNC_0(struct event_pool *VAR_0,
    struct srp_event_struct *VAR_1)
{
 int VAR_2 = VAR_1 - VAR_0->events;
 if (VAR_2 < 0 || VAR_2 >= VAR_0->size)
  return 0;
 if (VAR_1 != VAR_0->events + VAR_2)
  return 0;
 return 1;
}
