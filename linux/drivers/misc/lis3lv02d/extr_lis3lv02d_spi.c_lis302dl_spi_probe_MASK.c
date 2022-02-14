
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int of_node; int platform_data; } ;
struct spi_device {int bits_per_word; TYPE_2__ dev; int irq; int mode; } ;
struct TYPE_6__ {int of_node; int pdata; int ac; int irq; int write; int read; int init; struct spi_device* bus_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (struct spi_device*,TYPE_1__*) ;
 int FUNC_4 (struct spi_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_7)
{
 int VAR_8;

 VAR_7->bits_per_word = 8;
 VAR_7->mode = VAR_0;
 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_2.bus_priv = VAR_7;
 VAR_2.init = VAR_3;
 VAR_2.read = VAR_4;
 VAR_2.write = VAR_5;
 VAR_2.irq = VAR_7->irq;
 VAR_2.ac = VAR_6;
 VAR_2.pdata = VAR_7->dev.platform_data;
 FUNC_3(VAR_7, &VAR_2);

 return FUNC_0(&VAR_2);
}
