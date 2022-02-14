
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct qed_hwfn*) ;
 int FUNC_1 (struct qed_hwfn*) ;
 int FUNC_2 (struct qed_hwfn*) ;
 int FUNC_3 (struct qed_hwfn*) ;
 int FUNC_4 (struct qed_hwfn*) ;

__attribute__((used)) static u16 FUNC_5(struct qed_hwfn *VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_8);

 return (!!(VAR_6 & VAR_9)) *
        FUNC_2(VAR_8) +
        (!!(VAR_3 & VAR_9)) *
        FUNC_3(VAR_8) +
        (!!(VAR_1 & VAR_9)) + (!!(VAR_5 & VAR_9)) +
        (!!(VAR_0 & VAR_9)) +
        (!!(VAR_4 & VAR_9)) *
        FUNC_1(VAR_8) +
        (!!(VAR_2 & VAR_9)) *
        FUNC_1(VAR_8) +
        (!!(VAR_7 & VAR_9)) * FUNC_4(VAR_8);
}
