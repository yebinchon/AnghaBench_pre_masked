
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct calling_interface_buffer {int * output; void* cmd_select; void* cmd_class; } ;


 int FUNC_0 (struct calling_interface_buffer*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct calling_interface_buffer *VAR_0,
        u16 VAR_1, u16 VAR_2)
{
 int VAR_3;

 VAR_0->cmd_class = VAR_1;
 VAR_0->cmd_select = VAR_2;
 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 != 0)
  return VAR_3;
 return FUNC_1(VAR_0->output[0]);
}
