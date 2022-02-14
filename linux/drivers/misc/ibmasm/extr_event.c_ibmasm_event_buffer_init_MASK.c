
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_processor {struct event_buffer* event_buffer; } ;
struct ibmasm_event {scalar_t__ serial_number; } ;
struct event_buffer {int next_serial_number; int readers; struct ibmasm_event* events; scalar_t__ next_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct event_buffer* FUNC_1 (int,int ) ;

int FUNC_2(struct service_processor *VAR_3)
{
 struct event_buffer *VAR_4;
 struct ibmasm_event *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(sizeof(struct event_buffer), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->next_index = 0;
 VAR_4->next_serial_number = 1;

 VAR_5 = VAR_4->events;
 for (VAR_6=0; VAR_6<VAR_2; VAR_6++, VAR_5++)
  VAR_5->serial_number = 0;

 FUNC_0(&VAR_4->readers);

 VAR_3->event_buffer = VAR_4;

 return 0;
}
