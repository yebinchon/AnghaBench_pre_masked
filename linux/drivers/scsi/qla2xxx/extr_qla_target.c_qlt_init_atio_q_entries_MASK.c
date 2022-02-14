
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct TYPE_4__ {scalar_t__ atio_q_length; scalar_t__ atio_ring; } ;
struct qla_hw_data {TYPE_1__ tgt; } ;
struct TYPE_5__ {int signature; } ;
struct TYPE_6__ {TYPE_2__ raw; } ;
struct atio_from_isp {TYPE_3__ u; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;

void
FUNC_1(struct scsi_qla_host *VAR_1)
{
 struct qla_hw_data *VAR_2 = VAR_1->hw;
 uint16_t VAR_3;
 struct atio_from_isp *VAR_4 = (struct atio_from_isp *)VAR_2->tgt.atio_ring;

 if (FUNC_0(VAR_1))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->tgt.atio_q_length; VAR_3++) {
  VAR_4->u.raw.signature = VAR_0;
  VAR_4++;
 }

}
