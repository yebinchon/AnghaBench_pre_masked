
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr2; int len_addr; } ;
typedef TYPE_1__ pxd_t ;
typedef int __u64 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline __u64 FUNC_1(pxd_t *VAR_0)
{
 __u64 VAR_1 = FUNC_0(VAR_0->len_addr) & ~0xffffff;
 return (VAR_1 << 8) + FUNC_0(VAR_0->addr2);
}
