
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct spi_device*,int,int*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_3, u8 VAR_4)
{
 u8 VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_4, &VAR_5, 1);
 if (VAR_7)
  return VAR_7;

 for (VAR_6 = 0; VAR_6 < 10; VAR_6++) {
  VAR_7 = FUNC_0(VAR_3, VAR_1, &VAR_5, 1);
  if (VAR_7)
   return VAR_7;

  if (VAR_5 & VAR_0)
   break;

  FUNC_1(1);
 }

 if (VAR_6 == 10)
  return -VAR_2;

 return 0;
}
