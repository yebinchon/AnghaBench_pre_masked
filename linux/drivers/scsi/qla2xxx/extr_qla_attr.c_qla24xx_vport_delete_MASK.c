
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct qla_hw_data {TYPE_2__* pdev; int vport_lock; int vp_idx_map; int cur_vport_count; } ;
struct fc_vport {TYPE_5__* dd_data; } ;
struct TYPE_20__ {int l; } ;
struct TYPE_19__ {int * l; int ldma; int size; } ;
struct TYPE_17__ {int delete_progress; } ;
struct TYPE_21__ {scalar_t__ vp_idx; int host; TYPE_9__* qpair; TYPE_4__ scan; TYPE_3__ gnl; scalar_t__ timer_active; TYPE_1__ flags; int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_5__ scsi_qla_host_t ;
struct TYPE_22__ {scalar_t__ vp_idx; } ;
struct TYPE_18__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,TYPE_5__*,int,char*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_7 (int ,TYPE_5__*,int,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*) ;
 scalar_t__ FUNC_13 (TYPE_5__*,TYPE_9__*) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (struct qla_hw_data*,TYPE_5__*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int *) ;
 scalar_t__ FUNC_19 (int ,int *) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static int
FUNC_21(struct fc_vport *VAR_7)
{
 scsi_qla_host_t *VAR_8 = VAR_7->dd_data;
 struct qla_hw_data *VAR_9 = VAR_8->hw;
 uint16_t VAR_10 = VAR_8->vp_idx;

 FUNC_18(VAR_3, &VAR_8->dpc_flags);

 while (FUNC_19(VAR_1, &VAR_8->dpc_flags) ||
     FUNC_19(VAR_0, &VAR_8->dpc_flags))
  FUNC_3(1000);

 FUNC_14(VAR_8);

 FUNC_9(VAR_8);
 FUNC_12(VAR_8);

 VAR_8->flags.delete_progress = 1;

 FUNC_15(VAR_9, VAR_8);

 FUNC_2(VAR_8->host);

 FUNC_17(VAR_8->host);


 FUNC_8(VAR_8);

 if (VAR_8->timer_active) {
  FUNC_11(VAR_8);
  FUNC_6(VAR_4, VAR_8, 0x7086,
      "Timer for the VP[%d] has stopped\n", VAR_8->vp_idx);
 }

 FUNC_10(VAR_8);

 FUNC_4(&VAR_9->vport_lock);
 VAR_9->cur_vport_count--;
 FUNC_0(VAR_8->vp_idx, VAR_9->vp_idx_map);
 FUNC_5(&VAR_9->vport_lock);

 FUNC_1(&VAR_9->pdev->dev, VAR_8->gnl.size, VAR_8->gnl.l,
     VAR_8->gnl.ldma);

 VAR_8->gnl.l = ((void*)0);

 FUNC_20(VAR_8->scan.l);

 if (VAR_8->qpair && VAR_8->qpair->vp_idx == VAR_8->vp_idx) {
  if (FUNC_13(VAR_8, VAR_8->qpair) != VAR_2)
   FUNC_7(VAR_6, VAR_8, 0x7087,
       "Queue Pair delete failed.\n");
 }

 FUNC_7(VAR_5, VAR_8, 0x7088, "VP[%d] deleted.\n", VAR_10);
 FUNC_16(VAR_8->host);
 return 0;
}
