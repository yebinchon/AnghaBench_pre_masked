
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;
typedef enum qeth_discipline_id { ____Placeholder_qeth_discipline_id } qeth_discipline_id ;


 scalar_t__ FUNC_0 (struct qeth_card*) ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 scalar_t__ FUNC_2 (struct qeth_card*) ;
 scalar_t__ FUNC_3 (struct qeth_card*) ;
 int FUNC_4 (struct qeth_card*,int,char*) ;


 int VAR_0 ;
 int FUNC_5 (struct qeth_card*) ;

__attribute__((used)) static enum qeth_discipline_id FUNC_6(struct qeth_card *VAR_1)
{
 enum qeth_discipline_id VAR_2 = VAR_0;

 if (FUNC_1(VAR_1) || FUNC_2(VAR_1))
  VAR_2 = 129;
 else if (FUNC_3(VAR_1))
  VAR_2 = FUNC_0(VAR_1) ? 128 :
          FUNC_5(VAR_1);

 switch (VAR_2) {
 case 129:
  FUNC_4(VAR_1, 3, "force l2");
  break;
 case 128:
  FUNC_4(VAR_1, 3, "force l3");
  break;
 default:
  FUNC_4(VAR_1, 3, "force no");
 }

 return VAR_2;
}
