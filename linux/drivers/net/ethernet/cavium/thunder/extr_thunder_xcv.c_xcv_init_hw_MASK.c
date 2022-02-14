
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ reg_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 TYPE_1__* VAR_7 ;

void FUNC_3(void)
{
 u64 VAR_8;


 VAR_8 = FUNC_1(VAR_7->reg_base + VAR_6);
 VAR_8 &= ~VAR_3;
 FUNC_2(VAR_8, VAR_7->reg_base + VAR_6);


 VAR_8 = FUNC_1(VAR_7->reg_base + VAR_6);
 VAR_8 &= ~VAR_1;
 FUNC_2(VAR_8, VAR_7->reg_base + VAR_6);

 FUNC_0(1);




 VAR_8 = FUNC_1(VAR_7->reg_base + VAR_5);
 VAR_8 &= ~0xFF03;
 VAR_8 |= VAR_0;
 FUNC_2(VAR_8, VAR_7->reg_base + VAR_5);




 VAR_8 = FUNC_1(VAR_7->reg_base + VAR_6);
 VAR_8 |= VAR_2;
 FUNC_2(VAR_8, VAR_7->reg_base + VAR_6);
 FUNC_1(VAR_7->reg_base + VAR_6);

 FUNC_0(10);


 VAR_8 = FUNC_1(VAR_7->reg_base + VAR_6);
 VAR_8 |= VAR_4;
 FUNC_2(VAR_8, VAR_7->reg_base + VAR_6);

 VAR_8 = FUNC_1(VAR_7->reg_base + VAR_6);
 VAR_8 |= VAR_1;
 FUNC_2(VAR_8, VAR_7->reg_base + VAR_6);
}
