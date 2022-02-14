
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mpc52xx_spi {int (* state ) (int,struct mpc52xx_spi*,int ,int ) ;int work; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,struct mpc52xx_spi*,int ,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_4, struct mpc52xx_spi *VAR_5)
{
 int VAR_6 = VAR_0;
 u8 VAR_7, VAR_8;

 while (VAR_6 == VAR_0) {


  VAR_7 = FUNC_0(VAR_5->regs + VAR_3);
  VAR_8 = FUNC_0(VAR_5->regs + VAR_2);
  VAR_6 = VAR_5->state(VAR_4, VAR_5, VAR_7, VAR_8);
 }

 if (VAR_6 == VAR_1)
  FUNC_1(&VAR_5->work);
}
