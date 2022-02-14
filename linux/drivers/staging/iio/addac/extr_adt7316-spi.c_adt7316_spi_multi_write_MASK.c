
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct spi_device*,int*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, u8 VAR_3, u8 VAR_4, u8 *VAR_5)
{
 struct spi_device *VAR_6 = VAR_2;
 u8 VAR_7[VAR_0 + 2];
 int VAR_8, VAR_9;

 if (VAR_4 > VAR_0)
  VAR_4 = VAR_0;

 VAR_7[0] = VAR_1;
 VAR_7[1] = VAR_3;
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  VAR_7[VAR_8 + 2] = VAR_5[VAR_8];

 VAR_9 = FUNC_1(VAR_6, VAR_7, VAR_4 + 2);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_6->dev, "SPI write error\n");
  return VAR_9;
 }

 return VAR_9;
}
