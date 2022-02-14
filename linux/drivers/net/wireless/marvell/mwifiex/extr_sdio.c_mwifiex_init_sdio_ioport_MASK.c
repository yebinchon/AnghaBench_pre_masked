
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdio_mmc_card {TYPE_1__* reg; scalar_t__ supports_sdio_new_mode; } ;
struct mwifiex_adapter {int ioport; struct sdio_mmc_card* card; } ;
struct TYPE_2__ {int sdio_int_mask; int card_misc_cfg_reg; int host_int_rsr_reg; int io_port_2_reg; int io_port_1_reg; int io_port_0_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*,int) ;
 scalar_t__ FUNC_1 (struct mwifiex_adapter*) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,int*) ;
 int FUNC_3 (struct mwifiex_adapter*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct mwifiex_adapter *VAR_2)
{
 u8 VAR_3;
 struct sdio_mmc_card *VAR_4 = VAR_2->card;

 VAR_2->ioport = 0;

 if (VAR_4->supports_sdio_new_mode) {
  if (FUNC_1(VAR_2))
   return -1;
  goto cont;
 }


 if (!FUNC_2(VAR_2, VAR_4->reg->io_port_0_reg, &VAR_3))
  VAR_2->ioport |= (VAR_3 & 0xff);
 else
  return -1;

 if (!FUNC_2(VAR_2, VAR_4->reg->io_port_1_reg, &VAR_3))
  VAR_2->ioport |= ((VAR_3 & 0xff) << 8);
 else
  return -1;

 if (!FUNC_2(VAR_2, VAR_4->reg->io_port_2_reg, &VAR_3))
  VAR_2->ioport |= ((VAR_3 & 0xff) << 16);
 else
  return -1;
cont:
 FUNC_0(VAR_2, VAR_1,
      "info: SDIO FUNC1 IO port: %#x\n", VAR_2->ioport);


 if (!FUNC_2(VAR_2, VAR_4->reg->host_int_rsr_reg, &VAR_3))
  FUNC_3(VAR_2, VAR_4->reg->host_int_rsr_reg,
      VAR_3 | VAR_4->reg->sdio_int_mask);
 else
  return -1;


 if (!FUNC_2(VAR_2, VAR_4->reg->card_misc_cfg_reg, &VAR_3))
  FUNC_3(VAR_2, VAR_4->reg->card_misc_cfg_reg,
      VAR_3 | VAR_0);
 else
  return -1;

 return 0;
}
