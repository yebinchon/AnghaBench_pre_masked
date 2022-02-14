
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_nor {int addr_width; struct aspeed_smc_chip* priv; } ;
struct aspeed_smc_chip {int ahb_base; } ;
typedef int __be32 ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct spi_nor *VAR_0, u8 VAR_1, u32 VAR_2)
{
 struct aspeed_smc_chip *VAR_3 = VAR_0->priv;
 __be32 VAR_4;
 u32 VAR_5;

 switch (VAR_0->addr_width) {
 default:
  FUNC_0(1, "Unexpected address width %u, defaulting to 3\n",
     VAR_0->addr_width);

 case 3:
  VAR_5 = VAR_2 & 0xFFFFFF;
  VAR_5 |= VAR_1 << 24;

  VAR_4 = FUNC_2(VAR_5);
  FUNC_1(VAR_3->ahb_base, &VAR_4, 4);
  break;
 case 4:
  VAR_4 = FUNC_2(VAR_2);
  FUNC_1(VAR_3->ahb_base, &VAR_1, 1);
  FUNC_1(VAR_3->ahb_base, &VAR_4, 4);
  break;
 }
}
