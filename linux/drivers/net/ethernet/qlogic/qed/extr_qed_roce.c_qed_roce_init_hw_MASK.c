
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int rdma_prs_search_reg; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct qed_hwfn*,int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

int FUNC_5(struct qed_hwfn *VAR_6, struct qed_ptt *VAR_7)
{
 u32 VAR_8;

 FUNC_4(VAR_6, VAR_7, VAR_3, 0);

 VAR_6->rdma_prs_search_reg = VAR_4;

 VAR_8 = FUNC_3(VAR_6, VAR_7, VAR_2);
 FUNC_4(VAR_6, VAR_7, VAR_2,
        (VAR_8 | 0x01));

 if (FUNC_2(VAR_6, VAR_1) % 2) {
  FUNC_0(VAR_6, "The first RoCE's cid should be even\n");
  return -VAR_0;
 }

 FUNC_1(VAR_6, VAR_5, "Initializing HW - Done\n");
 return 0;
}
