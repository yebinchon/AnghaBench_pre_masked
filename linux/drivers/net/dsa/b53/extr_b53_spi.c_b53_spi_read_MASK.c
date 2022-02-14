
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct b53_device {struct spi_device* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct spi_device*,int ) ;
 int FUNC_1 (struct spi_device*,int ) ;
 int FUNC_2 (struct spi_device*,int ,int *,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct b53_device *VAR_1, u8 VAR_2, u8 VAR_3, u8 *VAR_4,
   unsigned int VAR_5)
{
 struct spi_device *VAR_6 = VAR_1->priv;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_3);
 if (VAR_7)
  return VAR_7;

 return FUNC_2(VAR_6, VAR_0, VAR_4, VAR_5);
}
