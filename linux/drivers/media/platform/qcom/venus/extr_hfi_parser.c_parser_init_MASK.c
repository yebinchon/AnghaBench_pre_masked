
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_inst {int session_type; int hfi_codec; int core; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct venus_inst *VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 if (!VAR_0 || !FUNC_0(VAR_0->core))
  return;

 *VAR_1 = VAR_0->hfi_codec;
 *VAR_2 = VAR_0->session_type;
}
