
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ cq; } ;
struct TYPE_8__ {int hwtrap; int open_when_online; } ;
struct qeth_card {int discipline_mutex; int conf_mutex; TYPE_3__* dev; TYPE_2__ options; TYPE_1__ info; } ;
struct TYPE_11__ {int kobj; } ;
struct ccwgroup_device {TYPE_5__ dev; } ;
struct TYPE_10__ {int flags; } ;


 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct qeth_card*,int,char*) ;
 int FUNC_4 (struct qeth_card*,int,char*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*) ;
 struct qeth_card* FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct qeth_card*,int ) ;
 int FUNC_16 (struct qeth_card*) ;
 int FUNC_17 () ;
 int FUNC_18 () ;

__attribute__((used)) static int FUNC_19(struct ccwgroup_device *VAR_5,
   int VAR_6)
{
 struct qeth_card *VAR_7 = FUNC_8(&VAR_5->dev);
 int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;

 FUNC_10(&VAR_7->discipline_mutex);
 FUNC_10(&VAR_7->conf_mutex);
 FUNC_3(VAR_7, 3, "setoffl");

 if ((!VAR_6 && VAR_7->info.hwtrap) || VAR_7->info.hwtrap == 2) {
  FUNC_15(VAR_7, VAR_4);
  VAR_7->info.hwtrap = 1;
 }

 FUNC_17();
 VAR_7->info.open_when_online = VAR_7->dev->flags & VAR_0;
 FUNC_7(VAR_7->dev);
 FUNC_13(VAR_7->dev);
 FUNC_12(VAR_7->dev);
 FUNC_18();

 FUNC_16(VAR_7);
 if (VAR_7->options.cq == VAR_3) {
  FUNC_17();
  FUNC_5(VAR_2, VAR_7->dev);
  FUNC_18();
 }
 VAR_8 = FUNC_6(FUNC_0(VAR_7));
 VAR_9 = FUNC_6(FUNC_2(VAR_7));
 VAR_10 = FUNC_6(FUNC_1(VAR_7));
 if (!VAR_8)
  VAR_8 = (VAR_9) ? VAR_9 : VAR_10;
 if (VAR_8)
  FUNC_4(VAR_7, 2, "1err%d", VAR_8);
 FUNC_14(FUNC_0(VAR_7));


 FUNC_9(&VAR_5->dev.kobj, VAR_1);
 FUNC_11(&VAR_7->conf_mutex);
 FUNC_11(&VAR_7->discipline_mutex);
 return 0;
}
