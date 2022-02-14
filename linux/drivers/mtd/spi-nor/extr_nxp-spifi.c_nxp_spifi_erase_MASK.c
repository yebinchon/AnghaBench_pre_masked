
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_nor {int erase_opcode; struct nxp_spifi* priv; } ;
struct TYPE_2__ {scalar_t__ addr_width; } ;
struct nxp_spifi {scalar_t__ io_base; TYPE_1__ nor; } ;
typedef int loff_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nxp_spifi*) ;
 int FUNC_3 (struct nxp_spifi*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct spi_nor *VAR_3, loff_t VAR_4)
{
 struct nxp_spifi *VAR_5 = VAR_3->priv;
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_4(VAR_4, VAR_5->io_base + VAR_0);

 VAR_6 = VAR_2 |
       FUNC_1(VAR_3->erase_opcode) |
       FUNC_0(VAR_5->nor.addr_width + 1);
 FUNC_4(VAR_6, VAR_5->io_base + VAR_1);

 return FUNC_3(VAR_5);
}
