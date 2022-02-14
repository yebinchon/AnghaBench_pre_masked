
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qed_hwfn*) ;
 int FUNC_1 (struct qed_hwfn*) ;
 int FUNC_2 (struct qed_hwfn*) ;

__attribute__((used)) static u16 FUNC_3(struct qed_hwfn *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2);


 return (!!(VAR_0 & VAR_3)) *
        FUNC_1(VAR_2) +
        (!!(VAR_1 & VAR_3)) *
        FUNC_2(VAR_2) + 1;
}
