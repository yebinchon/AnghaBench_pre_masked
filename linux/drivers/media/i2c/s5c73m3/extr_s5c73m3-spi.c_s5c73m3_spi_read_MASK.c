
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct spi_device {int dummy; } ;
struct s5c73m3 {struct spi_device* spi_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct spi_device*,void*,unsigned int const,int ) ;

int FUNC_1(struct s5c73m3 *VAR_1, void *VAR_2,
       const unsigned int VAR_3, const unsigned int VAR_4)
{
 struct spi_device *VAR_5 = VAR_1->spi_dev;
 u32 VAR_6 = VAR_3 / VAR_4;
 u32 VAR_7 = VAR_3 % VAR_4;
 unsigned int VAR_8, VAR_9 = 0;
 int VAR_10 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_10 = FUNC_0(VAR_5, VAR_2 + VAR_9, VAR_4, VAR_0);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_9 += VAR_4;
 }

 if (VAR_7 > 0)
  return FUNC_0(VAR_5, VAR_2 + VAR_9, VAR_7, VAR_0);

 return 0;
}
