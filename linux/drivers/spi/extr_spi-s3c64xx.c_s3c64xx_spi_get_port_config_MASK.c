
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s3c64xx_spi_port_config {int dummy; } ;
struct TYPE_3__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ driver_data; } ;


 struct of_device_id* FUNC_0 (int ,scalar_t__) ;
 TYPE_2__* FUNC_1 (struct platform_device*) ;
 int VAR_0 ;

__attribute__((used)) static inline struct s3c64xx_spi_port_config *FUNC_2(
      struct platform_device *VAR_1)
{







 return (struct s3c64xx_spi_port_config *)
    FUNC_1(VAR_1)->driver_data;
}
