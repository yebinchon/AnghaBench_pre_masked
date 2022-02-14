
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct spi_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct spi_device*,unsigned char*,int,unsigned char*,int) ;
 struct spi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 struct spi_device *VAR_3 = FUNC_1(VAR_0);
 u8 VAR_4[1], VAR_5[1];
 int VAR_6, VAR_7;

 VAR_7 = 0;

 for (VAR_6 = 0; VAR_7 == 0 && VAR_6 < VAR_2; VAR_6++) {
  VAR_4[0] = 0x80 | VAR_1[VAR_6];
  VAR_7 = FUNC_0(VAR_3, VAR_4, 1, VAR_5, 1);
  VAR_1[VAR_6] = VAR_5[0];
 }

 return VAR_7;
}
