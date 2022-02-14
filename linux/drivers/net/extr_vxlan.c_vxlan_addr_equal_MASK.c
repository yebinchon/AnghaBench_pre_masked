
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ s_addr; } ;
struct TYPE_4__ {TYPE_1__ sin_addr; } ;
union vxlan_addr {TYPE_2__ sin; } ;



__attribute__((used)) static inline
bool FUNC_0(const union vxlan_addr *VAR_0, const union vxlan_addr *VAR_1)
{
 return VAR_0->sin.sin_addr.s_addr == VAR_1->sin.sin_addr.s_addr;
}
