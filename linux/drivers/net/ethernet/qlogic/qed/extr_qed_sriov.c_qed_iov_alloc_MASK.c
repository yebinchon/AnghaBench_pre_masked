
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_pf_iov {int dummy; } ;
struct qed_hwfn {struct qed_pf_iov* pf_iov_info; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qed_hwfn*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct qed_pf_iov* FUNC_2 (int,int ) ;
 int FUNC_3 (struct qed_hwfn*) ;
 int FUNC_4 (struct qed_hwfn*,int ,int ) ;
 int VAR_4 ;

int FUNC_5(struct qed_hwfn *VAR_5)
{
 struct qed_pf_iov *VAR_6;

 if (!FUNC_1(VAR_5)) {
  FUNC_0(VAR_5, VAR_3,
      "No SR-IOV - no need for IOV db\n");
  return 0;
 }

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_5->pf_iov_info = VAR_6;

 FUNC_4(VAR_5, VAR_2,
      VAR_4);

 return FUNC_3(VAR_5);
}
