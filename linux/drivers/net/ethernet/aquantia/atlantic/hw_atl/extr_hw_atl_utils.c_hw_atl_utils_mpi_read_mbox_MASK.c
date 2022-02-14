
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hw_atl_utils_mbox_header {int dummy; } ;
struct aq_hw_s {int mbox_addr; } ;


 int FUNC_0 (struct aq_hw_s*,int ,int *,int) ;

int FUNC_1(struct aq_hw_s *VAR_0,
          struct hw_atl_utils_mbox_header *VAR_1)
{
 return FUNC_0(VAR_0,
          VAR_0->mbox_addr,
          (u32 *)(void *)VAR_1,
          sizeof(*VAR_1) / sizeof(u32));
}
