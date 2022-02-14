
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct calling_interface_token {int location; } ;
struct calling_interface_buffer {int dummy; } ;
struct TYPE_4__ {int* output; int * input; int cmd_select; int cmd_class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 struct calling_interface_token* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static bool FUNC_3(void)
{
 struct calling_interface_token *VAR_4;


 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4)
  return 0;





 VAR_3->cmd_class = VAR_0;
 VAR_3->cmd_select = VAR_1;
 FUNC_2(VAR_3, 0, sizeof(struct calling_interface_buffer));
 VAR_3->input[0] = VAR_4->location;
 VAR_3->output[0] = 99;
 FUNC_1(VAR_3);
 if (VAR_3->output[0] == 99)
  return 1;

 return 0;
}
