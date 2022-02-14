
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_qspi {scalar_t__ regs; int mr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct atmel_qspi *VAR_5)
{

 FUNC_0(VAR_2, VAR_5->regs + VAR_0);


 FUNC_0(VAR_4, VAR_5->regs + VAR_3);
 VAR_5->mr = VAR_4;


 FUNC_0(VAR_1, VAR_5->regs + VAR_0);
}
