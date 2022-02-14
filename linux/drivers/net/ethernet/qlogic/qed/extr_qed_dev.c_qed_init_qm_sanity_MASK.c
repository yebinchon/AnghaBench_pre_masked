
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ multi_tc_roce_en; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct qed_hwfn*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct qed_hwfn*,int ) ;
 scalar_t__ FUNC_4 (struct qed_hwfn*) ;
 scalar_t__ FUNC_5 (struct qed_hwfn*) ;

__attribute__((used)) static int FUNC_6(struct qed_hwfn *VAR_3)
{
 if (FUNC_5(VAR_3) > FUNC_3(VAR_3, VAR_2)) {
  FUNC_0(VAR_3, "requested amount of vports exceeds resource\n");
  return -VAR_0;
 }

 if (FUNC_4(VAR_3) <= FUNC_3(VAR_3, VAR_1))
  return 0;

 if (FUNC_2(VAR_3)) {
  VAR_3->hw_info.multi_tc_roce_en = 0;
  FUNC_1(VAR_3,
     "multi-tc roce was disabled to reduce requested amount of pqs\n");
  if (FUNC_4(VAR_3) <= FUNC_3(VAR_3, VAR_1))
   return 0;
 }

 FUNC_0(VAR_3, "requested amount of pqs exceeds resource\n");
 return -VAR_0;
}
