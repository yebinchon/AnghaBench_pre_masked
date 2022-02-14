
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int session_type; int hfi_codec; struct venus_core* core; } ;
struct venus_core {int dummy; } ;
struct venus_caps {int cap_bufs_mode_dynamic; } ;


 scalar_t__ FUNC_0 (struct venus_core*) ;
 struct venus_caps* FUNC_1 (struct venus_core*,int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct venus_inst *VAR_0)
{
 struct venus_core *VAR_1 = VAR_0->core;
 struct venus_caps *VAR_2;





 if (FUNC_0(VAR_1))
  return 1;

 VAR_2 = FUNC_1(VAR_1, VAR_0->hfi_codec, VAR_0->session_type);
 if (!VAR_2)
  return 0;

 return VAR_2->cap_bufs_mode_dynamic;
}
