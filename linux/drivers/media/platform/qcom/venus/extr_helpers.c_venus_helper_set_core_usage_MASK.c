
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_inst {int core; } ;
struct hfi_videocores_usage_type {int video_core_enable_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct venus_inst*,int const,struct hfi_videocores_usage_type*) ;

int FUNC_2(struct venus_inst *VAR_1, u32 VAR_2)
{
 const u32 VAR_3 = VAR_0;
 struct hfi_videocores_usage_type VAR_4;

 if (!FUNC_0(VAR_1->core))
  return 0;

 VAR_4.video_core_enable_mask = VAR_2;

 return FUNC_1(VAR_1, VAR_3, &VAR_4);
}
