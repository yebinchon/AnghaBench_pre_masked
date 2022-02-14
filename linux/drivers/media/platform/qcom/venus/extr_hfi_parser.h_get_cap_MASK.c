
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct venus_inst {int session_type; int hfi_codec; struct venus_core* core; } ;
struct venus_core {int dummy; } ;
struct venus_caps {unsigned int num_caps; struct hfi_capability* caps; } ;
struct hfi_capability {scalar_t__ capability_type; scalar_t__ min; scalar_t__ max; scalar_t__ step_size; } ;





 struct venus_caps* FUNC_0 (struct venus_core*,int ,int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct venus_inst *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct venus_core *VAR_3 = VAR_0->core;
 struct hfi_capability *VAR_4 = ((void*)0);
 struct venus_caps *VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_0(VAR_3, VAR_0->hfi_codec, VAR_0->session_type);
 if (!VAR_5)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_caps; VAR_6++) {
  if (VAR_5->caps[VAR_6].capability_type == VAR_1) {
   VAR_4 = &VAR_5->caps[VAR_6];
   break;
  }
 }

 if (!VAR_4)
  return 0;

 switch (VAR_2) {
 case 129:
  return VAR_4->min;
 case 130:
  return VAR_4->max;
 case 128:
  return VAR_4->step_size;
 default:
  break;
 }

 return 0;
}
