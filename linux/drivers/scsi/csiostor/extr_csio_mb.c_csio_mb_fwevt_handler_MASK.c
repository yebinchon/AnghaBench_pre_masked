
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef void* uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_6__ {int linkattr32; int lstatus32_to_cbllen32; } ;
struct TYPE_5__ {int lstatus_to_modtype; } ;
struct TYPE_7__ {TYPE_2__ info32; TYPE_1__ info; } ;
struct fw_port_cmd {TYPE_3__ u; int action_to_len16; int op_to_portid; } ;
struct csio_hw {TYPE_4__* pport; } ;
typedef void* fw_port_cap32_t ;
typedef int __be64 ;
struct TYPE_8__ {scalar_t__ mod_type; scalar_t__ link_status; int link_speed; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (struct csio_hw*,char*,scalar_t__) ;
 int FUNC_7 (struct csio_hw*,char*,scalar_t__) ;
 int FUNC_8 (struct csio_hw*,char*,scalar_t__,char*) ;
 int FUNC_9 (struct csio_hw*,int *) ;
 int FUNC_10 (struct csio_hw*,scalar_t__) ;
 int FUNC_11 (void*) ;
 void* FUNC_12 (void*) ;
 void* FUNC_13 (int ) ;

int
FUNC_14(struct csio_hw *VAR_5, __be64 *VAR_6)
{
 uint8_t VAR_7 = *(uint8_t *)VAR_6;
 struct fw_port_cmd *VAR_8;
 uint8_t VAR_9;
 uint32_t VAR_10;
 uint16_t VAR_11;
 uint8_t VAR_12;
 fw_port_cap32_t VAR_13;

 if (VAR_7 == VAR_4) {
  VAR_8 = (struct fw_port_cmd *)VAR_6;
  VAR_9 = FUNC_5(
    FUNC_13(VAR_8->op_to_portid));
  VAR_11 = FUNC_0(
    FUNC_13(VAR_8->action_to_len16));
  if (VAR_11 != VAR_2 &&
      VAR_11 != VAR_3) {
   FUNC_7(VAR_5, "Unhandled FW_PORT_CMD action: %u\n",
    VAR_11);
   return -VAR_0;
  }

  if (VAR_11 == VAR_2) {
   VAR_10 = FUNC_13(VAR_8->u.info.lstatus_to_modtype);
   VAR_12 = FUNC_4(VAR_10);
   VAR_13 = FUNC_12(VAR_10);

   VAR_5->pport[VAR_9].link_status =
    FUNC_2(VAR_10);
  } else {
   VAR_10 =
    FUNC_13(VAR_8->u.info32.lstatus32_to_cbllen32);
   VAR_12 = FUNC_3(VAR_10);
   VAR_13 = FUNC_13(VAR_8->u.info32.linkattr32);

   VAR_5->pport[VAR_9].link_status =
    FUNC_1(VAR_10);
  }

  VAR_5->pport[VAR_9].link_speed = FUNC_11(VAR_13);

  FUNC_8(VAR_5, "Port:%x - LINK %s\n", VAR_9,
   VAR_5->pport[VAR_9].link_status ? "UP" : "DOWN");

  if (VAR_12 != VAR_5->pport[VAR_9].mod_type) {
   VAR_5->pport[VAR_9].mod_type = VAR_12;
   FUNC_10(VAR_5, VAR_9);
  }
 } else if (VAR_7 == VAR_1) {
  FUNC_9(VAR_5, VAR_6);
 } else {
  FUNC_6(VAR_5, "Gen MB can't handle op:0x%x on evtq.\n", VAR_7);
  return -VAR_0;
 }

 return 0;
}
