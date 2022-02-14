
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct sdio_mmc_card {int func; TYPE_1__* reg; int can_dump_fw; } ;
struct mwifiex_adapter {struct sdio_mmc_card* card; } ;
struct memory_type_mapping {size_t* mem_ptr; size_t mem_size; size_t done_flag; int mem_name; } ;
typedef enum rdwr_status { ____Placeholder_rdwr_status } rdwr_status ;
struct TYPE_2__ {unsigned int fw_dump_start; unsigned int fw_dump_end; int fw_dump_ctrl; } ;


 size_t FUNC_0 (struct memory_type_mapping*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct memory_type_mapping* VAR_6 ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_2 (struct mwifiex_adapter*) ;
 int FUNC_3 (struct mwifiex_adapter*,size_t) ;
 int FUNC_4 (struct mwifiex_adapter*,int ,int ) ;
 int FUNC_5 (int ) ;
 size_t FUNC_6 (int ,unsigned int,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (size_t*) ;
 size_t* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct mwifiex_adapter *VAR_7)
{
 struct sdio_mmc_card *VAR_8 = VAR_7->card;
 int VAR_9 = 0;
 unsigned int VAR_10, VAR_11, VAR_12;
 u8 *VAR_13, *VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19 = 0;
 enum rdwr_status VAR_20;
 u32 VAR_21;

 if (!VAR_8->can_dump_fw)
  return;

 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_6); VAR_16++) {
  struct memory_type_mapping *VAR_22 = &VAR_6[VAR_16];

  if (VAR_22->mem_ptr) {
   FUNC_8(VAR_22->mem_ptr);
   VAR_22->mem_ptr = ((void*)0);
  }
  VAR_22->mem_size = 0;
 }

 FUNC_2(VAR_7);
 FUNC_5(VAR_8->func);

 FUNC_1(VAR_7, VAR_3, "== mwifiex firmware dump start ==\n");

 VAR_20 = FUNC_3(VAR_7, VAR_19);
 if (VAR_20 == VAR_5)
  goto done;

 VAR_10 = VAR_8->reg->fw_dump_start;

 VAR_15 = FUNC_6(VAR_8->func, VAR_10, &VAR_9);
 if (VAR_9) {
  FUNC_1(VAR_7, VAR_1, "SDIO read memory length err\n");
  goto done;
 }


 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
  struct memory_type_mapping *VAR_23 = &VAR_6[VAR_16];

  VAR_20 = FUNC_3(VAR_7, VAR_19);
  if (VAR_20 == VAR_5)
   goto done;

  VAR_21 = 0;
  VAR_10 = VAR_8->reg->fw_dump_start;
  for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {
   VAR_18 = FUNC_6(VAR_8->func, VAR_10, &VAR_9);
   if (VAR_9) {
    FUNC_1(VAR_7, VAR_1, "SDIO read err\n");
    goto done;
   }
   VAR_21 |= (VAR_18 << VAR_17*8);
   VAR_10++;
  }

  if (VAR_21 == 0) {
   FUNC_1(VAR_7, VAR_0, "Firmware dump Finished!\n");
   VAR_9 = FUNC_4(VAR_7,
      VAR_8->reg->fw_dump_ctrl,
      VAR_2);
   if (VAR_9) {
    FUNC_1(VAR_7, VAR_1, "SDIO write err\n");
    return;
   }
   break;
  }

  FUNC_1(VAR_7, VAR_0,
       "%s_SIZE=0x%x\n", VAR_23->mem_name, VAR_21);
  VAR_23->mem_ptr = FUNC_9(VAR_21 + 1);
  VAR_23->mem_size = VAR_21;
  if (!VAR_23->mem_ptr) {
   FUNC_1(VAR_7, VAR_1, "Vmalloc %s failed\n",
        VAR_23->mem_name);
   goto done;
  }
  VAR_13 = VAR_23->mem_ptr;
  VAR_14 = VAR_13 + VAR_21;

  VAR_19 = VAR_23->done_flag;
  FUNC_1(VAR_7, VAR_0,
       "Start %s output, please wait...\n",
       VAR_23->mem_name);

  do {
   VAR_20 = FUNC_3(VAR_7, VAR_19);
   if (VAR_20 == VAR_5)
    goto done;

   VAR_11 = VAR_8->reg->fw_dump_start;
   VAR_12 = VAR_8->reg->fw_dump_end;
   for (VAR_10 = VAR_11; VAR_10 <= VAR_12; VAR_10++) {
    *VAR_13 = FUNC_6(VAR_8->func, VAR_10, &VAR_9);
    if (VAR_9) {
     FUNC_1(VAR_7, VAR_1,
          "SDIO read err\n");
     goto done;
    }
    if (VAR_13 < VAR_14)
     VAR_13++;
    else
     FUNC_1(VAR_7, VAR_1,
          "Allocated buf not enough\n");
   }

   if (VAR_20 != VAR_4)
    continue;

   FUNC_1(VAR_7, VAR_0, "%s done: size=0x%tx\n",
        VAR_23->mem_name, VAR_13 - VAR_23->mem_ptr);
   break;
  } while (1);
 }
 FUNC_1(VAR_7, VAR_3, "== mwifiex firmware dump end ==\n");

done:
 FUNC_7(VAR_8->func);
}
