
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int u32 ;
struct TYPE_29__ {int name; } ;
struct TYPE_27__ {TYPE_6__* item; } ;
struct TYPE_25__ {TYPE_4__* item; } ;
struct TYPE_28__ {int cmd_type; TYPE_7__ snmp_set; TYPE_5__ char_set; } ;
struct TYPE_26__ {void* item_code; scalar_t__ item_index; int value; } ;
struct TYPE_24__ {int value; void* item_code; scalar_t__ item_index; } ;
struct TYPE_23__ {scalar_t__ lword; } ;
struct TYPE_22__ {scalar_t__ lword; } ;
struct TYPE_21__ {scalar_t__ lword; } ;
struct TYPE_20__ {int descr_block_phys; TYPE_9__* dev; TYPE_8__* cmd_req_virt; int req_ttrt; int full_duplex_enb; int cons_block_phys; int burst_size; int cons_block_virt; TYPE_3__ rcv_xmt_reg; TYPE_2__ cmd_rsp_reg; TYPE_1__ cmd_req_reg; int reset_type; } ;
typedef int PI_CONSUMER_BLOCK ;
typedef TYPE_10__ DFX_board_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_1 (TYPE_10__*) ;
 scalar_t__ FUNC_2 (TYPE_10__*) ;
 scalar_t__ FUNC_3 (TYPE_10__*) ;
 scalar_t__ FUNC_4 (TYPE_10__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_10__*,int ,int ,int ,int *) ;
 int FUNC_6 (TYPE_10__*,int ,int ) ;
 int FUNC_7 (TYPE_10__*) ;
 scalar_t__ FUNC_8 (TYPE_10__*,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (char*,int ) ;

__attribute__((used)) static int FUNC_11(DFX_board_t *VAR_19, int VAR_20)
 {
 FUNC_0("In dfx_adap_init...\n");



 FUNC_6(VAR_19, VAR_16, VAR_6);



 if (FUNC_4(VAR_19, VAR_19->reset_type) != VAR_1)
  {
  FUNC_10("%s: Could not uninitialize/reset adapter!\n", VAR_19->dev->name);
  return VAR_0;
  }






 FUNC_6(VAR_19, VAR_17, VAR_5);
 VAR_19->cmd_req_reg.lword = 0;
 VAR_19->cmd_rsp_reg.lword = 0;
 VAR_19->rcv_xmt_reg.lword = 0;



 FUNC_9(VAR_19->cons_block_virt, 0, sizeof(PI_CONSUMER_BLOCK));



 if (FUNC_5(VAR_19,
       VAR_14,
       VAR_18,
       VAR_19->burst_size,
       ((void*)0)) != VAR_1)
  {
  FUNC_10("%s: Could not set adapter burst size!\n", VAR_19->dev->name);
  return VAR_0;
  }
 if (FUNC_5(VAR_19,
       VAR_12,
       VAR_19->cons_block_phys,
       0,
       ((void*)0)) != VAR_1)
  {
  FUNC_10("%s: Could not set consumer block address!\n", VAR_19->dev->name);
  return VAR_0;
  }
 if (FUNC_5(VAR_19, VAR_13,
     (u32)(VAR_19->descr_block_phys |
           VAR_15),
     0, ((void*)0)) != VAR_1) {
  FUNC_10("%s: Could not set descriptor block address!\n",
         VAR_19->dev->name);
  return VAR_0;
 }



 VAR_19->cmd_req_virt->cmd_type = VAR_2;
 VAR_19->cmd_req_virt->char_set.item[0].item_code = VAR_10;
 VAR_19->cmd_req_virt->char_set.item[0].value = 3;
 VAR_19->cmd_req_virt->char_set.item[0].item_index = 0;
 VAR_19->cmd_req_virt->char_set.item[1].item_code = VAR_8;
 if (FUNC_3(VAR_19) != VAR_1)
  {
  FUNC_10("%s: DMA command request failed!\n", VAR_19->dev->name);
  return VAR_0;
  }



 VAR_19->cmd_req_virt->cmd_type = VAR_3;
 VAR_19->cmd_req_virt->snmp_set.item[0].item_code = VAR_9;
 VAR_19->cmd_req_virt->snmp_set.item[0].value = VAR_19->full_duplex_enb;
 VAR_19->cmd_req_virt->snmp_set.item[0].item_index = 0;
 VAR_19->cmd_req_virt->snmp_set.item[1].item_code = VAR_11;
 VAR_19->cmd_req_virt->snmp_set.item[1].value = VAR_19->req_ttrt;
 VAR_19->cmd_req_virt->snmp_set.item[1].item_index = 0;
 VAR_19->cmd_req_virt->snmp_set.item[2].item_code = VAR_8;
 if (FUNC_3(VAR_19) != VAR_1)
  {
  FUNC_10("%s: DMA command request failed!\n", VAR_19->dev->name);
  return VAR_0;
  }



 if (FUNC_1(VAR_19) != VAR_1)
  {
  FUNC_10("%s: Adapter CAM update failed!\n", VAR_19->dev->name);
  return VAR_0;
  }



 if (FUNC_2(VAR_19) != VAR_1)
  {
  FUNC_10("%s: Adapter filters update failed!\n", VAR_19->dev->name);
  return VAR_0;
  }






 if (VAR_20)
  FUNC_7(VAR_19);



 if (FUNC_8(VAR_19, VAR_20))
         {
  FUNC_10("%s: Receive buffer allocation failed\n", VAR_19->dev->name);
  if (VAR_20)
   FUNC_7(VAR_19);
  return VAR_0;
  }



 VAR_19->cmd_req_virt->cmd_type = VAR_4;
 if (FUNC_3(VAR_19) != VAR_1)
  {
  FUNC_10("%s: Start command failed\n", VAR_19->dev->name);
  if (VAR_20)
   FUNC_7(VAR_19);
  return VAR_0;
  }



 FUNC_6(VAR_19, VAR_16, VAR_7);
 return VAR_1;
 }
