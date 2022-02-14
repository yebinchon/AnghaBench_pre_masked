
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qed_dev {int num_hwfns; int firmware; } ;
struct TYPE_3__ {int p_arfs_ptt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qed_dev*) ;
 scalar_t__ FUNC_1 (struct qed_dev*) ;
 TYPE_1__* FUNC_2 (struct qed_dev*) ;
 int FUNC_3 (struct qed_dev*) ;
 int FUNC_4 (struct qed_dev*) ;
 int FUNC_5 (struct qed_dev*,int) ;
 int FUNC_6 (struct qed_dev*) ;
 int FUNC_7 (struct qed_dev*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (struct qed_dev*) ;
 int FUNC_10 (struct qed_dev*) ;
 int FUNC_11 (struct qed_dev*) ;
 int FUNC_12 (struct qed_dev*,int) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct qed_dev *VAR_1)
{
 if (!VAR_1)
  return -VAR_0;

 FUNC_11(VAR_1);

 FUNC_6(VAR_1);

 if (FUNC_0(VAR_1)) {
  if (VAR_1->num_hwfns == 1)
   FUNC_8(FUNC_2(VAR_1),
     FUNC_2(VAR_1)->p_arfs_ptt);
  FUNC_4(VAR_1);
  if (FUNC_1(VAR_1))
   FUNC_12(VAR_1, 1);
 }

 FUNC_7(VAR_1);

 if (FUNC_0(VAR_1))
  FUNC_10(VAR_1);

 FUNC_3(VAR_1);

 FUNC_9(VAR_1);

 FUNC_5(VAR_1, 1);

 if (FUNC_0(VAR_1))
  FUNC_13(VAR_1->firmware);

 return 0;
}
