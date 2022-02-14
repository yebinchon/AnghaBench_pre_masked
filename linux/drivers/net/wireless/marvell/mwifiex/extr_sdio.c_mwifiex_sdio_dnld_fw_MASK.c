
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_mmc_card {int func; } ;
struct mwifiex_fw_image {int dummy; } ;
struct mwifiex_adapter {struct sdio_mmc_card* card; } ;


 int FUNC_0 (struct mwifiex_adapter*,struct mwifiex_fw_image*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mwifiex_adapter *VAR_0,
   struct mwifiex_fw_image *VAR_1)
{
 struct sdio_mmc_card *VAR_2 = VAR_0->card;
 int VAR_3;

 FUNC_1(VAR_2->func);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_2->func);

 return VAR_3;
}
