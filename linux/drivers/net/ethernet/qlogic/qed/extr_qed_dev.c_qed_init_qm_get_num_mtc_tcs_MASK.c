
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*) ;
 int FUNC_1 (struct qed_hwfn*) ;

__attribute__((used)) static u8 FUNC_2(struct qed_hwfn *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1);

 if (!(VAR_0 & VAR_2))
  return 1;

 return FUNC_1(VAR_1);
}
