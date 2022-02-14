
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct eeprom_93xx46_dev {TYPE_1__* pdata; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 struct eeprom_93xx46_dev* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_2)
{
 struct eeprom_93xx46_dev *VAR_3 = FUNC_1(VAR_2);

 if (!(VAR_3->pdata->flags & VAR_0))
  FUNC_0(&VAR_2->dev, &VAR_1);

 return 0;
}
