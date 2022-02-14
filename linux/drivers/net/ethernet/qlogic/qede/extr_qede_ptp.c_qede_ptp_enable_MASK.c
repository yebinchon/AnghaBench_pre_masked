
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int enable; int settime64; int gettime64; int adjtime; int adjfreq; scalar_t__ pps; scalar_t__ n_per_out; scalar_t__ n_ext_ts; scalar_t__ n_alarm; int max_adj; int name; int owner; } ;
struct qede_ptp {int clock; TYPE_4__ clock_info; int ops; struct qede_dev* edev; } ;
struct qede_dev {struct qede_ptp* ptp; TYPE_3__* pdev; TYPE_2__* ndev; TYPE_1__* ops; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {int ptp; } ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int FUNC_1 (struct qede_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct qede_ptp*) ;
 struct qede_ptp* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_4__*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct qede_dev*) ;
 int FUNC_7 (struct qede_dev*) ;
 int VAR_9 ;
 int FUNC_8 (struct qede_dev*,int) ;
 int VAR_10 ;
 int FUNC_9 (int ,int,char*,char*) ;

int FUNC_10(struct qede_dev *VAR_11, bool VAR_12)
{
 struct qede_ptp *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_4(sizeof(*VAR_13), VAR_3);
 if (!VAR_13) {
  FUNC_1(VAR_11, "Failed to allocate struct for PTP\n");
  return -VAR_2;
 }

 VAR_13->edev = VAR_11;
 VAR_13->ops = VAR_11->ops->ptp;
 if (!VAR_13->ops) {
  FUNC_1(VAR_11, "PTP enable failed\n");
  VAR_14 = -VAR_1;
  goto err1;
 }

 VAR_11->ptp = VAR_13;

 VAR_14 = FUNC_8(VAR_11, VAR_12);
 if (VAR_14)
  goto err1;

 FUNC_6(VAR_11);


 VAR_13->clock_info.owner = VAR_5;
 FUNC_9(VAR_13->clock_info.name, 16, "%s", VAR_11->ndev->name);
 VAR_13->clock_info.max_adj = VAR_4;
 VAR_13->clock_info.n_alarm = 0;
 VAR_13->clock_info.n_ext_ts = 0;
 VAR_13->clock_info.n_per_out = 0;
 VAR_13->clock_info.pps = 0;
 VAR_13->clock_info.adjfreq = VAR_6;
 VAR_13->clock_info.adjtime = VAR_7;
 VAR_13->clock_info.gettime64 = VAR_9;
 VAR_13->clock_info.settime64 = VAR_10;
 VAR_13->clock_info.enable = VAR_8;

 VAR_13->clock = FUNC_5(&VAR_13->clock_info, &VAR_11->pdev->dev);
 if (FUNC_2(VAR_13->clock)) {
  FUNC_0(VAR_11, "PTP clock registration failed\n");
  FUNC_7(VAR_11);
  VAR_14 = -VAR_0;
  goto err2;
 }

 return 0;

err1:
 FUNC_3(VAR_13);
err2:
 VAR_11->ptp = ((void*)0);

 return VAR_14;
}
