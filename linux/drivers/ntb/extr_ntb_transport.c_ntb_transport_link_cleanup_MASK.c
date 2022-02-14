
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ntb_transport_qp {int link_work; int link_cleanup; } ;
struct ntb_transport_ctx {int qp_bitmap; int qp_bitmap_free; unsigned int qp_count; unsigned int mw_count; int ndev; int link_work; int link_is_up; struct ntb_transport_qp* qp_vec; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ntb_transport_ctx*,unsigned int) ;
 int FUNC_4 (struct ntb_transport_qp*) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned int,int ) ;

__attribute__((used)) static void FUNC_7(struct ntb_transport_ctx *VAR_0)
{
 struct ntb_transport_qp *VAR_1;
 u64 VAR_2;
 unsigned int VAR_3, VAR_4;

 VAR_2 = VAR_0->qp_bitmap & ~VAR_0->qp_bitmap_free;


 for (VAR_3 = 0; VAR_3 < VAR_0->qp_count; VAR_3++)
  if (VAR_2 & FUNC_0(VAR_3)) {
   VAR_1 = &VAR_0->qp_vec[VAR_3];
   FUNC_4(VAR_1);
   FUNC_2(&VAR_1->link_cleanup);
   FUNC_1(&VAR_1->link_work);
  }

 if (!VAR_0->link_is_up)
  FUNC_1(&VAR_0->link_work);

 for (VAR_3 = 0; VAR_3 < VAR_0->mw_count; VAR_3++)
  FUNC_3(VAR_0, VAR_3);





 VAR_4 = FUNC_5(VAR_0->ndev);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  FUNC_6(VAR_0->ndev, VAR_3, 0);
}
