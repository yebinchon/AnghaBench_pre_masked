
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct fpga_data {int fw_loaded; } ;


 struct fpga_data* FUNC_0 (struct spi_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_0)
{
 struct fpga_data *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->fw_loaded);

 return 0;
}
