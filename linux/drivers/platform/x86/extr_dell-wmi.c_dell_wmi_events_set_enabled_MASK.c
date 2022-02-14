
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct calling_interface_buffer {int* input; int* output; int cmd_select; int cmd_class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct calling_interface_buffer*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct calling_interface_buffer*) ;
 struct calling_interface_buffer* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(bool VAR_4)
{
 struct calling_interface_buffer *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(sizeof(struct calling_interface_buffer), VAR_2);
 if (!VAR_5)
  return -VAR_1;
 VAR_5->cmd_class = VAR_0;
 VAR_5->cmd_select = VAR_3;
 VAR_5->input[0] = 0x10000;
 VAR_5->input[1] = 0x51534554;
 VAR_5->input[3] = VAR_4;
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 == 0)
  VAR_6 = VAR_5->output[0];
 FUNC_2(VAR_5);

 return FUNC_1(VAR_6);
}
