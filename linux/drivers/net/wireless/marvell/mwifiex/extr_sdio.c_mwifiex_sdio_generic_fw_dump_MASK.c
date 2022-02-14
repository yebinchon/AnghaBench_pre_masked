
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sdio_mmc_card {int func; TYPE_1__* reg; int fw_dump_enh; } ;
struct mwifiex_adapter {struct sdio_mmc_card* card; } ;
struct memory_type_mapping {scalar_t__* mem_ptr; int mem_size; scalar_t__ done_flag; int mem_name; } ;
typedef enum rdwr_status { ____Placeholder_rdwr_status } rdwr_status ;
struct TYPE_2__ {unsigned int fw_dump_start; unsigned int fw_dump_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct memory_type_mapping* VAR_6 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_2 (struct mwifiex_adapter*) ;
 int FUNC_3 (struct mwifiex_adapter*,scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,unsigned int,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (scalar_t__*) ;
 void* FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct mwifiex_adapter *VAR_7)
{
 struct sdio_mmc_card *VAR_8 = VAR_7->card;
 struct memory_type_mapping *VAR_9 = &VAR_6[0];
 unsigned int VAR_10, VAR_11, VAR_12;
 u8 VAR_13 = 0, VAR_14 = 0;
 u8 *VAR_15, *VAR_16;
 enum rdwr_status VAR_17;
 int VAR_18 = -1, VAR_19;

 if (!VAR_8->fw_dump_enh)
  return;

 if (VAR_9->mem_ptr) {
  FUNC_8(VAR_9->mem_ptr);
  VAR_9->mem_ptr = ((void*)0);
 }
 VAR_9->mem_size = 0;

 FUNC_2(VAR_7);
 FUNC_4(VAR_8->func);

 FUNC_1(VAR_7, VAR_3, "== mwifiex firmware dump start ==\n");

 VAR_17 = FUNC_3(VAR_7, VAR_14);
 if (VAR_17 == VAR_5)
  goto done;

 VAR_11 = VAR_8->reg->fw_dump_start;
 VAR_12 = VAR_8->reg->fw_dump_end;
 for (VAR_10 = VAR_11; VAR_10 <= VAR_12; VAR_10++) {
  for (VAR_19 = 0; VAR_19 < VAR_2; VAR_19++) {
   VAR_13 = FUNC_5(VAR_8->func, VAR_10, &VAR_18);
   if (VAR_18) {
    FUNC_1(VAR_7, VAR_1,
         "SDIO read err\n");
    goto done;
   }
   if (VAR_13 == 0)
    break;
   if (VAR_19 == VAR_2) {
    FUNC_1(VAR_7, VAR_1,
         "FW not ready to dump\n");
    VAR_18 = -1;
    goto done;
   }
  }
  FUNC_7(100, 200);
 }

 VAR_9->mem_ptr = FUNC_9(0xf0000 + 1);
 if (!VAR_9->mem_ptr) {
  VAR_18 = -1;
  goto done;
 }
 VAR_15 = VAR_9->mem_ptr;
 VAR_9->mem_size = 0xf0000;
 VAR_16 = VAR_15 + VAR_9->mem_size;

 VAR_14 = VAR_9->done_flag;
 FUNC_1(VAR_7, VAR_0,
      "Start %s output, please wait...\n", VAR_9->mem_name);

 while (1) {
  VAR_17 = FUNC_3(VAR_7, VAR_14);
  if (VAR_17 == VAR_5)
   goto done;
  for (VAR_10 = VAR_11; VAR_10 <= VAR_12; VAR_10++) {
   *VAR_15 = FUNC_5(VAR_8->func, VAR_10, &VAR_18);
   if (VAR_18) {
    FUNC_1(VAR_7, VAR_1,
         "SDIO read err\n");
    goto done;
   }
   VAR_15++;
   if (VAR_15 >= VAR_16) {
    u8 *VAR_20;

    VAR_20 = FUNC_9(VAR_9->mem_size + 0x4000 + 1);
    if (!VAR_20)
     goto done;

    FUNC_0(VAR_20, VAR_9->mem_ptr,
           VAR_9->mem_size);
    FUNC_8(VAR_9->mem_ptr);
    VAR_9->mem_ptr = VAR_20;
    VAR_20 = ((void*)0);
    VAR_15 = VAR_9->mem_ptr + VAR_9->mem_size;
    VAR_9->mem_size += 0x4000;
    VAR_16 = VAR_9->mem_ptr + VAR_9->mem_size;
   }
  }
  if (VAR_17 == VAR_4) {
   VAR_9->mem_size = VAR_15 - VAR_9->mem_ptr;
   FUNC_1(VAR_7, VAR_0, "dump %s done size=0x%x\n",
        VAR_9->mem_name, VAR_9->mem_size);
   VAR_18 = 0;
   break;
  }
 }
 FUNC_1(VAR_7, VAR_3, "== mwifiex firmware dump end ==\n");

done:
 if (VAR_18) {
  FUNC_1(VAR_7, VAR_1, "firmware dump failed\n");
  if (VAR_9->mem_ptr) {
   FUNC_8(VAR_9->mem_ptr);
   VAR_9->mem_ptr = ((void*)0);
  }
  VAR_9->mem_size = 0;
 }
 FUNC_6(VAR_8->func);
}
