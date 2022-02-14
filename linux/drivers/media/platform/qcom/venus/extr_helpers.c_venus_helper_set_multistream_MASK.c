
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_inst {int dummy; } ;
struct hfi_multi_stream {int enable; int buffer_type; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct venus_inst*,int ,struct hfi_multi_stream*) ;

int FUNC_1(struct venus_inst *VAR_3, bool VAR_4,
     bool VAR_5)
{
 struct hfi_multi_stream VAR_6 = {0};
 u32 VAR_7 = VAR_2;
 int VAR_8;

 VAR_6.buffer_type = VAR_0;
 VAR_6.enable = VAR_4;

 VAR_8 = FUNC_0(VAR_3, VAR_7, &VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_6.buffer_type = VAR_1;
 VAR_6.enable = VAR_5;

 return FUNC_0(VAR_3, VAR_7, &VAR_6);
}
