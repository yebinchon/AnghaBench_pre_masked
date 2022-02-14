
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct qed_hwfn {int rel_pf_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(struct qed_hwfn *VAR_1, u16 VAR_2)
{
 u32 VAR_3 = VAR_0 +
     FUNC_1(VAR_1->rel_pf_id);

 FUNC_0(VAR_1, VAR_3, VAR_2);
}
