
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor {struct aspeed_smc_chip* priv; } ;
struct aspeed_smc_chip {int ahb_base; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct spi_nor*) ;
 int FUNC_2 (struct spi_nor*) ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct spi_nor *VAR_0, u8 VAR_1, u8 *VAR_2, int VAR_3)
{
 struct aspeed_smc_chip *VAR_4 = VAR_0->priv;

 FUNC_1(VAR_0);
 FUNC_3(VAR_4->ahb_base, &VAR_1, 1);
 FUNC_0(VAR_2, VAR_4->ahb_base, VAR_3);
 FUNC_2(VAR_0);
 return 0;
}
