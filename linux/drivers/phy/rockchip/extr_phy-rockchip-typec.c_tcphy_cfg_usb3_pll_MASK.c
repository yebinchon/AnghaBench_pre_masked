
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct rockchip_typec_phy {scalar_t__ base; } ;
struct TYPE_3__ {scalar_t__ addr; int value; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct rockchip_typec_phy *VAR_1)
{
 u32 VAR_2;


 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  FUNC_1(VAR_0[VAR_2].value,
         VAR_1->base + VAR_0[VAR_2].addr);
}
