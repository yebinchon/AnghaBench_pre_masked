
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ open_when_online; scalar_t__ hwtrap; } ;
struct TYPE_4__ {int sniffer; } ;
struct qeth_card {int discipline_mutex; int conf_mutex; TYPE_2__ info; int state; TYPE_1__ options; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int kobj; } ;
struct ccwgroup_device {TYPE_3__ dev; } ;


 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct qeth_card*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct qeth_card*,int,char*) ;
 int FUNC_4 (struct qeth_card*,int,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 struct qeth_card* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct net_device*,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct qeth_card*,int*) ;
 int FUNC_16 (struct net_device*) ;
 scalar_t__ FUNC_17 (struct qeth_card*,int ) ;
 int FUNC_18 (struct qeth_card*) ;
 scalar_t__ FUNC_19 (struct qeth_card*,int ) ;
 int FUNC_20 (struct qeth_card*) ;
 int FUNC_21 (struct qeth_card*) ;
 int FUNC_22 (struct qeth_card*) ;
 int FUNC_23 (struct qeth_card*) ;
 int FUNC_24 (struct qeth_card*,int) ;
 int FUNC_25 (struct qeth_card*) ;
 int FUNC_26 (struct qeth_card*) ;
 int FUNC_27 (struct net_device*) ;
 int FUNC_28 (struct qeth_card*) ;
 int FUNC_29 (struct qeth_card*,int,int ) ;
 int FUNC_30 (struct qeth_card*) ;
 int FUNC_31 () ;
 int FUNC_32 () ;

__attribute__((used)) static int FUNC_33(struct ccwgroup_device *VAR_6)
{
 struct qeth_card *VAR_7 = FUNC_6(&VAR_6->dev);
 struct net_device *VAR_8 = VAR_7->dev;
 int VAR_9 = 0;
 bool VAR_10;

 FUNC_9(&VAR_7->discipline_mutex);
 FUNC_9(&VAR_7->conf_mutex);
 FUNC_3(VAR_7, 2, "setonlin");

 VAR_9 = FUNC_15(VAR_7, &VAR_10);
 if (VAR_9) {
  FUNC_4(VAR_7, 2, "2err%04x", VAR_9);
  VAR_9 = -VAR_2;
  goto out_remove;
 }

 if (FUNC_19(VAR_7, VAR_4)) {
  if (VAR_7->info.hwtrap &&
      FUNC_17(VAR_7, VAR_5))
   VAR_7->info.hwtrap = 0;
 } else
  VAR_7->info.hwtrap = 0;

 VAR_7->state = VAR_0;
 FUNC_28(VAR_7);


 FUNC_3(VAR_7, 2, "softsetp");

 VAR_9 = FUNC_21(VAR_7);
 if (VAR_9)
  FUNC_4(VAR_7, 2, "2err%04x", VAR_9);
 if (!VAR_7->options.sniffer) {
  VAR_9 = FUNC_25(VAR_7);
  if (VAR_9) {
   FUNC_4(VAR_7, 2, "3err%d", VAR_9);
   goto out_remove;
  }
  VAR_9 = FUNC_22(VAR_7);
  if (VAR_9)
   FUNC_4(VAR_7, 2, "4err%04x", VAR_9);
  VAR_9 = FUNC_23(VAR_7);
  if (VAR_9)
   FUNC_4(VAR_7, 2, "5err%04x", VAR_9);
 }

 VAR_9 = FUNC_18(VAR_7);
 if (VAR_9) {
  FUNC_4(VAR_7, 2, "6err%d", VAR_9);
  VAR_9 = -VAR_2;
  goto out_remove;
 }
 VAR_7->state = VAR_1;

 FUNC_29(VAR_7, 0xffffffff, 0);
 FUNC_20(VAR_7);

 if (!FUNC_27(VAR_8)) {
  VAR_9 = FUNC_24(VAR_7, VAR_10);
  if (VAR_9)
   goto out_remove;
 } else {
  FUNC_31();
  if (VAR_10)
   FUNC_12(VAR_8);
  else
   FUNC_11(VAR_8);

  FUNC_13(VAR_8);
  FUNC_16(VAR_8);

  if (VAR_7->info.open_when_online) {
   VAR_7->info.open_when_online = 0;
   FUNC_7(VAR_8, ((void*)0));
  }
  FUNC_32();
 }
 FUNC_30(VAR_7);

 FUNC_8(&VAR_6->dev.kobj, VAR_3);
 FUNC_10(&VAR_7->conf_mutex);
 FUNC_10(&VAR_7->discipline_mutex);
 return 0;
out_remove:
 FUNC_26(VAR_7);
 FUNC_5(FUNC_0(VAR_7));
 FUNC_5(FUNC_2(VAR_7));
 FUNC_5(FUNC_1(VAR_7));
 FUNC_14(FUNC_0(VAR_7));

 FUNC_10(&VAR_7->conf_mutex);
 FUNC_10(&VAR_7->discipline_mutex);
 return VAR_9;
}
