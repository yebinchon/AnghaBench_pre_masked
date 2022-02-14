
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmphw_ctrl {scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mmphw_ctrl *VAR_2)
{
 u32 VAR_3, VAR_4;





 VAR_3 = FUNC_2(VAR_2->reg_base + VAR_0);
 VAR_3 |= 0xfff0;
 FUNC_3(VAR_3, VAR_2->reg_base + VAR_0);



 VAR_4 = FUNC_1(0) | FUNC_0(0) |
     FUNC_1(1) | FUNC_0(1);
 VAR_3 = FUNC_2(VAR_2->reg_base + VAR_1);
 VAR_3 &= ~VAR_4;
 VAR_3 |= VAR_4;
 FUNC_3(VAR_3, VAR_2->reg_base + VAR_1);
}
