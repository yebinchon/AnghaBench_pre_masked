
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct spi_device {TYPE_1__* controller; } ;
struct TYPE_2__ {int (* set_cs_timing ) (struct spi_device*,int ,int ,int ) ;} ;


 int FUNC_0 (struct spi_device*,int ,int ,int ) ;

void FUNC_1(struct spi_device *VAR_0, u8 VAR_1, u8 VAR_2,
         u8 VAR_3)
{
 if (VAR_0->controller->set_cs_timing)
  VAR_0->controller->set_cs_timing(VAR_0, VAR_1, VAR_2, VAR_3);
}
