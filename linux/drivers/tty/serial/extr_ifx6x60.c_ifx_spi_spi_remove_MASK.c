
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dummy; } ;
struct TYPE_2__ {int reset_out; int po; int reset; int mrdy; int srdy; } ;
struct ifx_spi_device {TYPE_1__ gpio; int io_work_tasklet; } ;


 int FUNC_0 (int ,struct ifx_spi_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ifx_spi_device*) ;
 int * VAR_0 ;
 struct ifx_spi_device* FUNC_4 (struct spi_device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_1)
{
 struct ifx_spi_device *VAR_2 = FUNC_4(VAR_1);

 FUNC_5(&VAR_2->io_work_tasklet);

 FUNC_0(FUNC_2(VAR_2->gpio.reset_out), VAR_2);
 FUNC_0(FUNC_2(VAR_2->gpio.srdy), VAR_2);

 FUNC_1(VAR_2->gpio.srdy);
 FUNC_1(VAR_2->gpio.mrdy);
 FUNC_1(VAR_2->gpio.reset);
 FUNC_1(VAR_2->gpio.po);
 FUNC_1(VAR_2->gpio.reset_out);


 FUNC_3(VAR_2);

 VAR_0 = ((void*)0);
 return 0;
}
