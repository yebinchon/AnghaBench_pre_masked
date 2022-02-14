
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ntb_transport_qp {int qp_bitmap; int qp_bitmap_free; int qp_count; int mw_count; struct ntb_transport_qp* mw_vec; struct ntb_transport_qp* qp_vec; int vbase; int debugfs_dir; int link_work; int link_cleanup; } ;
struct ntb_transport_ctx {int qp_bitmap; int qp_bitmap_free; int qp_count; int mw_count; struct ntb_transport_ctx* mw_vec; struct ntb_transport_ctx* qp_vec; int vbase; int debugfs_dir; int link_work; int link_cleanup; } ;
struct ntb_dev {struct ntb_transport_qp* ctx; } ;
struct ntb_client {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ntb_transport_qp*) ;
 int FUNC_6 (struct ntb_transport_qp*) ;
 int FUNC_7 (struct ntb_dev*) ;
 int FUNC_8 (struct ntb_transport_qp*,int) ;
 int FUNC_9 (struct ntb_dev*) ;
 int FUNC_10 (struct ntb_transport_qp*) ;
 int FUNC_11 (struct ntb_transport_qp*) ;

__attribute__((used)) static void FUNC_12(struct ntb_client *VAR_0, struct ntb_dev *VAR_1)
{
 struct ntb_transport_ctx *VAR_2 = VAR_1->ctx;
 struct ntb_transport_qp *VAR_3;
 u64 VAR_4;
 int VAR_5;

 FUNC_11(VAR_2);
 FUNC_2(&VAR_2->link_cleanup);
 FUNC_1(&VAR_2->link_work);

 VAR_4 = VAR_2->qp_bitmap & ~VAR_2->qp_bitmap_free;


 for (VAR_5 = 0; VAR_5 < VAR_2->qp_count; VAR_5++) {
  VAR_3 = &VAR_2->qp_vec[VAR_5];
  if (VAR_4 & FUNC_0(VAR_5))
   FUNC_10(VAR_3);
  FUNC_3(VAR_3->debugfs_dir);
 }

 FUNC_9(VAR_1);
 FUNC_7(VAR_1);

 FUNC_6(VAR_2);

 for (VAR_5 = VAR_2->mw_count; VAR_5--; ) {
  FUNC_8(VAR_2, VAR_5);
  FUNC_4(VAR_2->mw_vec[VAR_5].vbase);
 }

 FUNC_5(VAR_2->qp_vec);
 FUNC_5(VAR_2->mw_vec);
 FUNC_5(VAR_2);
}
