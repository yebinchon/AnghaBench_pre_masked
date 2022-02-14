
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdio_mmc_card {int func; } ;
struct mwifiex_adapter {struct sdio_mmc_card* card; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct mwifiex_adapter *VAR_0, u32 VAR_1, u8 *VAR_2)
{
 struct sdio_mmc_card *VAR_3 = VAR_0->card;
 int VAR_4 = -1;
 u8 VAR_5;

 FUNC_0(VAR_3->func);
 VAR_5 = FUNC_1(VAR_3->func, VAR_1, &VAR_4);
 FUNC_2(VAR_3->func);

 *VAR_2 = VAR_5;

 return VAR_4;
}
