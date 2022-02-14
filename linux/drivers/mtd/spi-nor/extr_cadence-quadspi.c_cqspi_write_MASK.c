
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct spi_nor {struct cqspi_flash_pdata* priv; } ;
struct cqspi_st {scalar_t__ ahb_base; } ;
struct cqspi_flash_pdata {scalar_t__ use_direct_mode; struct cqspi_st* cqspi; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (struct spi_nor*,scalar_t__,int const*,size_t) ;
 int FUNC_1 (struct spi_nor*,int ) ;
 int FUNC_2 (struct cqspi_st*) ;
 int FUNC_3 (struct spi_nor*) ;
 int FUNC_4 (scalar_t__,int const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_5(struct spi_nor *VAR_0, loff_t VAR_1,
      size_t VAR_2, const u_char *VAR_3)
{
 struct cqspi_flash_pdata *VAR_4 = VAR_0->priv;
 struct cqspi_st *VAR_5 = VAR_4->cqspi;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0, 0);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_0);
 if (VAR_6)
  return VAR_6;

 if (VAR_4->use_direct_mode) {
  FUNC_4(VAR_5->ahb_base + VAR_1, VAR_3, VAR_2);
  VAR_6 = FUNC_2(VAR_5);
 } else {
  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2);
 }
 if (VAR_6)
  return VAR_6;

 return VAR_2;
}
