
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct spi_nor {struct nxp_spifi* priv; } ;
struct nxp_spifi {scalar_t__ flash_base; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (int *,scalar_t__,size_t) ;
 int FUNC_1 (struct nxp_spifi*) ;

__attribute__((used)) static ssize_t FUNC_2(struct spi_nor *VAR_0, loff_t VAR_1, size_t VAR_2,
         u_char *VAR_3)
{
 struct nxp_spifi *VAR_4 = VAR_0->priv;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_0(VAR_3, VAR_4->flash_base + VAR_1, VAR_2);

 return VAR_2;
}
