
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct service_processor {int lock; TYPE_1__* event_buffer; } ;
struct event_reader {int node; int wait; int next_serial_number; } ;
struct TYPE_2__ {int readers; int next_serial_number; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct service_processor *VAR_0, struct event_reader *VAR_1)
{
 unsigned long VAR_2;

 VAR_1->next_serial_number = VAR_0->event_buffer->next_serial_number;
 FUNC_0(&VAR_1->wait);
 FUNC_2(&VAR_0->lock, VAR_2);
 FUNC_1(&VAR_1->node, &VAR_0->event_buffer->readers);
 FUNC_3(&VAR_0->lock, VAR_2);
}
