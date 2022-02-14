
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct service_processor {int dummy; } ;
struct TYPE_2__ {int command_size; int data_size; scalar_t__ status; int type; } ;
struct os_state_command {int* command; int data; TYPE_1__ header; } ;
struct command {scalar_t__ status; scalar_t__ buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct command*) ;
 int FUNC_1 (struct service_processor*,struct command*) ;
 struct command* FUNC_2 (struct service_processor*,int) ;
 int FUNC_3 (struct command*,int ) ;
 int VAR_4 ;

int FUNC_4(struct service_processor *VAR_5, int VAR_6)
{
 struct command *VAR_7;
 struct os_state_command *VAR_8;
 int VAR_9 = 0;

 VAR_7 = FUNC_2(VAR_5, sizeof(struct os_state_command));
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 VAR_8 = (struct os_state_command *)VAR_7->buffer;
 VAR_8->header.type = VAR_4;
 VAR_8->header.command_size = 3;
 VAR_8->header.data_size = 1;
 VAR_8->header.status = 0;
 VAR_8->command[0] = 4;
 VAR_8->command[1] = 3;
 VAR_8->command[2] = 6;
 VAR_8->data = VAR_6;

 FUNC_1(VAR_5, VAR_7);
 FUNC_3(VAR_7, VAR_3);

 if (VAR_7->status != VAR_2)
  VAR_9 = -VAR_0;

 FUNC_0(VAR_7);
 return VAR_9;
}
