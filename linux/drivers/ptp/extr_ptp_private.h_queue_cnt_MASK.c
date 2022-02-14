
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timestamp_event_queue {int tail; int head; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct timestamp_event_queue *VAR_1)
{
 int VAR_2 = VAR_1->tail - VAR_1->head;
 return VAR_2 < 0 ? VAR_0 + VAR_2 : VAR_2;
}
