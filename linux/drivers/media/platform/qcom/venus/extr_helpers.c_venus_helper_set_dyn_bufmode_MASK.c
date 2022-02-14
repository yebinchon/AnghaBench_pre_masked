
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_inst {int dummy; } ;
struct hfi_buffer_alloc_mode {int type; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct venus_inst*,int const,struct hfi_buffer_alloc_mode*) ;
 int FUNC_1 (struct venus_inst*) ;

int FUNC_2(struct venus_inst *VAR_4)
{
 const u32 VAR_5 = VAR_3;
 struct hfi_buffer_alloc_mode VAR_6;
 int VAR_7;

 if (!FUNC_1(VAR_4))
  return 0;

 VAR_6.type = VAR_1;
 VAR_6.mode = VAR_0;

 VAR_7 = FUNC_0(VAR_4, VAR_5, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_6.type = VAR_2;

 return FUNC_0(VAR_4, VAR_5, &VAR_6);
}
