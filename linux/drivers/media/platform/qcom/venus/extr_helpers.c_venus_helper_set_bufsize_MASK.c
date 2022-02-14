
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct venus_inst {int dummy; } ;
struct hfi_buffer_size_actual {void* size; void* type; } ;


 void* VAR_0 ;
 int FUNC_0 (struct venus_inst*,void* const,struct hfi_buffer_size_actual*) ;

int FUNC_1(struct venus_inst *VAR_1, u32 VAR_2, u32 VAR_3)
{
 const u32 VAR_4 = VAR_0;
 struct hfi_buffer_size_actual VAR_5;

 VAR_5.type = VAR_3;
 VAR_5.size = VAR_2;

 return FUNC_0(VAR_1, VAR_4, &VAR_5);
}
