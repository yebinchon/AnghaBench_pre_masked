
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int buf; int len_arr; int skb_arr; } ;
struct TYPE_3__ {int buf; } ;
struct sdio_mmc_card {TYPE_2__ mpa_rx; TYPE_1__ mpa_tx; int mp_regs; int work; } ;
struct mwifiex_adapter {struct sdio_mmc_card* card; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mwifiex_adapter *VAR_0)
{
 struct sdio_mmc_card *VAR_1 = VAR_0->card;

 FUNC_0(&VAR_1->work);

 FUNC_1(VAR_1->mp_regs);
 FUNC_1(VAR_1->mpa_rx.skb_arr);
 FUNC_1(VAR_1->mpa_rx.len_arr);
 FUNC_1(VAR_1->mpa_tx.buf);
 FUNC_1(VAR_1->mpa_rx.buf);
}
