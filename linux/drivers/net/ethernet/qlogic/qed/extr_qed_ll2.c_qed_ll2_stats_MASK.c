
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_ll2_stats {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {TYPE_1__* ll2; } ;
struct TYPE_2__ {int handle; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 struct qed_hwfn* FUNC_1 (struct qed_dev*) ;
 struct qed_hwfn* FUNC_2 (struct qed_dev*) ;
 int FUNC_3 (struct qed_hwfn*,int ,struct qed_ll2_stats*) ;
 int FUNC_4 (struct qed_hwfn*,int ,struct qed_ll2_stats*) ;
 int FUNC_5 (struct qed_dev*) ;

__attribute__((used)) static int FUNC_6(struct qed_dev *VAR_1, struct qed_ll2_stats *VAR_2)
{
 bool VAR_3 = FUNC_5(VAR_1);
 struct qed_hwfn *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 if (!VAR_1->ll2)
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_4, VAR_1->ll2->handle, VAR_2);
 if (VAR_5) {
  FUNC_0(VAR_4, "Failed to get LL2 stats\n");
  return VAR_5;
 }


 if (VAR_3) {
  VAR_5 = FUNC_3(FUNC_2(VAR_1),
      VAR_1->ll2->handle, VAR_2);
  if (VAR_5) {
   FUNC_0(FUNC_2(VAR_1),
      "Failed to get LL2 stats on engine 0\n");
   return VAR_5;
  }
 }

 return 0;
}
