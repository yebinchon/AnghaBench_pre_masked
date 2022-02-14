
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_match_table; int name; } ;
struct spi_driver {TYPE_1__ driver; int probe; int remove; } ;
struct s5c73m3 {struct spi_driver spidrv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct spi_driver*) ;

int FUNC_1(struct s5c73m3 *VAR_4)
{
 struct spi_driver *VAR_5 = &VAR_4->spidrv;

 VAR_5->remove = VAR_3;
 VAR_5->probe = VAR_2;
 VAR_5->driver.name = VAR_0;
 VAR_5->driver.of_match_table = VAR_1;

 return FUNC_0(VAR_5);
}
