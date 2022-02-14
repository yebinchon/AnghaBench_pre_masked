
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct scsi_sgl_task_params {int num_sges; int small_mid_sge; } ;
struct TYPE_3__ {int sge_len; } ;
struct scsi_initiator_cmd_params {TYPE_1__ extended_cdb_sge; } ;
struct scsi_dif_task_params {int dummy; } ;
struct iscsi_task_params {int tx_io_size; TYPE_2__* sqe; int itid; } ;
struct iscsi_common_hdr {int itt; int hdr_first_byte; int hdr_second_dword; } ;
typedef enum iscsi_task_type { ____Placeholder_iscsi_task_type } iscsi_task_type ;
struct TYPE_4__ {int flags; int contlen_cdbsize; int prot_flags; int task_id; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct iscsi_task_params*,int,struct scsi_sgl_task_params*,struct scsi_dif_task_params*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct scsi_dif_task_params*) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct iscsi_task_params *VAR_16,
       struct scsi_sgl_task_params *VAR_17,
       struct scsi_dif_task_params *VAR_18,
       struct iscsi_common_hdr *VAR_19,
       struct scsi_initiator_cmd_params *VAR_20,
       enum iscsi_task_type VAR_21,
       bool VAR_22)
{
 if (!VAR_16->sqe)
  return;

 FUNC_5(VAR_16->sqe, 0, sizeof(*VAR_16->sqe));
 VAR_16->sqe->task_id = FUNC_3(VAR_16->itid);
 if (VAR_22) {
  FUNC_1(VAR_16->sqe->flags, VAR_14,
     VAR_13);
  return;
 }

 switch (VAR_21) {
 case 130:
 {
  u32 VAR_23 = 0;
  u32 VAR_24 = 0;

  FUNC_4(&VAR_16->sqe->prot_flags,
           VAR_18);

  FUNC_1(VAR_16->sqe->flags, VAR_14,
     VAR_12);

  if (VAR_16->tx_io_size) {
   VAR_23 = FUNC_2(VAR_16, VAR_21,
           VAR_17,
           VAR_18);

   if (FUNC_7(VAR_17->num_sges,
          VAR_17->small_mid_sge))
    VAR_24 = VAR_8;
   else
    VAR_24 = FUNC_6(VAR_17->num_sges,
            (u16)VAR_15);
  }

  FUNC_1(VAR_16->sqe->flags, VAR_7,
     VAR_24);
  FUNC_1(VAR_16->sqe->contlen_cdbsize, VAR_6,
     VAR_23);

  if (FUNC_0(VAR_19->hdr_second_dword,
         VAR_0))
   FUNC_1(VAR_16->sqe->contlen_cdbsize,
      VAR_5,
      VAR_20->extended_cdb_sge.sge_len);
 }
  break;
 case 131:
  FUNC_1(VAR_16->sqe->flags, VAR_14,
     VAR_12);

  if (FUNC_0(VAR_19->hdr_second_dword,
         VAR_0))
   FUNC_1(VAR_16->sqe->contlen_cdbsize,
      VAR_5,
      VAR_20->extended_cdb_sge.sge_len);
  break;
 case 129:
 case 128:
 {
  bool VAR_25 = 1;

  if (VAR_21 == 129)
   FUNC_1(VAR_16->sqe->flags, VAR_14,
      VAR_10);
  else
   FUNC_1(VAR_16->sqe->flags, VAR_14,
      VAR_11);

  if (VAR_21 == 128) {
   u8 VAR_26 = FUNC_0(VAR_19->hdr_first_byte,
           VAR_1);

   if (VAR_26 != VAR_3 &&
       (VAR_26 != VAR_2 ||
       VAR_19->itt == VAR_4))
    VAR_25 = 0;
  }

  FUNC_1(VAR_16->sqe->flags, VAR_9,
     VAR_25 ? 1 : 0);

  if (VAR_16->tx_io_size) {
   FUNC_1(VAR_16->sqe->contlen_cdbsize,
      VAR_6, VAR_16->tx_io_size);

  if (FUNC_7(VAR_17->num_sges,
         VAR_17->small_mid_sge))
   FUNC_1(VAR_16->sqe->flags, VAR_7,
      VAR_8);
  else
   FUNC_1(VAR_16->sqe->flags, VAR_7,
      FUNC_6(VAR_17->num_sges,
          (u16)VAR_15));
  }
 }
  break;
 default:
  break;
 }
}
