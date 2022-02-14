
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct stmpe {struct spi_device* client; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (struct spi_device*,int const*,int) ;

__attribute__((used)) static int FUNC_1(struct stmpe *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct spi_device *VAR_3 = VAR_0->client;
 u16 VAR_4 = (VAR_2 << 8) | VAR_1;

 return FUNC_0(VAR_3, (const u8 *)&VAR_4, 2);
}
