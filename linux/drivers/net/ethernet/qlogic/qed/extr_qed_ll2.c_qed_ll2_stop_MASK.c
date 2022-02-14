
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_hwfn {int dummy; } ;
struct qed_dev {TYPE_1__* ll2; int ll2_mac_address; } ;
struct TYPE_2__ {scalar_t__ handle; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 struct qed_hwfn* FUNC_1 (struct qed_dev*) ;
 scalar_t__ FUNC_2 (struct qed_hwfn*) ;
 struct qed_hwfn* FUNC_3 (struct qed_dev*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct qed_hwfn*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct qed_dev*) ;
 int FUNC_7 (struct qed_dev*) ;
 int FUNC_8 (struct qed_hwfn*) ;
 int FUNC_9 (struct qed_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct qed_dev *VAR_1)
{
 bool VAR_2 = FUNC_6(VAR_1);
 struct qed_hwfn *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = 0, VAR_5 = 0;

 if (VAR_1->ll2->handle == VAR_0)
  return 0;

 FUNC_9(VAR_1, 0, VAR_1->ll2_mac_address);
 FUNC_5(VAR_1->ll2_mac_address);

 if (FUNC_2(VAR_3))
  FUNC_8(VAR_3);


 if (VAR_2) {
  VAR_5 = FUNC_4(FUNC_3(VAR_1));
  if (VAR_5)
   FUNC_0(FUNC_3(VAR_1),
      "Failed to stop LL2 on engine 0\n");
 }

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4)
  FUNC_0(VAR_3, "Failed to stop LL2\n");

 FUNC_7(VAR_1);

 VAR_1->ll2->handle = VAR_0;

 return VAR_4 | VAR_5;
}
