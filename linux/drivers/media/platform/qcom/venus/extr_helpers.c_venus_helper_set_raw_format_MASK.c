
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct venus_inst {int dummy; } ;
struct hfi_uncompressed_format_select {void* format; void* buffer_type; } ;


 void* VAR_0 ;
 int FUNC_0 (struct venus_inst*,void* const,struct hfi_uncompressed_format_select*) ;

int FUNC_1(struct venus_inst *VAR_1, u32 VAR_2,
    u32 VAR_3)
{
 const u32 VAR_4 = VAR_0;
 struct hfi_uncompressed_format_select VAR_5;

 VAR_5.buffer_type = VAR_3;
 VAR_5.format = VAR_2;

 return FUNC_0(VAR_1, VAR_4, &VAR_5);
}
