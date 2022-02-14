
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {unsigned long max_speed_hz; scalar_t__ chip_select; } ;
struct fsl_qspi {scalar_t__ selected; int clk; } ;


 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (struct fsl_qspi*) ;
 int FUNC_2 (struct fsl_qspi*) ;
 int FUNC_3 (struct fsl_qspi*) ;
 scalar_t__ FUNC_4 (struct fsl_qspi*) ;

__attribute__((used)) static void FUNC_5(struct fsl_qspi *VAR_0, struct spi_device *VAR_1)
{
 unsigned long VAR_2 = VAR_1->max_speed_hz;
 int VAR_3;

 if (VAR_0->selected == VAR_1->chip_select)
  return;

 if (FUNC_4(VAR_0))
  VAR_2 *= 4;

 FUNC_1(VAR_0);

 VAR_3 = FUNC_0(VAR_0->clk, VAR_2);
 if (VAR_3)
  return;

 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3)
  return;

 VAR_0->selected = VAR_1->chip_select;

 FUNC_3(VAR_0);
}
