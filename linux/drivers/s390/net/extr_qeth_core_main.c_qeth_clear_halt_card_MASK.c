
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;


 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(VAR_0, 3, "clhacrd");

 if (VAR_1)
  VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  return VAR_2;
 return FUNC_1(VAR_0);
}
