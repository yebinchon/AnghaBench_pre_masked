
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qed_vf_info {int abs_vf_id; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct qed_hwfn*,struct qed_ptt*,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct qed_hwfn *VAR_4,
   struct qed_vf_info *VAR_5, struct qed_ptt *VAR_6)
{
 u32 VAR_7[VAR_1], VAR_8[VAR_1];
 int VAR_9, VAR_10;


 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  u32 VAR_11;

  VAR_7[VAR_9] = FUNC_2(VAR_4, VAR_6,
     VAR_2 +
     VAR_9 * 0x40);
  VAR_11 = FUNC_2(VAR_4, VAR_6,
         VAR_3 +
         VAR_9 * 0x40);
  VAR_8[VAR_9] = VAR_11 - VAR_7[VAR_9];
 }


 VAR_9 = 0;
 for (VAR_10 = 0; VAR_10 < 50; VAR_10++) {
  for (; VAR_9 < VAR_1; VAR_9++) {
   u32 VAR_12;

   VAR_12 = FUNC_2(VAR_4, VAR_6,
         VAR_2 +
         VAR_9 * 0x40);
   if (VAR_8[VAR_9] > VAR_12 - VAR_7[VAR_9])
    break;
  }

  if (VAR_9 == VAR_1)
   break;

  FUNC_1(20);
 }

 if (VAR_10 == 50) {
  FUNC_0(VAR_4, "VF[%d] - pbf polling failed on VOQ %d\n",
         VAR_5->abs_vf_id, VAR_9);
  return -VAR_0;
 }

 return 0;
}
