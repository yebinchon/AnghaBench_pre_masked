
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 char const VAR_1 ;
 char const VAR_2 ;
 int FUNC_0 (struct spi_device*,void const*,size_t) ;
 struct spi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, const void *VAR_4, size_t VAR_5)
{
 struct device *VAR_6 = VAR_3;
 struct spi_device *VAR_7 = FUNC_1(VAR_6);
 const char *VAR_8 = VAR_4;

 if (VAR_5 != 4)
  return -VAR_0;


 if (*VAR_8 == VAR_1 || *VAR_8 == VAR_2)
  FUNC_0(VAR_7, VAR_4, VAR_5);

 return FUNC_0(VAR_7, VAR_4, VAR_5);
}
