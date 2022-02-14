
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fusb300 {scalar_t__ reg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct fusb300 *VAR_2,
       u32 VAR_3)
{
 u32 VAR_4 = FUNC_2(VAR_2->reg + FUNC_1(VAR_3));

 VAR_4 &= ~VAR_0;
 VAR_4 |= FUNC_0(VAR_1);
 FUNC_3(VAR_4, VAR_2->reg + FUNC_1(VAR_3));
}
