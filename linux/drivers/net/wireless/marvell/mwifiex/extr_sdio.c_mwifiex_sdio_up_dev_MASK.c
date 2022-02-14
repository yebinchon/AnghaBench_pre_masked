
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdio_mmc_card {TYPE_1__* reg; int tx_buf_size; int func; } ;
struct mwifiex_adapter {int tx_buf_size; struct sdio_mmc_card* card; } ;
struct TYPE_2__ {int host_int_status_reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct mwifiex_adapter*) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct mwifiex_adapter *VAR_1)
{
 struct sdio_mmc_card *VAR_2 = VAR_1->card;
 u8 VAR_3;

 FUNC_2(VAR_2->func);
 FUNC_3(VAR_2->func);
 FUNC_5(VAR_2->func, VAR_0);
 FUNC_4(VAR_2->func);




 VAR_1->tx_buf_size = VAR_2->tx_buf_size;





 FUNC_1(VAR_1, VAR_2->reg->host_int_status_reg, &VAR_3);

 FUNC_0(VAR_1);
}
