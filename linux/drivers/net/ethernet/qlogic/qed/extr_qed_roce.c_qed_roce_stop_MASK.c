
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_hwfn {TYPE_1__* p_rdma_info; } ;
struct qed_bmap {int max_count; int bitmap; } ;
struct TYPE_2__ {struct qed_bmap real_cid_map; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct qed_hwfn*,int ) ;

void FUNC_4(struct qed_hwfn *VAR_1)
{
 struct qed_bmap *VAR_2 = &VAR_1->p_rdma_info->real_cid_map;
 int VAR_3 = 0;






 while (FUNC_1(VAR_2->bitmap, VAR_2->max_count)) {
  FUNC_2(100);
  if (VAR_3++ > 20) {
   FUNC_0(VAR_1, "cid bitmap wait timed out\n");
   break;
  }
 }
 FUNC_3(VAR_1, VAR_0);
}
