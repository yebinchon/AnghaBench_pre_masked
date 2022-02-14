
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_event_pool {int size; struct ibmvfc_event* events; } ;
struct ibmvfc_event {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct ibmvfc_event_pool *VAR_0,
         struct ibmvfc_event *VAR_1)
{
 int VAR_2 = VAR_1 - VAR_0->events;
 if (VAR_2 < 0 || VAR_2 >= VAR_0->size)
  return 0;
 if (VAR_1 != VAR_0->events + VAR_2)
  return 0;
 return 1;
}
