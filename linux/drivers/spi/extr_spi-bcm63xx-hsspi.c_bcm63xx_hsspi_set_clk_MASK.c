
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {unsigned int chip_select; int mode; } ;
struct bcm63xx_hsspi {int speed_hz; int bus_mutex; scalar_t__ regs; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct bcm63xx_hsspi *VAR_6,
      struct spi_device *VAR_7, int VAR_8)
{
 unsigned int VAR_9 = VAR_7->chip_select;
 u32 VAR_10;

 VAR_10 = FUNC_0(2048, FUNC_0(VAR_6->speed_hz, VAR_8));
 FUNC_4(VAR_0 | VAR_10,
       VAR_6->regs + FUNC_1(VAR_9));

 VAR_10 = FUNC_3(VAR_6->regs + FUNC_2(VAR_9));
 if (VAR_8 > VAR_3)
  VAR_10 |= VAR_4;
 else
  VAR_10 &= ~VAR_4;
 FUNC_4(VAR_10, VAR_6->regs + FUNC_2(VAR_9));

 FUNC_5(&VAR_6->bus_mutex);

 VAR_10 = FUNC_3(VAR_6->regs + VAR_2);
 VAR_10 &= ~VAR_1;
 if (VAR_7->mode & VAR_5)
  VAR_10 |= VAR_1;
 FUNC_4(VAR_10, VAR_6->regs + VAR_2);
 FUNC_6(&VAR_6->bus_mutex);
}
