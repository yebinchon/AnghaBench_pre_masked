
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_nor {struct aspeed_smc_chip* priv; } ;
struct aspeed_smc_chip {int* ctl_val; int ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct spi_nor *VAR_3)
{
 struct aspeed_smc_chip *VAR_4 = VAR_3->priv;

 u32 VAR_5 = VAR_4->ctl_val[VAR_2];
 u32 VAR_6 = VAR_5 | VAR_1 |
  VAR_0;

 FUNC_0(VAR_6, VAR_4->ctl);
 FUNC_0(VAR_5, VAR_4->ctl);
}
