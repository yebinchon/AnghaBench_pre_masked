
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int master; } ;
struct mxic_spi {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 struct mxic_spi* FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_5, bool VAR_6)
{
 struct mxic_spi *VAR_7 = FUNC_1(VAR_5->master);

 if (!VAR_6) {
  FUNC_2(FUNC_0(VAR_7->regs + VAR_0) | VAR_2,
         VAR_7->regs + VAR_0);
  FUNC_2(VAR_4, VAR_7->regs + VAR_3);
  FUNC_2(FUNC_0(VAR_7->regs + VAR_0) | VAR_1,
         VAR_7->regs + VAR_0);
 } else {
  FUNC_2(FUNC_0(VAR_7->regs + VAR_0) & ~VAR_1,
         VAR_7->regs + VAR_0);
  FUNC_2(0, VAR_7->regs + VAR_3);
 }
}
