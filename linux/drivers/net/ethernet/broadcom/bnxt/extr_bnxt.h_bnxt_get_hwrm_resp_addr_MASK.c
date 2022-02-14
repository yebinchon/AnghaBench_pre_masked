
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input {int dummy; } ;
struct bnxt {void* hwrm_cmd_kong_resp_addr; void* hwrm_cmd_resp_addr; } ;


 scalar_t__ FUNC_0 (struct bnxt*,struct input*) ;

__attribute__((used)) static inline void *FUNC_1(struct bnxt *VAR_0, void *VAR_1)
{
 if (FUNC_0(VAR_0, (struct input *)VAR_1))
  return VAR_0->hwrm_cmd_kong_resp_addr;
 else
  return VAR_0->hwrm_cmd_resp_addr;
}
