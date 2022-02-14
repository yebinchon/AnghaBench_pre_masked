
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_card {TYPE_1__* gdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct qeth_card*,int ) ;
 int FUNC_4 (struct qeth_card*) ;

__attribute__((used)) static int FUNC_5(struct qeth_card *VAR_1)
{
 FUNC_1(VAR_1, 3, "strtipv6");

 if (!FUNC_3(VAR_1, VAR_0)) {
  FUNC_2(&VAR_1->gdev->dev,
   "IPv6 not supported on %s\n", FUNC_0(VAR_1));
  return 0;
 }
 return FUNC_4(VAR_1);
}
