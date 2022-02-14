
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
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct nxp_spifi*) ;
 int FUNC_3 (struct nxp_spifi*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct spi_nor *VAR_5, u8 VAR_6, u8 *VAR_7, int VAR_8)
{
 struct nxp_spifi *VAR_9 = VAR_5->priv;
 u32 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_10 = VAR_1 |
       FUNC_0(VAR_8) |
       FUNC_1(VAR_6) |
       VAR_2 |
       VAR_3;
 FUNC_5(VAR_10, VAR_9->io_base + VAR_0);

 while (VAR_8--)
  FUNC_4(*VAR_7++, VAR_9->io_base + VAR_4);

 return FUNC_3(VAR_9);
}
