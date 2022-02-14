
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct csio_wrm {void* fw_iq_start; void* fw_eq_start; } ;
struct csio_mb {int dummy; } ;
struct TYPE_3__ {void* cclk; } ;
struct csio_hw {int port_vec; int flags; int num_pports; int mb_mempool; TYPE_2__* pport; void* cfg_neq; void* cfg_niq; TYPE_1__ vpd; int pfn; } ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;
struct TYPE_4__ {int portid; } ;


 int FUNC_0 (void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct csio_hw*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct csio_hw*,char*,int,...) ;
 int FUNC_5 (struct csio_hw*,char*,...) ;
 struct csio_wrm* FUNC_6 (struct csio_hw*) ;
 int FUNC_7 (struct csio_hw*) ;
 scalar_t__ FUNC_8 (struct csio_hw*,struct csio_mb*) ;
 int FUNC_9 (struct csio_hw*,struct csio_mb*,int ,int ,int ,int ,void**,int *,int,int *) ;
 int FUNC_10 (struct csio_hw*,struct csio_mb*,int*,int ,void**) ;
 int VAR_13 ;
 int FUNC_11 (int) ;
 struct csio_mb* FUNC_12 (int ,int ) ;
 int FUNC_13 (struct csio_mb*,int ) ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_14(struct csio_hw *VAR_15)
{
 struct csio_wrm *VAR_16 = FUNC_6(VAR_15);
 struct csio_mb *VAR_17;
 enum fw_retval VAR_18;
 u32 VAR_19[6];
 int VAR_20, VAR_21 = 0;


 for (VAR_20 = 0; VAR_20 < VAR_2; VAR_20++)
  VAR_15->pport[VAR_20].portid = -1;

 VAR_17 = FUNC_12(VAR_15->mb_mempool, VAR_9);
 if (!VAR_17) {
  FUNC_1(VAR_15, VAR_14);
  return -VAR_5;
 }


 VAR_19[0] = FUNC_2(VAR_12);


 VAR_19[1] = FUNC_2(VAR_0);


 VAR_19[2] = FUNC_3(VAR_7);
 VAR_19[3] = FUNC_3(VAR_6);


 VAR_19[4] = FUNC_3(VAR_11);
 VAR_19[5] = FUNC_3(VAR_10);

 FUNC_9(VAR_15, VAR_17, VAR_3, VAR_15->pfn, 0,
         FUNC_0(VAR_19), VAR_19, ((void*)0), 0, ((void*)0));
 if (FUNC_8(VAR_15, VAR_17)) {
  FUNC_5(VAR_15, "Issue of FW_PARAMS_CMD(read) failed!\n");
  FUNC_13(VAR_17, VAR_15->mb_mempool);
  return -VAR_4;
 }

 FUNC_10(VAR_15, VAR_17, &VAR_18,
   FUNC_0(VAR_19), VAR_19);
 if (VAR_18 != VAR_8) {
  FUNC_5(VAR_15, "FW_PARAMS_CMD(read) failed with ret:0x%x!\n",
    VAR_18);
  FUNC_13(VAR_17, VAR_15->mb_mempool);
  return -VAR_4;
 }


 VAR_15->port_vec = VAR_19[0];
 VAR_15->vpd.cclk = VAR_19[1];
 VAR_16->fw_eq_start = VAR_19[2];
 VAR_16->fw_iq_start = VAR_19[4];


 if ((VAR_15->flags & VAR_1) ||
  !FUNC_7(VAR_15)) {
  VAR_15->cfg_niq = VAR_19[5] - VAR_19[4] + 1;
  VAR_15->cfg_neq = VAR_19[3] - VAR_19[2] + 1;
  FUNC_4(VAR_15, "Using fwconfig max niqs %d neqs %d\n",
   VAR_15->cfg_niq, VAR_15->cfg_neq);
 }

 VAR_15->port_vec &= VAR_13;

 VAR_15->num_pports = FUNC_11(VAR_15->port_vec);

 FUNC_4(VAR_15, "Port vector: 0x%x, #ports: %d\n",
      VAR_15->port_vec, VAR_15->num_pports);

 for (VAR_20 = 0; VAR_20 < VAR_15->num_pports; VAR_20++) {
  while ((VAR_15->port_vec & (1 << VAR_21)) == 0)
   VAR_21++;
  VAR_15->pport[VAR_20].portid = VAR_21++;
  FUNC_4(VAR_15, "Found Port:%d\n", VAR_15->pport[VAR_20].portid);
 }
 FUNC_13(VAR_17, VAR_15->mb_mempool);

 return 0;
}
