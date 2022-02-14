
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct rockchip_typec_phy {scalar_t__ base; } ;
struct TYPE_3__ {int value; scalar_t__ addr; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct rockchip_typec_phy *VAR_5)
{
 u32 VAR_6;


 FUNC_1(VAR_1 | VAR_3 | VAR_2,
        VAR_5->base + VAR_0);


 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++)
  FUNC_1(VAR_4[VAR_6].value, VAR_5->base + VAR_4[VAR_6].addr);
}
