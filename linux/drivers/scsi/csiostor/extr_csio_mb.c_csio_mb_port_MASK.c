
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int u8 ;
struct TYPE_5__ {void* rcap32; } ;
struct TYPE_4__ {void* rcap; } ;
struct TYPE_6__ {TYPE_2__ l1cfg32; TYPE_1__ l1cfg; } ;
struct fw_port_cmd {TYPE_3__ u; void* action_to_len16; void* op_to_portid; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_hw {int dummy; } ;


 int FUNC_0 (struct csio_mb*,struct fw_port_cmd*,int ,struct csio_hw*,void (*) (struct csio_hw*,struct csio_mb*),int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int) ;

void
FUNC_8(struct csio_hw *VAR_9, struct csio_mb *VAR_10, uint32_t VAR_11,
      u8 VAR_12, bool VAR_13, uint32_t VAR_14, uint16_t VAR_15,
      void (*VAR_16) (struct csio_hw *, struct csio_mb *))
{
 struct fw_port_cmd *VAR_17 = (struct fw_port_cmd *)(VAR_10->mb);

 FUNC_0(VAR_10, VAR_17, VAR_11, VAR_9, VAR_16, 1);

 VAR_17->op_to_portid = FUNC_7(FUNC_2(VAR_8) |
       VAR_3 |
       (VAR_13 ? VAR_1 : VAR_2) |
       FUNC_4(VAR_12));
 if (!VAR_13) {
  VAR_17->action_to_len16 = FUNC_7(
   FUNC_3(VAR_15 == VAR_0
   ? VAR_4
   : VAR_5) |
   FUNC_1(sizeof(*VAR_17) / 16));
  return;
 }


 VAR_17->action_to_len16 = FUNC_7(
   FUNC_3(VAR_15 == VAR_0
   ? VAR_6
   : VAR_7) |
   FUNC_1(sizeof(*VAR_17) / 16));

 if (VAR_15 == VAR_0)
  VAR_17->u.l1cfg.rcap = FUNC_5(FUNC_6(VAR_14));
 else
  VAR_17->u.l1cfg32.rcap32 = FUNC_5(VAR_14);
}
