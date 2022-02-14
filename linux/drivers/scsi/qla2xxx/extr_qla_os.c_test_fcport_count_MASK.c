
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sess_lock; } ;
struct qla_hw_data {TYPE_1__ tgt; } ;
struct TYPE_7__ {scalar_t__ fcport_count; struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int FUNC_0 (int ,TYPE_2__*,int,char*,TYPE_2__*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_3(scsi_qla_host_t *VAR_1)
{
 struct qla_hw_data *VAR_2 = VAR_1->hw;
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(&VAR_2->tgt.sess_lock, VAR_3);
 FUNC_0(VAR_0, VAR_1, 0x00ec,
     "tgt %p, fcport_count=%d\n",
     VAR_1, VAR_1->fcport_count);
 VAR_4 = (VAR_1->fcport_count == 0);
 FUNC_2(&VAR_2->tgt.sess_lock, VAR_3);

 return VAR_4;
}
