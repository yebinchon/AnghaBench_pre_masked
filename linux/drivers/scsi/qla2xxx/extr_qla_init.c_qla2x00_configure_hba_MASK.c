
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint16_t ;
struct TYPE_16__ {scalar_t__ n2n_bigger; } ;
struct qla_hw_data {int switch_cap; int hardware_lock; TYPE_2__ flags; void* current_topology; void* operating_mode; int min_external_loopid; int loop_down_timer; int pdev; } ;
struct TYPE_17__ {int init_done; } ;
struct TYPE_18__ {int loop_id; TYPE_3__ flags; int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
struct TYPE_15__ {scalar_t__ rsvd_1; void* al_pa; void* area; void* domain; } ;
struct TYPE_19__ {TYPE_1__ b; } ;
typedef TYPE_5__ port_id_t ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 void* VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_4__* FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_4__*,int,char*,...) ;
 int VAR_11 ;
 int FUNC_6 (int ,TYPE_4__*,int,char*,...) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,int*,void**,void**,void**,int*,int*) ;
 int FUNC_9 (TYPE_4__*,TYPE_5__) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (char*,char*) ;

__attribute__((used)) static int
FUNC_14(scsi_qla_host_t *VAR_14)
{
 int VAR_15;
 uint16_t VAR_16;
 uint16_t VAR_17;
 uint16_t VAR_18;
 uint8_t VAR_19;
 uint8_t VAR_20;
 uint8_t VAR_21;
 char VAR_22[22];
 struct qla_hw_data *VAR_23 = VAR_14->hw;
 scsi_qla_host_t *VAR_24 = FUNC_4(VAR_23->pdev);
 port_id_t VAR_25;
 unsigned long VAR_26;


 VAR_15 = FUNC_8(VAR_14,
     &VAR_16, &VAR_19, &VAR_20, &VAR_21, &VAR_17, &VAR_18);
 if (VAR_15 != VAR_9) {
  if (FUNC_2(VAR_14) || FUNC_3(&VAR_23->loop_down_timer) ||
      FUNC_0(VAR_23) ||
      (VAR_15 == VAR_7 && VAR_16 == 0x7)) {
   FUNC_5(VAR_11, VAR_14, 0x2008,
       "Loop is in a transition state.\n");
  } else {
   FUNC_6(VAR_13, VAR_14, 0x2009,
       "Unable to get host loop ID.\n");
   if (FUNC_1(VAR_23) && (VAR_14 == VAR_24) &&
       (VAR_15 == VAR_7 && VAR_16 == 0x1b)) {
    FUNC_6(VAR_13, VAR_14, 0x1151,
        "Doing link init.\n");
    if (FUNC_7(VAR_14) == VAR_9)
     return VAR_15;
   }
   FUNC_10(VAR_0, &VAR_14->dpc_flags);
  }
  return (VAR_15);
 }

 if (VAR_17 == 4) {
  FUNC_6(VAR_12, VAR_14, 0x200a,
      "Cannot get topology - retrying.\n");
  return (VAR_8);
 }

 VAR_14->loop_id = VAR_16;


 VAR_23->min_external_loopid = VAR_10;
 VAR_23->operating_mode = VAR_5;
 VAR_23->switch_cap = 0;

 switch (VAR_17) {
 case 0:
  FUNC_5(VAR_11, VAR_14, 0x200b, "HBA in NL topology.\n");
  VAR_23->current_topology = VAR_4;
  FUNC_13(VAR_22, "(Loop)");
  break;

 case 1:
  FUNC_5(VAR_11, VAR_14, 0x200c, "HBA in FL topology.\n");
  VAR_23->switch_cap = VAR_18;
  VAR_23->current_topology = VAR_2;
  FUNC_13(VAR_22, "(FL_Port)");
  break;

 case 2:
  FUNC_5(VAR_11, VAR_14, 0x200d, "HBA in N P2P topology.\n");
  VAR_23->operating_mode = VAR_6;
  VAR_23->current_topology = VAR_3;
  FUNC_13(VAR_22, "(N_Port-to-N_Port)");
  break;

 case 3:
  FUNC_5(VAR_11, VAR_14, 0x200e, "HBA in F P2P topology.\n");
  VAR_23->switch_cap = VAR_18;
  VAR_23->operating_mode = VAR_6;
  VAR_23->current_topology = VAR_1;
  FUNC_13(VAR_22, "(F_Port)");
  break;

 default:
  FUNC_5(VAR_11, VAR_14, 0x200f,
      "HBA in unknown topology %x, using NL.\n", VAR_17);
  VAR_23->current_topology = VAR_4;
  FUNC_13(VAR_22, "(Loop)");
  break;
 }



 VAR_25.b.domain = VAR_21;
 VAR_25.b.area = VAR_20;
 VAR_25.b.al_pa = VAR_19;
 VAR_25.b.rsvd_1 = 0;
 FUNC_11(&VAR_23->hardware_lock, VAR_26);
 if (!(VAR_17 == 2 && VAR_23->flags.n2n_bigger))
  FUNC_9(VAR_14, VAR_25);
 FUNC_12(&VAR_23->hardware_lock, VAR_26);

 if (!VAR_14->flags.init_done)
  FUNC_6(VAR_12, VAR_14, 0x2010,
      "Topology - %s, Host Loop address 0x%x.\n",
      VAR_22, VAR_14->loop_id);

 return(VAR_15);
}
