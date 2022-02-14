
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dev; } ;
struct inet6_dev {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 struct inet6_dev* FUNC_1 (int ) ;
 int FUNC_2 (struct inet6_dev*) ;
 int FUNC_3 (struct qeth_card*,int ) ;
 int FUNC_4 (struct qeth_card*,struct inet6_dev*) ;
 int FUNC_5 (struct qeth_card*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct qeth_card *VAR_1)
{
 struct inet6_dev *VAR_2;

 FUNC_0(VAR_1, 4, "chkmcv6");

 if (!FUNC_3(VAR_1, VAR_0))
  return ;
 VAR_2 = FUNC_1(VAR_1->dev);
 if (!VAR_2)
  return;

 FUNC_6();
 FUNC_8(&VAR_2->lock);
 FUNC_4(VAR_1, VAR_2);
 FUNC_5(VAR_1);
 FUNC_9(&VAR_2->lock);
 FUNC_7();
 FUNC_2(VAR_2);
}
