
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdio_mmc_card {int* mp_regs; TYPE_1__* reg; } ;
struct mwifiex_adapter {int int_status; int int_lock; struct sdio_mmc_card* card; } ;
struct TYPE_2__ {size_t host_int_status_reg; int max_mp_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*,...) ;
 scalar_t__ FUNC_1 (struct mwifiex_adapter*,int*,int ,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct mwifiex_adapter *VAR_4)
{
 struct sdio_mmc_card *VAR_5 = VAR_4->card;
 u8 VAR_6;
 unsigned long VAR_7;

 if (FUNC_1(VAR_4, VAR_5->mp_regs,
       VAR_5->reg->max_mp_regs,
       VAR_3 | VAR_2, 0)) {
  FUNC_0(VAR_4, VAR_0, "read mp_regs failed\n");
  return;
 }

 VAR_6 = VAR_5->mp_regs[VAR_5->reg->host_int_status_reg];
 if (VAR_6) {







  FUNC_0(VAR_4, VAR_1,
       "int: sdio_ireg = %#x\n", VAR_6);
  FUNC_2(&VAR_4->int_lock, VAR_7);
  VAR_4->int_status |= VAR_6;
  FUNC_3(&VAR_4->int_lock, VAR_7);
 }
}
