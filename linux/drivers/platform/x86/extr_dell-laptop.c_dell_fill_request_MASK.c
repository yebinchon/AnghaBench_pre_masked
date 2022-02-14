
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct calling_interface_buffer {void** input; } ;


 int FUNC_0 (struct calling_interface_buffer*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct calling_interface_buffer *VAR_0,
          u32 VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 FUNC_0(VAR_0, 0, sizeof(struct calling_interface_buffer));
 VAR_0->input[0] = VAR_1;
 VAR_0->input[1] = VAR_2;
 VAR_0->input[2] = VAR_3;
 VAR_0->input[3] = VAR_4;
}
