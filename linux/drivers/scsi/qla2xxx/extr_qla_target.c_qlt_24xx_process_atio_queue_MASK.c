
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct TYPE_13__ {scalar_t__ atio_ring_index; scalar_t__ atio_q_length; TYPE_7__* atio_ring_ptr; TYPE_7__* atio_ring; } ;
struct TYPE_8__ {int fw_started; } ;
struct qla_hw_data {TYPE_6__ tgt; int base_qpair; TYPE_1__ flags; } ;
struct TYPE_11__ {int entry_count; scalar_t__ signature; } ;
struct TYPE_9__ {int ox_id; int s_id; } ;
struct TYPE_10__ {int exchange_addr; TYPE_2__ fcp_hdr; } ;
struct TYPE_12__ {TYPE_4__ raw; TYPE_3__ isp24; } ;
struct atio_from_isp {TYPE_5__ u; } ;
struct TYPE_14__ {scalar_t__ signature; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct scsi_qla_host*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct atio_from_isp*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct scsi_qla_host*,int,char*,int *,int ,int ,struct atio_from_isp*) ;
 int VAR_1 ;
 int FUNC_7 (struct scsi_qla_host*,struct atio_from_isp*,int ) ;
 int FUNC_8 (int ,int *,struct atio_from_isp*,int ,int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 () ;

void
FUNC_11(struct scsi_qla_host *VAR_2, uint8_t VAR_3)
{
 struct qla_hw_data *VAR_4 = VAR_2->hw;
 struct atio_from_isp *VAR_5;
 int VAR_6, VAR_7;

 if (!VAR_4->flags.fw_started)
  return;

 while ((VAR_4->tgt.atio_ring_ptr->signature != VAR_0) ||
     FUNC_4(VAR_4->tgt.atio_ring_ptr)) {
  VAR_5 = (struct atio_from_isp *)VAR_4->tgt.atio_ring_ptr;
  VAR_6 = VAR_5->u.raw.entry_count;

  if (FUNC_9(FUNC_4(VAR_4->tgt.atio_ring_ptr))) {





   FUNC_6(VAR_1, VAR_2, 0xd03c,
       "corrupted fcp frame SID[%3phN] OXID[%04x] EXCG[%x] %64phN\n",
       &VAR_5->u.isp24.fcp_hdr.s_id,
       FUNC_3(VAR_5->u.isp24.fcp_hdr.ox_id),
       FUNC_5(VAR_5->u.isp24.exchange_addr), VAR_5);

   FUNC_2(VAR_5);
   FUNC_8(VAR_4->base_qpair, ((void*)0), VAR_5,
       VAR_3, 0);
  } else {
   FUNC_7(VAR_2,
       (struct atio_from_isp *)VAR_5, VAR_3);
  }

  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
   VAR_4->tgt.atio_ring_index++;
   if (VAR_4->tgt.atio_ring_index == VAR_4->tgt.atio_q_length) {
    VAR_4->tgt.atio_ring_index = 0;
    VAR_4->tgt.atio_ring_ptr = VAR_4->tgt.atio_ring;
   } else
    VAR_4->tgt.atio_ring_ptr++;

   VAR_5->u.raw.signature = VAR_0;
   VAR_5 = (struct atio_from_isp *)VAR_4->tgt.atio_ring_ptr;
  }
  FUNC_10();
 }


 FUNC_1(FUNC_0(VAR_2), VAR_4->tgt.atio_ring_index);
}
