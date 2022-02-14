
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct spi_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct spi_device*,int*,size_t,int*,size_t) ;
 struct spi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1,
    const void *VAR_2, size_t VAR_3,
    void *VAR_4, size_t VAR_5)
{
 struct device *VAR_6 = VAR_1;
 struct spi_device *VAR_7 = FUNC_1(VAR_6);

 u32 VAR_8 = VAR_0 | (*((u16 *)VAR_2) << 8) | VAR_5 >> 2;

 return FUNC_0(VAR_7, &VAR_8, VAR_3, (u32 *)VAR_4, VAR_5);
}
