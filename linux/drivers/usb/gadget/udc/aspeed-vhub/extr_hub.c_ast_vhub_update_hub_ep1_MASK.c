
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ast_vhub {scalar_t__ regs; TYPE_1__* ports; } ;
struct TYPE_2__ {scalar_t__ change; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ast_vhub *VAR_1,
        unsigned int VAR_2)
{

 u32 VAR_3 = FUNC_0(VAR_1->regs + VAR_0);
 u32 VAR_4 = (1 << (VAR_2 + 1));
 if (VAR_1->ports[VAR_2].change)
  VAR_3 |= VAR_4;
 else
  VAR_3 &= ~VAR_4;
 FUNC_1(VAR_3, VAR_1->regs + VAR_0);
}
