
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_ejtag_fdc_tty {scalar_t__ cpu; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mips_ejtag_fdc_tty*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct mips_ejtag_fdc_tty *VAR_5 = VAR_4;
 if (FUNC_2() != VAR_5->cpu)
  return VAR_2;


 if (!(FUNC_1() & VAR_0))
  return VAR_2;

 FUNC_0(VAR_5);
 return VAR_1;
}
