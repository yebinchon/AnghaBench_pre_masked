
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct spi_nor {int program_opcode; struct aspeed_smc_chip* priv; } ;
struct aspeed_smc_chip {int ahb_base; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 int FUNC_0 (struct spi_nor*,int ,int ) ;
 int FUNC_1 (struct spi_nor*) ;
 int FUNC_2 (struct spi_nor*) ;
 int FUNC_3 (int ,int const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_4(struct spi_nor *VAR_0, loff_t VAR_1,
         size_t VAR_2, const u_char *VAR_3)
{
 struct aspeed_smc_chip *VAR_4 = VAR_0->priv;

 FUNC_1(VAR_0);
 FUNC_0(VAR_0, VAR_0->program_opcode, VAR_1);
 FUNC_3(VAR_4->ahb_base, VAR_3, VAR_2);
 FUNC_2(VAR_0);
 return VAR_2;
}
