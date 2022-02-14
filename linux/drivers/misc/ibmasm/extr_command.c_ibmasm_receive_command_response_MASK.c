
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_processor {struct command* current_command; } ;
struct command {int wait; int status; int buffer_size; int buffer; } ;


 int VAR_0 ;
 int FUNC_0 (struct command*) ;
 int FUNC_1 (struct service_processor*) ;
 int FUNC_2 (int ,void*,int ) ;
 int FUNC_3 (size_t,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct service_processor *VAR_1, void *VAR_2, size_t VAR_3)
{
 struct command *VAR_4 = VAR_1->current_command;

 if (!VAR_1->current_command)
  return;

 FUNC_2(VAR_4->buffer, VAR_2, FUNC_3(VAR_3, VAR_4->buffer_size));
 VAR_4->status = VAR_0;
 FUNC_4(&VAR_1->current_command->wait);
 FUNC_0(VAR_1->current_command);
 FUNC_1(VAR_1);
}
