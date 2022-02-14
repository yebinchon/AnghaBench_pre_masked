
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int unack_srdy_int_nb; } ;
struct ifx_spi_device {TYPE_1__ gpio; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct ifx_spi_device*) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct ifx_spi_device *VAR_3 = VAR_2;
 VAR_3->gpio.unack_srdy_int_nb++;
 FUNC_0(VAR_3);
 return VAR_0;
}
