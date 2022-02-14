
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_mmc_card {scalar_t__ fw_dump_enh; } ;
struct mwifiex_adapter {int devdump_data; struct sdio_mmc_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_1 (struct mwifiex_adapter*) ;
 int FUNC_2 (struct mwifiex_adapter*) ;
 int FUNC_3 (struct mwifiex_adapter*) ;
 int FUNC_4 (struct mwifiex_adapter*) ;
 int FUNC_5 (struct mwifiex_adapter*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct mwifiex_adapter *VAR_2)
{
 struct sdio_mmc_card *VAR_3 = VAR_2->card;

 VAR_2->devdump_data = FUNC_6(VAR_1);
 if (!VAR_2->devdump_data) {
  FUNC_0(VAR_2, VAR_0,
       "vzalloc devdump data failure!\n");
  return;
 }

 FUNC_1(VAR_2);
 if (VAR_3->fw_dump_enh)
  FUNC_4(VAR_2);
 else
  FUNC_3(VAR_2);
 FUNC_2(VAR_2);
 FUNC_5(VAR_2);
}
