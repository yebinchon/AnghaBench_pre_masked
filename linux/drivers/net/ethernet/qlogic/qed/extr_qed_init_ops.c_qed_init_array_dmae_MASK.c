
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*,uintptr_t,int,int,int *) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int,int const) ;

__attribute__((used)) static int FUNC_2(struct qed_hwfn *VAR_0,
          struct qed_ptt *VAR_1,
          u32 VAR_2,
          u32 VAR_3,
          u32 VAR_4,
          const u32 *VAR_5,
          bool VAR_6,
          bool VAR_7)
{
 int VAR_8 = 0;


 if (!VAR_7 || (!VAR_6 && (VAR_4 < 16))) {
  const u32 *VAR_9 = VAR_5 + VAR_3;
  u32 VAR_10;

  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
   FUNC_1(VAR_0, VAR_1, VAR_2 + (VAR_10 << 2), VAR_9[VAR_10]);
 } else {
  VAR_8 = FUNC_0(VAR_0, VAR_1,
           (uintptr_t)(VAR_5 + VAR_3),
           VAR_2, VAR_4, ((void*)0));
 }

 return VAR_8;
}
