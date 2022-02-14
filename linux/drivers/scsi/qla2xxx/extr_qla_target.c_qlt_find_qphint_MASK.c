
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {scalar_t__ qpairs_available; } ;
struct TYPE_3__ {struct qla_tgt* qla_tgt; } ;
struct scsi_qla_host {TYPE_2__ flags; TYPE_1__ vha_tgt; } ;
struct qla_tgt {struct qla_qpair_hint* qphints; int lun_qpair_map; } ;
struct qla_qpair_hint {int dummy; } ;


 struct qla_qpair_hint* FUNC_0 (int *,int ) ;

__attribute__((used)) static struct qla_qpair_hint *FUNC_1(struct scsi_qla_host *VAR_0,
    uint64_t VAR_1)
{
 struct qla_tgt *VAR_2 = VAR_0->vha_tgt.qla_tgt;
 struct qla_qpair_hint *VAR_3 = ((void*)0);

 if (VAR_0->flags.qpairs_available) {
  VAR_3 = FUNC_0(&VAR_2->lun_qpair_map, VAR_1);
  if (!VAR_3)
   VAR_3 = &VAR_2->qphints[0];
 } else {
  VAR_3 = &VAR_2->qphints[0];
 }

 return VAR_3;
}
