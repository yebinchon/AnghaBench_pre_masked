
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tango_ir {scalar_t__ rc6_base; scalar_t__ rc5_base; } ;
typedef int irqreturn_t ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct tango_ir*) ;
 int FUNC_3 (struct tango_ir*) ;
 int FUNC_4 (struct tango_ir*) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct tango_ir *VAR_6 = VAR_5;
 unsigned int VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_1(VAR_6->rc5_base + VAR_2);
 FUNC_5(VAR_7, VAR_6->rc5_base + VAR_2);

 VAR_8 = FUNC_1(VAR_6->rc6_base + VAR_3);
 FUNC_5(VAR_8, VAR_6->rc6_base + VAR_3);

 if (!(VAR_7 & 3) && !(VAR_8 & FUNC_0(31)))
  return VAR_1;

 if (VAR_7 & FUNC_0(0))
  FUNC_3(VAR_6);

 if (VAR_7 & FUNC_0(1))
  FUNC_2(VAR_6);

 if (VAR_8 & FUNC_0(31))
  FUNC_4(VAR_6);

 return VAR_0;
}
