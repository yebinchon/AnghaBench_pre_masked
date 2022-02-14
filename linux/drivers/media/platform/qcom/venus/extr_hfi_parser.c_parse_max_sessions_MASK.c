
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_core {int max_sessions_supported; } ;
struct hfi_max_sessions_supported {int max_sessions; } ;



__attribute__((used)) static void FUNC_0(struct venus_core *VAR_0, const void *VAR_1)
{
 const struct hfi_max_sessions_supported *VAR_2 = VAR_1;

 VAR_0->max_sessions_supported = VAR_2->max_sessions;
}
