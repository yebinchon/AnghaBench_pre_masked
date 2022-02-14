
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct spi_device*,unsigned char*,int,int *,int ) ;
 struct spi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, unsigned char VAR_1,
    unsigned char VAR_2)
{
 struct spi_device *VAR_3 = FUNC_1(VAR_0);
 unsigned char VAR_4[2];


 VAR_4[0] = VAR_1 & 0x0f;
 VAR_4[1] = VAR_2;

 return FUNC_0(VAR_3, VAR_4, 2, ((void*)0), 0);
}
