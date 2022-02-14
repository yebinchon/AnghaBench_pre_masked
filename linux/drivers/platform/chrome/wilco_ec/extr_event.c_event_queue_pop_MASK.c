
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_event_queue {size_t tail; int capacity; struct ec_event** entries; } ;
struct ec_event {int dummy; } ;


 scalar_t__ FUNC_0 (struct ec_event_queue*) ;

__attribute__((used)) static struct ec_event *FUNC_1(struct ec_event_queue *VAR_0)
{
 struct ec_event *VAR_1;

 if (FUNC_0(VAR_0))
  return ((void*)0);

 VAR_1 = VAR_0->entries[VAR_0->tail];
 VAR_0->entries[VAR_0->tail] = ((void*)0);
 VAR_0->tail = (VAR_0->tail + 1) % VAR_0->capacity;

 return VAR_1;
}
