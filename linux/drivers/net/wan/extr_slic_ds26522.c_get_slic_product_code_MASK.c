
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct spi_device*,int ) ;

__attribute__((used)) static bool FUNC_1(struct spi_device *VAR_1)
{
 u8 VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if ((VAR_2 & 0xf8) == 0x68)
  return 1;
 else
  return 0;
}
