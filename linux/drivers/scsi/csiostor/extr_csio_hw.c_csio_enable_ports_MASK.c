
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct csio_mb {int dummy; } ;
struct csio_hw {int num_pports; int mb_mempool; TYPE_1__* pport; int pfn; } ;
typedef int fw_port_cap32_t ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;
struct TYPE_2__ {int link_cfg; int portid; } ;


 int FUNC_0 (struct csio_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct csio_hw*,char*,int ,...) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,scalar_t__,int *) ;
 int FUNC_6 (struct csio_mb*) ;
 scalar_t__ FUNC_7 (struct csio_hw*,struct csio_mb*) ;
 int FUNC_8 (struct csio_hw*,struct csio_mb*,int ,int ,int ,int,int*,int*,int,int *) ;
 int FUNC_9 (struct csio_hw*,struct csio_mb*,int ,int ,int,int ,scalar_t__,int *) ;
 int FUNC_10 (struct csio_hw*,struct csio_mb*,int*,int ,int *) ;
 int FUNC_11 (struct csio_hw*,struct csio_mb*,int*,scalar_t__,int *,int *) ;
 struct csio_mb* FUNC_12 (int ,int ) ;
 int FUNC_13 (struct csio_mb*,int ) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_14(struct csio_hw *VAR_11)
{
 struct csio_mb *VAR_12;
 u16 VAR_13 = VAR_5;
 enum fw_retval VAR_14;
 uint8_t VAR_15;
 fw_port_cap32_t VAR_16, VAR_17, VAR_18;
 int VAR_19;

 VAR_12 = FUNC_12(VAR_11->mb_mempool, VAR_9);
 if (!VAR_12) {
  FUNC_0(VAR_11, VAR_10);
  return -VAR_2;
 }

 for (VAR_19 = 0; VAR_19 < VAR_11->num_pports; VAR_19++) {
  VAR_15 = VAR_11->pport[VAR_19].portid;

  if (VAR_13 == VAR_5) {
   u32 VAR_20, VAR_21;

   VAR_20 = (FUNC_1(VAR_6) |
    FUNC_2(VAR_7));
   VAR_21 = 1;

   FUNC_8(VAR_11, VAR_12, VAR_0,
           VAR_11->pfn, 0, 1, &VAR_20, &VAR_21, 1,
           ((void*)0));

   if (FUNC_7(VAR_11, VAR_12)) {
    FUNC_3(VAR_11, "failed to issue FW_PARAMS_CMD(r) port:%d\n",
      VAR_15);
    FUNC_13(VAR_12, VAR_11->mb_mempool);
    return -VAR_1;
   }

   FUNC_10(VAR_11, VAR_12, &VAR_14,
       0, ((void*)0));
   VAR_13 = VAR_14 ? VAR_3 : VAR_4;
  }


  FUNC_9(VAR_11, VAR_12, VAR_0, VAR_15,
        0, 0, VAR_13, ((void*)0));

  if (FUNC_7(VAR_11, VAR_12)) {
   FUNC_3(VAR_11, "failed to issue FW_PORT_CMD(r) port:%d\n",
     VAR_15);
   FUNC_13(VAR_12, VAR_11->mb_mempool);
   return -VAR_1;
  }

  FUNC_11(VAR_11, VAR_12, &VAR_14, VAR_13,
           &VAR_16, &VAR_17);
  if (VAR_14 != VAR_8) {
   FUNC_3(VAR_11, "FW_PORT_CMD(r) port:%d failed: 0x%x\n",
     VAR_15, VAR_14);
   FUNC_13(VAR_12, VAR_11->mb_mempool);
   return -VAR_1;
  }

  FUNC_4(&VAR_11->pport[VAR_19].link_cfg, VAR_16, VAR_17);

  FUNC_5(&VAR_11->pport[VAR_19].link_cfg, VAR_13, &VAR_18);


  FUNC_9(VAR_11, VAR_12, VAR_0, VAR_15,
        1, VAR_18, VAR_13, ((void*)0));

  if (FUNC_7(VAR_11, VAR_12)) {
   FUNC_3(VAR_11, "failed to issue FW_PORT_CMD(w) port:%d\n",
     VAR_15);
   FUNC_13(VAR_12, VAR_11->mb_mempool);
   return -VAR_1;
  }

  VAR_14 = FUNC_6(VAR_12);
  if (VAR_14 != VAR_8) {
   FUNC_3(VAR_11, "FW_PORT_CMD(w) port:%d failed :0x%x\n",
     VAR_15, VAR_14);
   FUNC_13(VAR_12, VAR_11->mb_mempool);
   return -VAR_1;
  }

 }

 FUNC_13(VAR_12, VAR_11->mb_mempool);

 return 0;
}
