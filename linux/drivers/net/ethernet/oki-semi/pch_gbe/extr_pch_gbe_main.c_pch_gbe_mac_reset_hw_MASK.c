
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int addr; } ;
struct pch_gbe_hw {TYPE_2__ mac; TYPE_1__* reg; } ;
struct TYPE_3__ {int RESET; int MODE; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct pch_gbe_hw*,int ,int ) ;
 int FUNC_2 (struct pch_gbe_hw*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct pch_gbe_hw *VAR_2)
{

 FUNC_2(VAR_2);
 FUNC_0(VAR_0, &VAR_2->reg->RESET);
 FUNC_0(VAR_1, &VAR_2->reg->MODE);
 FUNC_3(&VAR_2->reg->RESET, VAR_0);

 FUNC_1(VAR_2, VAR_2->mac.addr, 0);
 return;
}
