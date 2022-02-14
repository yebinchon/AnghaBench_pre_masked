
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
typedef int u8 ;
struct spi_nor {int read_opcode; struct aspeed_smc_chip* priv; } ;
struct TYPE_2__ {int read_dummy; } ;
struct aspeed_smc_chip {int ahb_base; TYPE_1__ nor; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
typedef int dummy ;


 int FUNC_0 (int *,int ,size_t) ;
 int FUNC_1 (struct spi_nor*,int ,int ) ;
 int FUNC_2 (struct spi_nor*) ;
 int FUNC_3 (struct spi_nor*) ;
 int FUNC_4 (int ,int*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct spi_nor *VAR_0, loff_t VAR_1,
        size_t VAR_2, u_char *VAR_3)
{
 struct aspeed_smc_chip *VAR_4 = VAR_0->priv;
 int VAR_5;
 u8 VAR_6 = 0xFF;

 FUNC_2(VAR_0);
 FUNC_1(VAR_0, VAR_0->read_opcode, VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_4->nor.read_dummy / 8; VAR_5++)
  FUNC_4(VAR_4->ahb_base, &VAR_6, sizeof(VAR_6));

 FUNC_0(VAR_3, VAR_4->ahb_base, VAR_2);
 FUNC_3(VAR_0);
 return VAR_2;
}
