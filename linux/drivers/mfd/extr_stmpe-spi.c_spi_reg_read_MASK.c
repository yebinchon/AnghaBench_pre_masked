
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stmpe {struct spi_device* client; } ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct spi_device*,int) ;

__attribute__((used)) static int FUNC_1(struct stmpe *VAR_1, u8 VAR_2)
{
 struct spi_device *VAR_3 = VAR_1->client;
 int VAR_4 = FUNC_0(VAR_3, VAR_2 | VAR_0);

 return (VAR_4 < 0) ? VAR_4 : VAR_4 >> 8;
}
