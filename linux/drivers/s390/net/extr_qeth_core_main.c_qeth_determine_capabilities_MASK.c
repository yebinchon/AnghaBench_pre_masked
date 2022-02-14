
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cq; } ;
struct TYPE_6__ {int qfmt; int qdioac1; int qdioac2; int qdioac3; int icnt; } ;
struct qeth_card {TYPE_2__ options; TYPE_1__* gdev; TYPE_3__ ssqd; } ;
struct ccw_device {int online; } ;
struct TYPE_4__ {int dev; } ;


 struct ccw_device* FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct qeth_card*,int,char*) ;
 int FUNC_3 (struct qeth_card*,int,char*,int) ;
 int VAR_3 ;
 int FUNC_4 (int,char*,int ,int) ;
 int FUNC_5 (struct ccw_device*) ;
 int FUNC_6 (struct ccw_device*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (struct ccw_device*,TYPE_3__*) ;
 int FUNC_9 (struct qeth_card*) ;

__attribute__((used)) static void FUNC_10(struct qeth_card *VAR_4)
{
 int VAR_5;
 struct ccw_device *VAR_6;
 int VAR_7 = 0;

 FUNC_2(VAR_4, 2, "detcapab");
 VAR_6 = FUNC_0(VAR_4);
 if (!VAR_6->online) {
  VAR_7 = 1;
  VAR_5 = FUNC_6(VAR_6);
  if (VAR_5) {
   FUNC_3(VAR_4, 2, "3err%d", VAR_5);
   goto out;
  }
 }

 VAR_5 = FUNC_9(VAR_4);
 if (VAR_5) {
  FUNC_4(2, "qeth_read_conf_data on device %x returned %i\n",
     FUNC_1(VAR_4), VAR_5);
  FUNC_3(VAR_4, 2, "5err%d", VAR_5);
  goto out_offline;
 }

 VAR_5 = FUNC_8(VAR_6, &VAR_4->ssqd);
 if (VAR_5)
  FUNC_3(VAR_4, 2, "6err%d", VAR_5);

 FUNC_3(VAR_4, 2, "qfmt%d", VAR_4->ssqd.qfmt);
 FUNC_3(VAR_4, 2, "ac1:%02x", VAR_4->ssqd.qdioac1);
 FUNC_3(VAR_4, 2, "ac2:%04x", VAR_4->ssqd.qdioac2);
 FUNC_3(VAR_4, 2, "ac3:%04x", VAR_4->ssqd.qdioac3);
 FUNC_3(VAR_4, 2, "icnt%d", VAR_4->ssqd.icnt);
 if (!((VAR_4->ssqd.qfmt != VAR_2) ||
     ((VAR_4->ssqd.qdioac1 & VAR_0) == 0) ||
     ((VAR_4->ssqd.qdioac3 & VAR_1) == 0))) {
  FUNC_7(&VAR_4->gdev->dev,
   "Completion Queueing supported\n");
 } else {
  VAR_4->options.cq = VAR_3;
 }


out_offline:
 if (VAR_7 == 1)
  FUNC_5(VAR_6);
out:
 return;
}
