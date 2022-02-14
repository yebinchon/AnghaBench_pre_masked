
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct fpga_data {int fw_loaded; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 struct fpga_data* FUNC_2 (int *,int,int ) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int *,int ,struct spi_device*,int ) ;
 int FUNC_5 (struct spi_device*,struct fpga_data*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_6)
{
 struct fpga_data *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(&VAR_6->dev, sizeof(*VAR_7), VAR_3);
 if (!VAR_7) {
  FUNC_0(&VAR_6->dev, "Memory allocation for fpga_data failed\n");
  return -VAR_0;
 }
 FUNC_5(VAR_6, VAR_7);

 FUNC_3(&VAR_7->fw_loaded);
 VAR_8 = FUNC_4(VAR_4, VAR_2,
          VAR_1, &VAR_6->dev,
          VAR_3, VAR_6, VAR_5);
 if (VAR_8) {
  FUNC_0(&VAR_6->dev, "Firmware loading failed with %d!\n", VAR_8);
  return VAR_8;
 }

 FUNC_1(&VAR_6->dev, "FPGA bitstream configuration driver registered\n");

 return 0;
}
