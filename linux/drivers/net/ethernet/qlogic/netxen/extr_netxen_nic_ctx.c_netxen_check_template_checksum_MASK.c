
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int* md_template; int md_template_size; } ;
struct netxen_adapter {TYPE_1__ mdump; } ;



__attribute__((used)) static u32
FUNC_0(struct netxen_adapter *VAR_0)
{
 u64 VAR_1 = 0 ;
 u32 *VAR_2 = VAR_0->mdump.md_template;
 int VAR_3 = VAR_0->mdump.md_template_size/sizeof(uint32_t) ;

 while (VAR_3-- > 0)
  VAR_1 += *VAR_2++ ;
 while (VAR_1 >> 32)
  VAR_1 = (VAR_1 & 0xFFFFFFFF) + (VAR_1 >> 32) ;

 return ~VAR_1;
}
