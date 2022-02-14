
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_event_queue {size_t head; size_t tail; scalar_t__* entries; } ;



__attribute__((used)) static inline bool FUNC_0(struct ec_event_queue *VAR_0)
{

 return VAR_0->head == VAR_0->tail && VAR_0->entries[VAR_0->head];
}
