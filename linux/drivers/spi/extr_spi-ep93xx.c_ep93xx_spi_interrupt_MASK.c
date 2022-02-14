
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_master {TYPE_1__* cur_msg; int dev; } ;
struct ep93xx_spi {scalar_t__ mmio; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct spi_master*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct spi_master*) ;
 struct ep93xx_spi* FUNC_4 (struct spi_master*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_9, void *VAR_10)
{
 struct spi_master *VAR_11 = VAR_10;
 struct ep93xx_spi *VAR_12 = FUNC_4(VAR_11);
 u32 VAR_13;





 if (FUNC_2(VAR_12->mmio + VAR_7) & VAR_8) {

  FUNC_5(0, VAR_12->mmio + VAR_6);
  FUNC_0(&VAR_11->dev,
    "receive overrun, aborting the message\n");
  VAR_11->cur_msg->status = -VAR_0;
 } else {




  if (FUNC_1(VAR_11)) {





   return VAR_1;
  }
 }






 VAR_13 = FUNC_2(VAR_12->mmio + VAR_2);
 VAR_13 &= ~(VAR_4 | VAR_5 | VAR_3);
 FUNC_5(VAR_13, VAR_12->mmio + VAR_2);

 FUNC_3(VAR_11);

 return VAR_1;
}
