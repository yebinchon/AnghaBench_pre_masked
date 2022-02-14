
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxa168fb_info {scalar_t__ reg_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct pxa168fb_info *VAR_6 = VAR_5;
 u32 VAR_7 = FUNC_0(VAR_6->reg_base + VAR_3);

 if ((VAR_7 & VAR_0)) {

  FUNC_1(VAR_7 & (~VAR_0),
   VAR_6->reg_base + VAR_3);

  return VAR_1;
 }
 return VAR_2;
}
