
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ isolation; } ;
struct qeth_card {TYPE_1__* gdev; TYPE_2__ options; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 scalar_t__ FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (struct qeth_card*,int,char*) ;
 int FUNC_4 (int,char*,int,int ) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (struct qeth_card*,int ) ;
 int FUNC_7 (struct qeth_card*,scalar_t__,int) ;

int FUNC_8(struct qeth_card *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 FUNC_3(VAR_3, 4, "setactlo");

 if ((FUNC_1(VAR_3) || FUNC_2(VAR_3)) &&
     FUNC_6(VAR_3, VAR_1)) {
  VAR_5 = FUNC_7(VAR_3,
   VAR_3->options.isolation, VAR_4);
  if (VAR_5) {
   FUNC_4(3, "IPA(SET_ACCESS_CTRL(%d) on device %x: sent failed\n",
      VAR_5, FUNC_0(VAR_3));
   VAR_5 = -VAR_0;
  }
 } else if (VAR_3->options.isolation != VAR_2) {
  VAR_3->options.isolation = VAR_2;

  FUNC_5(&VAR_3->gdev->dev, "Adapter does not "
   "support QDIO data connection isolation\n");
  VAR_5 = -VAR_0;
 }
 return VAR_5;
}
