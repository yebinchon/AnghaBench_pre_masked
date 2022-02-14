
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_dev {int dummy; } ;
struct qed_chain {int mode; } ;





 int FUNC_0 (struct qed_dev*,struct qed_chain*) ;
 int FUNC_1 (struct qed_dev*,struct qed_chain*) ;
 int FUNC_2 (struct qed_dev*,struct qed_chain*) ;

void FUNC_3(struct qed_dev *VAR_0, struct qed_chain *VAR_1)
{
 switch (VAR_1->mode) {
 case 130:
  FUNC_0(VAR_0, VAR_1);
  break;
 case 128:
  FUNC_2(VAR_0, VAR_1);
  break;
 case 129:
  FUNC_1(VAR_0, VAR_1);
  break;
 }
}
