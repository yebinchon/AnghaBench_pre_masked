
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct TYPE_2__ {int can_dump_fw; struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {TYPE_1__ pcie; } ;
struct mwifiex_pcie_card_reg {unsigned int fw_dump_start; unsigned int fw_dump_end; int fw_dump_read_done; int fw_dump_ctrl; } ;
struct mwifiex_adapter {size_t num_mem_types; struct memory_type_mapping* mem_type_mapping_tbl; struct pcie_service_card* card; } ;
struct memory_type_mapping {size_t* mem_ptr; size_t mem_size; size_t done_flag; int mem_name; } ;
typedef enum rdwr_status { ____Placeholder_rdwr_status } rdwr_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (size_t*,size_t*,size_t) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_2 (struct mwifiex_adapter*,size_t) ;
 int FUNC_3 (struct mwifiex_adapter*,unsigned int,size_t*) ;
 int FUNC_4 (struct mwifiex_adapter*,int ,int ) ;
 int FUNC_5 (size_t*) ;
 size_t* FUNC_6 (size_t) ;
 size_t* FUNC_7 (size_t) ;

__attribute__((used)) static void FUNC_8(struct mwifiex_adapter *VAR_7)
{
 struct pcie_service_card *VAR_8 = VAR_7->card;
 const struct mwifiex_pcie_card_reg *VAR_9 = VAR_8->pcie.reg;
 unsigned int VAR_10, VAR_11, VAR_12;
 u8 *VAR_13, *VAR_14, *VAR_15, VAR_16, VAR_17;
 u8 VAR_18, VAR_19, VAR_20, VAR_21 = 0;
 enum rdwr_status VAR_22;
 u32 VAR_23;
 int VAR_24;

 if (!VAR_8->pcie.can_dump_fw)
  return;

 for (VAR_18 = 0; VAR_18 < VAR_7->num_mem_types; VAR_18++) {
  struct memory_type_mapping *VAR_25 =
    &VAR_7->mem_type_mapping_tbl[VAR_18];

  if (VAR_25->mem_ptr) {
   FUNC_5(VAR_25->mem_ptr);
   VAR_25->mem_ptr = ((void*)0);
  }
  VAR_25->mem_size = 0;
 }

 FUNC_1(VAR_7, VAR_2, "== mwifiex firmware dump start ==\n");


 VAR_22 = FUNC_2(VAR_7, VAR_21);
 if (VAR_22 == VAR_6)
  return;

 VAR_10 = VAR_9->fw_dump_start;
 FUNC_3(VAR_7, VAR_10, &VAR_16);


 if (VAR_16 == 0)
  VAR_17 = 1;
 else
  VAR_17 = VAR_16;


 for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
  struct memory_type_mapping *VAR_26 =
    &VAR_7->mem_type_mapping_tbl[VAR_18];
  VAR_23 = 0;
  if (VAR_16 != 0) {
   VAR_22 = FUNC_2(VAR_7, VAR_21);
   if (VAR_22 == VAR_6)
    return;

   VAR_10 = VAR_9->fw_dump_start;
   for (VAR_19 = 0; VAR_19 < 4; VAR_19++) {
    FUNC_3(VAR_7, VAR_10, &VAR_20);
    VAR_23 |= (VAR_20 << (VAR_19 * 8));
    VAR_10++;
   }
  } else {
   VAR_23 = VAR_3;
  }

  if (VAR_23 == 0) {
   FUNC_1(VAR_7, VAR_2, "Firmware dump Finished!\n");
   VAR_24 = FUNC_4(VAR_7, VAR_9->fw_dump_ctrl,
      VAR_9->fw_dump_read_done);
   if (VAR_24) {
    FUNC_1(VAR_7, VAR_1, "PCIE write err\n");
    return;
   }
   break;
  }

  FUNC_1(VAR_7, VAR_0,
       "%s_SIZE=0x%x\n", VAR_26->mem_name, VAR_23);
  VAR_26->mem_ptr = FUNC_6(VAR_23 + 1);
  VAR_26->mem_size = VAR_23;
  if (!VAR_26->mem_ptr) {
   FUNC_1(VAR_7, VAR_1,
        "Vmalloc %s failed\n", VAR_26->mem_name);
   return;
  }
  VAR_13 = VAR_26->mem_ptr;
  VAR_14 = VAR_13 + VAR_23;

  VAR_21 = VAR_26->done_flag;
  FUNC_1(VAR_7, VAR_0, "Start %s output, please wait...\n",
       VAR_26->mem_name);

  do {
   VAR_22 = FUNC_2(VAR_7, VAR_21);
   if (VAR_6 == VAR_22)
    return;

   VAR_11 = VAR_9->fw_dump_start;
   VAR_12 = VAR_9->fw_dump_end;
   for (VAR_10 = VAR_11; VAR_10 <= VAR_12; VAR_10++) {
    FUNC_3(VAR_7, VAR_10, VAR_13);
    if (VAR_13 < VAR_14) {
     VAR_13++;
     continue;
    }
    FUNC_1(VAR_7, VAR_1,
         "pre-allocated buf not enough\n");
    VAR_15 =
     FUNC_7(VAR_23 + VAR_4);
    if (!VAR_15)
     return;
    FUNC_0(VAR_15, VAR_26->mem_ptr, VAR_23);
    FUNC_5(VAR_26->mem_ptr);
    VAR_26->mem_ptr = VAR_15;
    VAR_15 = ((void*)0);
    VAR_13 = VAR_26->mem_ptr + VAR_23;
    VAR_23 += VAR_4;
    VAR_14 = VAR_26->mem_ptr + VAR_23;
   }

   if (VAR_22 != VAR_5)
    continue;

   FUNC_1(VAR_7, VAR_0,
        "%s done: size=0x%tx\n",
        VAR_26->mem_name, VAR_13 - VAR_26->mem_ptr);
   break;
  } while (1);
 }
 FUNC_1(VAR_7, VAR_2, "== mwifiex firmware dump end ==\n");
}
