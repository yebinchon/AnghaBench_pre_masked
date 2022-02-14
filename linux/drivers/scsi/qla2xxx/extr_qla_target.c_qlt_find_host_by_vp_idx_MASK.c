
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint16_t ;
struct scsi_qla_host {size_t vp_idx; struct qla_hw_data* hw; } ;
struct TYPE_4__ {TYPE_1__* tgt_vp_map; } ;
struct qla_hw_data {TYPE_2__ tgt; int vp_idx_map; } ;
struct TYPE_3__ {struct scsi_qla_host* vha; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (size_t,int ) ;

__attribute__((used)) static inline
struct scsi_qla_host *FUNC_3(struct scsi_qla_host *VAR_0,
 uint16_t VAR_1)
{
 struct qla_hw_data *VAR_2 = VAR_0->hw;

 if (VAR_0->vp_idx == VAR_1)
  return VAR_0;

 FUNC_0(VAR_2->tgt.tgt_vp_map == ((void*)0));
 if (FUNC_1(FUNC_2(VAR_1, VAR_2->vp_idx_map)))
  return VAR_2->tgt.tgt_vp_map[VAR_1].vha;

 return ((void*)0);
}
