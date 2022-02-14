
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmphw_ctrl {scalar_t__ reg_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct mmphw_ctrl *VAR_5 = (struct mmphw_ctrl *)VAR_4;
 u32 VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_0(VAR_5->reg_base + VAR_2);
 VAR_7 = FUNC_0(VAR_5->reg_base + VAR_1);

 do {

  VAR_8 = FUNC_0(VAR_5->reg_base + VAR_2);
  if (VAR_8 & VAR_6)
   FUNC_1(~VAR_6, VAR_5->reg_base + VAR_2);
 } while ((VAR_6 = FUNC_0(VAR_5->reg_base + VAR_2)) & VAR_7);

 return VAR_0;
}
