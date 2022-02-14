
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_card {TYPE_1__* gdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (struct qeth_card*,int ) ;
 int FUNC_3 (struct qeth_card*) ;

__attribute__((used)) static int FUNC_4(struct qeth_card *VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(VAR_1, 2, "setadprm");

 if (FUNC_2(VAR_1, VAR_0)) {
  VAR_2 = FUNC_3(VAR_1);
  if (VAR_2)
   FUNC_1(&VAR_1->gdev->dev, "Reading the adapter MAC"
    " address failed\n");
 }

 return VAR_2;
}
