
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_card {TYPE_1__* dev; TYPE_2__* gdev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (struct qeth_card*,int ) ;
 int FUNC_5 (struct qeth_card*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct qeth_card *VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_4, 3, "stmcast");

 if (!FUNC_4(VAR_4, VAR_3)) {
  FUNC_2(&VAR_4->gdev->dev,
   "Multicast not supported on %s\n",
   FUNC_0(VAR_4));
  return -VAR_0;
 }

 VAR_5 = FUNC_5(VAR_4, VAR_3,
       VAR_2, ((void*)0));
 if (VAR_5) {
  FUNC_3(&VAR_4->gdev->dev,
   "Starting multicast support for %s failed\n",
   FUNC_0(VAR_4));
 } else {
  FUNC_2(&VAR_4->gdev->dev, "Multicast enabled\n");
  VAR_4->dev->flags |= VAR_1;
 }
 return VAR_5;
}
