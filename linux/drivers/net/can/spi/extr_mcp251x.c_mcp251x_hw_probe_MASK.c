
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct spi_device*) ;
 int FUNC_2 (struct spi_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_3 = FUNC_2(VAR_2, VAR_0);

 FUNC_0(&VAR_2->dev, "CANCTRL 0x%02x\n", VAR_3);


 if ((VAR_3 & 0x17) != 0x07)
  return -VAR_1;

 return 0;
}
