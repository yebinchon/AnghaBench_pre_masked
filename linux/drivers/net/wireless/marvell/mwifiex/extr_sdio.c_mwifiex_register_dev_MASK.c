
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_mmc_card {scalar_t__ fw_dump_enh; int firmware; struct sdio_func* func; int tx_buf_size; struct mwifiex_adapter* adapter; } ;
struct sdio_func {int dummy; } ;
struct mwifiex_adapter {int num_mem_types; int mem_type_mapping_tbl; int fw_name; int tx_buf_size; struct sdio_mmc_card* card; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (struct sdio_func*) ;
 int FUNC_4 (struct sdio_func*,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct mwifiex_adapter *VAR_4)
{
 int VAR_5;
 struct sdio_mmc_card *VAR_6 = VAR_4->card;
 struct sdio_func *VAR_7 = VAR_6->func;


 VAR_6->adapter = VAR_4;
 VAR_4->tx_buf_size = VAR_6->tx_buf_size;

 FUNC_2(VAR_7);


 VAR_5 = FUNC_4(VAR_6->func, VAR_1);
 FUNC_3(VAR_7);
 if (VAR_5) {
  FUNC_1(VAR_4, VAR_0,
       "cannot set SDIO block size\n");
  return VAR_5;
 }

 FUNC_5(VAR_4->fw_name, VAR_6->firmware);
 if (VAR_6->fw_dump_enh) {
  VAR_4->mem_type_mapping_tbl = VAR_2;
  VAR_4->num_mem_types = 1;
 } else {
  VAR_4->mem_type_mapping_tbl = VAR_3;
  VAR_4->num_mem_types = FUNC_0(VAR_3);
 }

 return 0;
}
