
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_wdt {scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct s3c2410_wdt *VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = FUNC_0(VAR_3->reg_base + VAR_0);
 VAR_4 &= ~(VAR_1 | VAR_2);
 FUNC_1(VAR_4, VAR_3->reg_base + VAR_0);
}
