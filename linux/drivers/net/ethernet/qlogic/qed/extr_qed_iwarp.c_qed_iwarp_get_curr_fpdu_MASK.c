
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef size_t u16 ;
struct qed_iwarp_info {size_t max_num_partial_fpdus; struct qed_iwarp_fpdu* partial_fpdus; } ;
struct qed_iwarp_fpdu {int dummy; } ;
struct qed_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {struct qed_iwarp_info iwarp; } ;


 int FUNC_0 (struct qed_hwfn*,char*,size_t,size_t) ;
 int VAR_0 ;
 size_t FUNC_1 (struct qed_hwfn*,int ) ;

__attribute__((used)) static struct qed_iwarp_fpdu *FUNC_2(struct qed_hwfn *VAR_1,
            u16 VAR_2)
{
 struct qed_iwarp_info *VAR_3 = &VAR_1->p_rdma_info->iwarp;
 struct qed_iwarp_fpdu *VAR_4;
 u32 VAR_5;

 VAR_5 = VAR_2 - FUNC_1(VAR_1, VAR_0);
 if (VAR_5 >= VAR_3->max_num_partial_fpdus) {
  FUNC_0(VAR_1, "Invalid cid %x max_num_partial_fpdus=%x\n", VAR_2,
         VAR_3->max_num_partial_fpdus);
  return ((void*)0);
 }

 VAR_4 = &VAR_3->partial_fpdus[VAR_5];

 return VAR_4;
}
