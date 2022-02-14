
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct spi_device {int max_speed_hz; struct spi_controller* master; } ;
struct spi_controller {scalar_t__ busy; } ;
struct atmel_qspi {scalar_t__ regs; int scr; int pclk; } ;


 scalar_t__ FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 unsigned long FUNC_2 (int ) ;
 struct atmel_qspi* FUNC_3 (struct spi_controller*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_3)
{
 struct spi_controller *VAR_4 = VAR_3->master;
 struct atmel_qspi *VAR_5 = FUNC_3(VAR_4);
 unsigned long VAR_6;
 u32 VAR_7;

 if (VAR_4->busy)
  return -VAR_0;

 if (!VAR_3->max_speed_hz)
  return -VAR_1;

 VAR_6 = FUNC_2(VAR_5->pclk);
 if (!VAR_6)
  return -VAR_1;


 VAR_7 = FUNC_0(VAR_6, VAR_3->max_speed_hz);
 if (VAR_7 > 0)
  VAR_7--;

 VAR_5->scr = FUNC_1(VAR_7);
 FUNC_4(VAR_5->scr, VAR_5->regs + VAR_2);

 return 0;
}
