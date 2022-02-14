
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_card {TYPE_1__* gdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (struct qeth_card*,int ) ;
 int FUNC_5 (struct qeth_card*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct qeth_card *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_2, 3, "ipaarp");

 if (!FUNC_4(VAR_2, VAR_0)) {
  FUNC_2(&VAR_2->gdev->dev,
   "ARP processing not supported on %s!\n",
   FUNC_0(VAR_2));
  return 0;
 }
 VAR_3 = FUNC_5(VAR_2, VAR_0,
       VAR_1, ((void*)0));
 if (VAR_3) {
  FUNC_3(&VAR_2->gdev->dev,
   "Starting ARP processing support for %s failed\n",
   FUNC_0(VAR_2));
 }
 return VAR_3;
}
