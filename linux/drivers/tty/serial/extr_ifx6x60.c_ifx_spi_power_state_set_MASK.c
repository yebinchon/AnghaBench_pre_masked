
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifx_spi_device {unsigned char power_status; int power_lock; TYPE_1__* spi_dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct ifx_spi_device *VAR_0, unsigned char VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->power_lock, VAR_2);





 if (!VAR_0->power_status)
  FUNC_0(&VAR_0->spi_dev->dev);
 VAR_0->power_status |= VAR_1;

 FUNC_2(&VAR_0->power_lock, VAR_2);
}
