
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int*,void const*,size_t) ;
 int FUNC_1 (struct spi_device*,int*,size_t) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, const void *VAR_2,
          size_t VAR_3)
{
 struct spi_device *VAR_4 = VAR_1;
 u8 VAR_5[3];

 if (VAR_3 > 3)
  return -VAR_0;





 FUNC_0(VAR_5, VAR_2, VAR_3);
 VAR_5[1] |= (1 << 4);

 return FUNC_1(VAR_4, VAR_5, VAR_3);
}
