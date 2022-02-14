
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shutdown; int remove; int probe; int * bus; struct module* owner; } ;
struct spi_driver {TYPE_1__ driver; scalar_t__ shutdown; scalar_t__ remove; scalar_t__ probe; } ;
struct module {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_1(struct module *VAR_4, struct spi_driver *VAR_5)
{
 VAR_5->driver.owner = VAR_4;
 VAR_5->driver.bus = &VAR_0;
 if (VAR_5->probe)
  VAR_5->driver.probe = VAR_1;
 if (VAR_5->remove)
  VAR_5->driver.remove = VAR_2;
 if (VAR_5->shutdown)
  VAR_5->driver.shutdown = VAR_3;
 return FUNC_0(&VAR_5->driver);
}
