
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct tb10x_pinctrl {int base; TYPE_1__* ports; } ;
struct TYPE_2__ {unsigned int mode; scalar_t__ count; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static inline void FUNC_3(struct tb10x_pinctrl *VAR_1,
    unsigned int VAR_2, unsigned int VAR_3)
{
 u32 VAR_4;

 if (VAR_1->ports[VAR_2].count)
  return;

 VAR_1->ports[VAR_2].mode = VAR_3;

 VAR_4 = FUNC_1(VAR_1->base) & ~(FUNC_0(VAR_2));
 VAR_4 |= (VAR_3 << (VAR_0 * VAR_2)) & FUNC_0(VAR_2);
 FUNC_2(VAR_4, VAR_1->base);
}
