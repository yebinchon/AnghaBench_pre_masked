
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;


 int FUNC_0 (struct spi_device*,int) ;
 int FUNC_1 (struct spi_device*,int,int) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_0, u8 VAR_1, u8 VAR_2)
{
 u8 VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 VAR_3 = VAR_3 & ~VAR_2;
 return FUNC_1(VAR_0, VAR_1, VAR_3);
}
