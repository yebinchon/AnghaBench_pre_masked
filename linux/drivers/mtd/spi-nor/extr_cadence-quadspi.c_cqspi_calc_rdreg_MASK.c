
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
struct spi_nor {struct cqspi_flash_pdata* priv; } ;
struct cqspi_flash_pdata {unsigned int inst_width; unsigned int addr_width; unsigned int data_width; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(struct spi_nor *VAR_3, const u8 VAR_4)
{
 struct cqspi_flash_pdata *VAR_5 = VAR_3->priv;
 u32 VAR_6 = 0;

 VAR_6 |= VAR_5->inst_width << VAR_2;
 VAR_6 |= VAR_5->addr_width << VAR_0;
 VAR_6 |= VAR_5->data_width << VAR_1;

 return VAR_6;
}
