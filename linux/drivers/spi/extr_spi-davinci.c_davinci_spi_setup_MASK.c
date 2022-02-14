
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct spi_device {int mode; int chip_select; scalar_t__ cs_gpiod; int master; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct davinci_spi {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct spi_device*) ;
 int FUNC_2 (scalar_t__,int) ;
 struct davinci_spi* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_7)
{
 struct davinci_spi *VAR_8;
 struct device_node *VAR_9 = VAR_7->dev.of_node;
 bool VAR_10 = 1;

 VAR_8 = FUNC_3(VAR_7->master);

 if (!(VAR_7->mode & VAR_5)) {
  if (VAR_9 && VAR_7->cs_gpiod)
   VAR_10 = 0;

  if (VAR_10)
   FUNC_2(VAR_8->base + VAR_2, 1 << VAR_7->chip_select);
 }

 if (VAR_7->mode & VAR_6)
  FUNC_2(VAR_8->base + VAR_2, VAR_3);

 if (VAR_7->mode & VAR_4)
  FUNC_2(VAR_8->base + VAR_0, VAR_1);
 else
  FUNC_0(VAR_8->base + VAR_0, VAR_1);

 return FUNC_1(VAR_7);
}
