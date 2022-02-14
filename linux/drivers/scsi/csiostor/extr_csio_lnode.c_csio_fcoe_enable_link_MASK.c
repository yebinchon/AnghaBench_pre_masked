
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct fw_fcoe_link_cmd {int phy_mac; int vnport_wwpn; int vnport_wwnn; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_lnode {scalar_t__ portid; struct csio_hw* hwp; } ;
struct csio_hw {int mb_mempool; TYPE_1__* pport; } ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;
struct TYPE_2__ {scalar_t__ portid; int mac; } ;


 int FUNC_0 (struct csio_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct csio_hw*,char*,char*,scalar_t__) ;
 int FUNC_2 (struct csio_hw*,char*,char*,...) ;
 int FUNC_3 (struct csio_lnode*) ;
 int FUNC_4 (struct csio_lnode*) ;
 int FUNC_5 (struct csio_mb*) ;
 scalar_t__ FUNC_6 (struct csio_hw*,struct csio_mb*) ;
 int FUNC_7 (struct csio_lnode*,struct csio_mb*,int ,scalar_t__,scalar_t__,int ,int ,int ,int *) ;
 int FUNC_8 (int ,int ,int) ;
 struct csio_mb* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct csio_mb*,int ) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_11(struct csio_lnode *VAR_9, bool VAR_10)
{
 struct csio_hw *VAR_11 = VAR_9->hwp;
 struct csio_mb *VAR_12;
 enum fw_retval VAR_13;
 uint8_t VAR_14;
 uint8_t VAR_15;
 struct fw_fcoe_link_cmd *VAR_16;
 int VAR_17;

 VAR_12 = FUNC_9(VAR_11->mb_mempool, VAR_7);
 if (!VAR_12) {
  FUNC_0(VAR_11, VAR_8);
  return -VAR_3;
 }

 VAR_14 = VAR_9->portid;
 VAR_15 = VAR_10 ? VAR_5 : VAR_4;

 FUNC_1(VAR_11, "bringing FCOE LINK %s on Port:%d\n",
   VAR_15 ? "UP" : "DOWN", VAR_14);

 FUNC_7(VAR_9, VAR_12, VAR_1,
       VAR_14, VAR_15, 0, 0, 0, ((void*)0));

 if (FUNC_6(VAR_11, VAR_12)) {
  FUNC_2(VAR_11, "failed to issue FCOE LINK cmd on port[%d]\n",
   VAR_14);
  FUNC_10(VAR_12, VAR_11->mb_mempool);
  return -VAR_2;
 }

 VAR_13 = FUNC_5(VAR_12);
 if (VAR_13 != VAR_6) {
  FUNC_2(VAR_11,
    "FCOE LINK %s cmd on port[%d] failed with "
    "ret:x%x\n", VAR_15 ? "UP" : "DOWN", VAR_14, VAR_13);
  FUNC_10(VAR_12, VAR_11->mb_mempool);
  return -VAR_2;
 }

 if (!VAR_10)
  goto out;

 VAR_16 = (struct fw_fcoe_link_cmd *)VAR_12->mb;

 FUNC_8(FUNC_3(VAR_9), VAR_16->vnport_wwnn, 8);
 FUNC_8(FUNC_4(VAR_9), VAR_16->vnport_wwpn, 8);

 for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++)
  if (VAR_11->pport[VAR_17].portid == VAR_14)
   FUNC_8(VAR_11->pport[VAR_17].mac, VAR_16->phy_mac, 6);

out:
 FUNC_10(VAR_12, VAR_11->mb_mempool);
 return 0;
}
