
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_card {TYPE_1__* gdev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct qeth_card*,int,struct qeth_card**,int) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct qeth_card*,int ) ;
 int FUNC_7 (struct qeth_card*,int ) ;
 int FUNC_8 (struct qeth_card*,int ) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(void *VAR_1)
{
 struct qeth_card *VAR_2;
 int VAR_3 = 0;

 VAR_2 = (struct qeth_card *) VAR_1;
 FUNC_1(VAR_2, 2, "recover1");
 FUNC_0(VAR_2, 2, &VAR_2, sizeof(void *));
 if (!FUNC_8(VAR_2, VAR_0))
  return 0;
 FUNC_1(VAR_2, 2, "recover2");
 FUNC_5(&VAR_2->gdev->dev,
  "A recovery process has been started for the device\n");
 FUNC_2(VAR_2->gdev, 1);
 VAR_3 = FUNC_9(VAR_2->gdev);
 if (!VAR_3)
  FUNC_4(&VAR_2->gdev->dev,
   "Device successfully recovered!\n");
 else {
  FUNC_3(VAR_2->gdev);
  FUNC_5(&VAR_2->gdev->dev, "The qeth device driver "
    "failed to recover an error on the device\n");
 }
 FUNC_7(VAR_2, VAR_0);
 FUNC_6(VAR_2, VAR_0);
 return 0;
}
