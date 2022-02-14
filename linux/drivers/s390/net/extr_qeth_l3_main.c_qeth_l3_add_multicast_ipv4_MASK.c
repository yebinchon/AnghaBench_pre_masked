
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dev; } ;
struct in_device {int dummy; } ;


 int FUNC_0 (struct qeth_card*,int,char*) ;
 struct in_device* FUNC_1 (int ) ;
 int FUNC_2 (struct qeth_card*,struct in_device*) ;
 int FUNC_3 (struct qeth_card*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct qeth_card *VAR_0)
{
 struct in_device *VAR_1;

 FUNC_0(VAR_0, 4, "chkmcv4");

 FUNC_4();
 VAR_1 = FUNC_1(VAR_0->dev);
 if (VAR_1 == ((void*)0))
  goto unlock;
 FUNC_2(VAR_0, VAR_1);
 FUNC_3(VAR_0);
unlock:
 FUNC_5();
}
