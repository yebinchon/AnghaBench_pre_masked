
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct regpair {int lo; scalar_t__ hi; } ;
struct TYPE_2__ {int pending_req; int b_pending_msg; } ;
struct qed_vf_info {TYPE_1__ vf_mbx; } ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,int ) ;
 struct qed_vf_info* FUNC_1 (struct qed_hwfn*,int ) ;

__attribute__((used)) static int FUNC_2(struct qed_hwfn *VAR_1,
         u16 VAR_2, struct regpair *VAR_3)
{
 struct qed_vf_info *VAR_4 = FUNC_1(VAR_1,
      VAR_2);

 if (!VAR_4)
  return 0;




 VAR_4->vf_mbx.pending_req = (((u64)VAR_3->hi) << 32) | VAR_3->lo;


 VAR_4->vf_mbx.b_pending_msg = 1;
 FUNC_0(VAR_1, VAR_0);

 return 0;
}
