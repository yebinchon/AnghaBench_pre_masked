
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {int p_phys_addr; } ;
struct qed_spq {TYPE_2__ chain; int cid; } ;
struct qed_hwfn {TYPE_5__* p_consq; } ;
struct qed_cxt_info {struct e4_core_conn_context* p_cxt; int iid; } ;
struct TYPE_8__ {int consolid_base_addr; int spq_base_hi; int spq_base_lo; } ;
struct TYPE_6__ {int physical_q0; int flags9; int flags1; int flags10; } ;
struct e4_core_conn_context {TYPE_3__ xstorm_st_context; TYPE_1__ xstorm_ag_context; } ;
struct TYPE_9__ {int p_phys_addr; } ;
struct TYPE_10__ {TYPE_4__ chain; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct qed_hwfn*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_cxt_info*) ;
 int FUNC_7 (struct qed_hwfn*,int ) ;

__attribute__((used)) static void FUNC_8(struct qed_hwfn *VAR_4,
      struct qed_spq *VAR_5)
{
 struct e4_core_conn_context *VAR_6;
 struct qed_cxt_info VAR_7;
 u16 VAR_8;
 int VAR_9;

 VAR_7.iid = VAR_5->cid;

 VAR_9 = FUNC_6(VAR_4, &VAR_7);

 if (VAR_9 < 0) {
  FUNC_3(VAR_4, "Cannot find context info for cid=%d\n",
     VAR_5->cid);
  return;
 }

 VAR_6 = VAR_7.p_cxt;

 FUNC_4(VAR_6->xstorm_ag_context.flags10,
    VAR_2, 1);
 FUNC_4(VAR_6->xstorm_ag_context.flags1,
    VAR_1, 1);
 FUNC_4(VAR_6->xstorm_ag_context.flags9,
    VAR_0, 1);


 VAR_8 = FUNC_7(VAR_4, VAR_3);
 VAR_6->xstorm_ag_context.physical_q0 = FUNC_5(VAR_8);

 VAR_6->xstorm_st_context.spq_base_lo =
  FUNC_1(VAR_5->chain.p_phys_addr);
 VAR_6->xstorm_st_context.spq_base_hi =
  FUNC_0(VAR_5->chain.p_phys_addr);

 FUNC_2(VAR_6->xstorm_st_context.consolid_base_addr,
         VAR_4->p_consq->chain.p_phys_addr);
}
