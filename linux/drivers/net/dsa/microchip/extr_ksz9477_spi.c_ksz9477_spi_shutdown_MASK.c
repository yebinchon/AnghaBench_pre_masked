
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dummy; } ;
struct ksz_device {TYPE_1__* dev_ops; } ;
struct TYPE_2__ {int (* shutdown ) (struct ksz_device*) ;} ;


 struct ksz_device* FUNC_0 (struct spi_device*) ;
 int FUNC_1 (struct ksz_device*) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_0)
{
 struct ksz_device *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1 && VAR_1->dev_ops->shutdown)
  VAR_1->dev_ops->shutdown(VAR_1);
}
