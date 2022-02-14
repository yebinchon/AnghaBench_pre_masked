
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_master {int dummy; } ;
struct gb_spilib {int parent; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* unprepare_transfer_hardware ) (int ) ;} ;


 struct gb_spilib* FUNC_0 (struct spi_master*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct spi_master *VAR_0)
{
 struct gb_spilib *VAR_1 = FUNC_0(VAR_0);

 VAR_1->ops->unprepare_transfer_hardware(VAR_1->parent);

 return 0;
}
