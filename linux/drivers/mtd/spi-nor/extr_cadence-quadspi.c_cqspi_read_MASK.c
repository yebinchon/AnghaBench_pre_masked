
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct spi_nor {struct cqspi_flash_pdata* priv; } ;
struct cqspi_flash_pdata {scalar_t__ use_direct_mode; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int FUNC_0 (struct spi_nor*,int *,int ,size_t) ;
 int FUNC_1 (struct spi_nor*,int *,int ,size_t) ;
 int FUNC_2 (struct spi_nor*) ;
 int FUNC_3 (struct spi_nor*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct spi_nor *VAR_0, loff_t VAR_1,
     size_t VAR_2, u_char *VAR_3)
{
 struct cqspi_flash_pdata *VAR_4 = VAR_0->priv;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_0, 1);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_0);
 if (VAR_5)
  return VAR_5;

 if (VAR_4->use_direct_mode)
  VAR_5 = FUNC_0(VAR_0, VAR_3, VAR_1, VAR_2);
 else
  VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 return VAR_2;
}
