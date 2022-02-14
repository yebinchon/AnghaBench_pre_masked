
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_inst {int dummy; } ;
struct hfi_framesize {unsigned int width; unsigned int height; int buffer_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct venus_inst*,int ,struct hfi_framesize*) ;

int FUNC_1(struct venus_inst *VAR_1,
           unsigned int VAR_2, unsigned int VAR_3,
           u32 VAR_4)
{
 u32 VAR_5 = VAR_0;
 struct hfi_framesize VAR_6;

 VAR_6.buffer_type = VAR_4;
 VAR_6.width = VAR_2;
 VAR_6.height = VAR_3;

 return FUNC_0(VAR_1, VAR_5, &VAR_6);
}
