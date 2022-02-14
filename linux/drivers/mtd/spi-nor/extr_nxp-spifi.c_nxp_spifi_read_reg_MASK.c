
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_nor {struct nxp_spifi* priv; } ;
struct nxp_spifi {scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct nxp_spifi*) ;
 int FUNC_3 (struct nxp_spifi*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct spi_nor *VAR_4, u8 VAR_5, u8 *VAR_6, int VAR_7)
{
 struct nxp_spifi *VAR_8 = VAR_4->priv;
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_0(VAR_7) |
       FUNC_1(VAR_5) |
       VAR_1 |
       VAR_2;
 FUNC_5(VAR_9, VAR_8->io_base + VAR_0);

 while (VAR_7--)
  *VAR_6++ = FUNC_4(VAR_8->io_base + VAR_3);

 return FUNC_3(VAR_8);
}
