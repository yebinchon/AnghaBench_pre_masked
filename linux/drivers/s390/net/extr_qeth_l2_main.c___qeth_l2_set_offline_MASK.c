
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int hwtrap; int open_when_online; } ;
struct qeth_card {int discipline_mutex; int conf_mutex; TYPE_2__* dev; TYPE_1__ info; } ;
struct TYPE_8__ {int kobj; } ;
struct ccwgroup_device {TYPE_4__ dev; } ;
struct TYPE_7__ {int flags; } ;


 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct qeth_card*,int,char*) ;
 int FUNC_4 (struct qeth_card*,int,char*,int) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 struct qeth_card* FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct qeth_card*,int ) ;
 int FUNC_15 (struct qeth_card*) ;
 int FUNC_16 () ;
 int FUNC_17 () ;

__attribute__((used)) static int FUNC_18(struct ccwgroup_device *VAR_3,
     int VAR_4)
{
 struct qeth_card *VAR_5 = FUNC_7(&VAR_3->dev);
 int VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;

 FUNC_9(&VAR_5->discipline_mutex);
 FUNC_9(&VAR_5->conf_mutex);
 FUNC_3(VAR_5, 3, "setoffl");

 if ((!VAR_4 && VAR_5->info.hwtrap) || VAR_5->info.hwtrap == 2) {
  FUNC_14(VAR_5, VAR_2);
  VAR_5->info.hwtrap = 1;
 }

 FUNC_16();
 VAR_5->info.open_when_online = VAR_5->dev->flags & VAR_0;
 FUNC_6(VAR_5->dev);
 FUNC_12(VAR_5->dev);
 FUNC_11(VAR_5->dev);
 FUNC_17();

 FUNC_15(VAR_5);
 VAR_6 = FUNC_5(FUNC_0(VAR_5));
 VAR_7 = FUNC_5(FUNC_2(VAR_5));
 VAR_8 = FUNC_5(FUNC_1(VAR_5));
 if (!VAR_6)
  VAR_6 = (VAR_7) ? VAR_7 : VAR_8;
 if (VAR_6)
  FUNC_4(VAR_5, 2, "1err%d", VAR_6);
 FUNC_13(FUNC_0(VAR_5));


 FUNC_8(&VAR_3->dev.kobj, VAR_1);
 FUNC_10(&VAR_5->conf_mutex);
 FUNC_10(&VAR_5->discipline_mutex);
 return 0;
}
