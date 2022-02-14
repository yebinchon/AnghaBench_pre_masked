
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atmel_hlcdc_regmap {scalar_t__ regs; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int,int,int,int) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, unsigned int VAR_4,
     unsigned int VAR_5)
{
 struct atmel_hlcdc_regmap *VAR_6 = VAR_3;

 if (VAR_4 <= VAR_0) {
  u32 VAR_7;

  FUNC_0(VAR_6->regs + VAR_2,
       VAR_7, !(VAR_7 & VAR_1),
       1, 100);
 }

 FUNC_1(VAR_5, VAR_6->regs + VAR_4);

 return 0;
}
