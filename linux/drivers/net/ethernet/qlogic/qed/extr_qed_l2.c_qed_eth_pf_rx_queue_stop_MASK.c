
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rx_queue_stop_ramrod_data {int complete_cqe_flg; int complete_event_flg; int rx_queue_id; int vport_id; } ;
struct TYPE_3__ {struct rx_queue_stop_ramrod_data rx_queue_stop; } ;
struct qed_spq_entry {TYPE_1__ ramrod; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct TYPE_4__ {int queue_id; int vport_id; } ;
struct qed_queue_cid {scalar_t__ vfid; TYPE_2__ abs; int opaque_fid; int cid; } ;
struct qed_hwfn {int dummy; } ;
typedef int init_data ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

__attribute__((used)) static int
FUNC_4(struct qed_hwfn *VAR_4,
    struct qed_queue_cid *VAR_5,
    bool VAR_6, bool VAR_7)
{
 struct rx_queue_stop_ramrod_data *VAR_8 = ((void*)0);
 struct qed_spq_entry *VAR_9 = ((void*)0);
 struct qed_sp_init_data VAR_10;
 int VAR_11;

 FUNC_1(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.cid = VAR_5->cid;
 VAR_10.opaque_fid = VAR_5->opaque_fid;
 VAR_10.comp_mode = VAR_3;

 VAR_11 = FUNC_2(VAR_4, &VAR_9,
     VAR_0,
     VAR_1, &VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_8 = &VAR_9->ramrod.rx_queue_stop;
 VAR_8->vport_id = VAR_5->abs.vport_id;
 VAR_8->rx_queue_id = FUNC_0(VAR_5->abs.queue_id);




 VAR_8->complete_cqe_flg = ((VAR_5->vfid == VAR_2) &&
          !VAR_6) ||
         VAR_7;
 VAR_8->complete_event_flg = (VAR_5->vfid != VAR_2) ||
           VAR_6;

 return FUNC_3(VAR_4, VAR_9, ((void*)0));
}
