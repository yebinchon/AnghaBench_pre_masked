
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;


 int FUNC_0 (struct spi_device*,int*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_0)
{
 u8 VAR_1 = 0x03;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, &VAR_1, 1);

 if (VAR_2)
  FUNC_1("write spi failed\n");

 return VAR_2;
}
