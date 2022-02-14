
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shutdown; int remove; int probe; } ;
struct spi_mem_driver {TYPE_1__ spidrv; } ;
struct module {int dummy; } ;


 int FUNC_0 (struct module*,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(struct spi_mem_driver *VAR_3,
           struct module *VAR_4)
{
 VAR_3->spidrv.probe = VAR_0;
 VAR_3->spidrv.remove = VAR_1;
 VAR_3->spidrv.shutdown = VAR_2;

 return FUNC_0(VAR_4, &VAR_3->spidrv);
}
