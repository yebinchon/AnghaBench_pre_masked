
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int dummy; } ;
struct spi_master {int dev; } ;
struct ep93xx_spi {scalar_t__ fifo_level; scalar_t__ mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 unsigned long VAR_5 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 struct ep93xx_spi* FUNC_3 (struct spi_master*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct spi_master *VAR_6,
          struct spi_message *VAR_7)
{
 struct ep93xx_spi *VAR_8 = FUNC_3(VAR_6);
 unsigned long VAR_9;




 VAR_9 = VAR_5 + FUNC_1(VAR_1);
 while (FUNC_2(VAR_8->mmio + VAR_3) & VAR_4) {
  if (FUNC_4(VAR_5, VAR_9)) {
   FUNC_0(&VAR_6->dev,
     "timeout while flushing RX FIFO\n");
   return -VAR_0;
  }
  FUNC_2(VAR_8->mmio + VAR_2);
 }





 VAR_8->fifo_level = 0;

 return 0;
}
