
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sdio_mmc_card {TYPE_1__* reg; int func; } ;
struct mwifiex_adapter {struct sdio_mmc_card* card; } ;
typedef enum rdwr_status { ____Placeholder_rdwr_status } rdwr_status ;
struct TYPE_2__ {scalar_t__ fw_dump_host_ready; int fw_dump_ctrl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*) ;
 scalar_t__ FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,scalar_t__,int ,int*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static enum
rdwr_status FUNC_4(struct mwifiex_adapter *VAR_7,
           u8 VAR_8)
{
 struct sdio_mmc_card *VAR_9 = VAR_7->card;
 int VAR_10, VAR_11;
 u8 VAR_12 = 0;

 FUNC_2(VAR_9->func, VAR_9->reg->fw_dump_host_ready,
      VAR_9->reg->fw_dump_ctrl, &VAR_10);
 if (VAR_10) {
  FUNC_0(VAR_7, VAR_0, "SDIO Write ERR\n");
  return VAR_4;
 }
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  VAR_12 = FUNC_1(VAR_9->func, VAR_9->reg->fw_dump_ctrl,
           &VAR_10);
  if (VAR_10) {
   FUNC_0(VAR_7, VAR_0, "SDIO read err\n");
   return VAR_4;
  }
  if (VAR_12 == VAR_1)
   break;
  if (VAR_8 && VAR_12 == VAR_8)
   return VAR_3;
  if (VAR_12 != VAR_9->reg->fw_dump_host_ready) {
   FUNC_0(VAR_7, VAR_6,
        "The ctrl reg was changed, re-try again\n");
   FUNC_2(VAR_9->func, VAR_9->reg->fw_dump_host_ready,
        VAR_9->reg->fw_dump_ctrl, &VAR_10);
   if (VAR_10) {
    FUNC_0(VAR_7, VAR_0, "SDIO write err\n");
    return VAR_4;
   }
  }
  FUNC_3(100, 200);
 }
 if (VAR_12 == VAR_9->reg->fw_dump_host_ready) {
  FUNC_0(VAR_7, VAR_0,
       "Fail to pull ctrl_data\n");
  return VAR_4;
 }

 return VAR_5;
}
