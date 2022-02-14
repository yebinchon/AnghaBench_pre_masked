
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor {int (* read ) (struct spi_nor*,int ,size_t,int *) ;scalar_t__ spimem; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int FUNC_0 (struct spi_nor*,int ,size_t,int *) ;
 int FUNC_1 (struct spi_nor*,int ,size_t,int *) ;

__attribute__((used)) static ssize_t FUNC_2(struct spi_nor *VAR_0, loff_t VAR_1, size_t VAR_2,
     u8 *VAR_3)
{
 if (VAR_0->spimem)
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

 return VAR_0->read(VAR_0, VAR_1, VAR_2, VAR_3);
}
