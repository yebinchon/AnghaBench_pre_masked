
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int start_pq; } ;
struct qed_hwfn {TYPE_1__ qm_info; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int,...) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_hwfn*,int ) ;
 int FUNC_2 (struct qed_hwfn*) ;

u16 FUNC_3(struct qed_hwfn *VAR_1, u16 VAR_2)
{
 u16 VAR_3 = FUNC_2(VAR_1);

 if (VAR_3 == 0) {
  FUNC_0(VAR_1, "pq with flag 0x%lx do not exist\n",
         VAR_0);
  return VAR_1->qm_info.start_pq;
 }

 if (VAR_2 > VAR_3)
  FUNC_0(VAR_1, "vf %d must be smaller than %d\n", VAR_2, VAR_3);

 return FUNC_1(VAR_1, VAR_0) + (VAR_2 % VAR_3);
}
