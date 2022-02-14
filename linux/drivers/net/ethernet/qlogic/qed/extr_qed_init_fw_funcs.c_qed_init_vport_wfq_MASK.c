
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,scalar_t__,scalar_t__) ;

int FUNC_3(struct qed_hwfn *VAR_4,
         struct qed_ptt *VAR_5,
         u16 VAR_6[VAR_0], u16 VAR_7)
{
 u16 VAR_8;
 u32 VAR_9;
 u8 VAR_10;

 VAR_9 = FUNC_1(VAR_7);
 if (!VAR_9 || VAR_9 > VAR_3) {
  FUNC_0(VAR_4, "Invalid VPORT WFQ weight configuration\n");
  return -1;
 }

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_8 = VAR_6[VAR_10];
  if (VAR_8 != VAR_1)
   FUNC_2(VAR_4,
          VAR_5,
          VAR_2 + VAR_8 * 4, VAR_9);
 }

 return 0;
}
