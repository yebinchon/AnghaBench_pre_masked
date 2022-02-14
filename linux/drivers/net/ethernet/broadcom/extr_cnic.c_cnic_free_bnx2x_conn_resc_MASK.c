
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct cnic_local {int fcoe_cid_tbl; int cid_tbl; struct cnic_context* ctx_tbl; } ;
struct cnic_iscsi {int task_array_info; int r2tq_info; int hq_info; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;
struct TYPE_2__ {struct cnic_iscsi* iscsi; } ;
struct cnic_context {scalar_t__ ulp_proto_id; scalar_t__ cid; TYPE_1__ proto; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cnic_dev*,int *) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct cnic_dev *VAR_1, u32 VAR_2)
{
 struct cnic_local *VAR_3 = VAR_1->cnic_priv;
 struct cnic_context *VAR_4 = &VAR_3->ctx_tbl[VAR_2];

 if (VAR_4->ulp_proto_id == VAR_0) {
  struct cnic_iscsi *VAR_5 = VAR_4->proto.iscsi;

  FUNC_0(VAR_1, &VAR_5->hq_info);
  FUNC_0(VAR_1, &VAR_5->r2tq_info);
  FUNC_0(VAR_1, &VAR_5->task_array_info);
  FUNC_1(&VAR_3->cid_tbl, VAR_4->cid);
 } else {
  FUNC_1(&VAR_3->fcoe_cid_tbl, VAR_4->cid);
 }

 VAR_4->cid = 0;
}
