
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len_addr; } ;
typedef TYPE_1__ pxd_t ;
typedef int __u32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(pxd_t *VAR_0, __u32 VAR_1)
{
 VAR_0->len_addr = (VAR_0->len_addr & FUNC_0(~0xffffff)) |
   FUNC_0(VAR_1 & 0xffffff);
}
