
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* addr_hi; void* addr_lo; } ;
union bfi_addr_u {TYPE_1__ a32; } ;
typedef int u64 ;
typedef void* u32 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void
FUNC_2(union bfi_addr_u *VAR_0, u64 VAR_1)
{
 VAR_0->a32.addr_lo = (u32) FUNC_0(VAR_1);
 VAR_0->a32.addr_hi = (u32) FUNC_0(FUNC_1(VAR_1));
}
