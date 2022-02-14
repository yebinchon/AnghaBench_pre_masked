
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qede_ptp {int tx_type; int rx_filter; int lock; TYPE_1__* ops; int hw_ts_ioctl_called; } ;
struct qede_dev {int cdev; int flags; struct qede_ptp* ptp; } ;
typedef enum qed_ptp_hwtstamp_tx_type { ____Placeholder_qed_ptp_hwtstamp_tx_type } qed_ptp_hwtstamp_tx_type ;
typedef enum qed_ptp_filter_type { ____Placeholder_qed_ptp_filter_type } qed_ptp_filter_type ;
struct TYPE_2__ {int (* cfg_filters ) (int ,int,int) ;} ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int FUNC_1 (struct qede_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int,int) ;

__attribute__((used)) static int FUNC_7(struct qede_dev *VAR_15)
{
 enum qed_ptp_hwtstamp_tx_type VAR_16 = VAR_14;
 enum qed_ptp_filter_type VAR_17 = VAR_4;
 struct qede_ptp *VAR_18 = VAR_15->ptp;

 if (!VAR_18)
  return -VAR_0;

 if (!VAR_18->hw_ts_ioctl_called) {
  FUNC_1(VAR_15, "TS IOCTL not called\n");
  return 0;
 }

 switch (VAR_18->tx_type) {
 case 129:
  FUNC_3(VAR_2, &VAR_15->flags);
  VAR_16 = VAR_14;
  break;

 case 130:
  FUNC_2(VAR_2, &VAR_15->flags);
  VAR_16 = VAR_13;
  break;

 case 128:
  FUNC_0(VAR_15, "One-step timestamping is not supported\n");
  return -VAR_1;
 }

 FUNC_4(&VAR_18->lock);
 switch (VAR_18->rx_filter) {
 case 145:
  VAR_17 = VAR_4;
  break;
 case 146:
 case 131:
 case 144:
  VAR_18->rx_filter = 145;
  VAR_17 = VAR_3;
  break;
 case 142:
  VAR_18->rx_filter = 142;
  VAR_17 = VAR_5;
  break;
 case 141:
 case 143:
  VAR_18->rx_filter = 142;

  VAR_17 = VAR_6;
  break;
 case 134:
  VAR_18->rx_filter = 134;
  VAR_17 = VAR_11;
  break;
 case 133:
 case 135:
  VAR_18->rx_filter = 134;

  VAR_17 = VAR_12;
  break;
 case 137:
  VAR_18->rx_filter = 137;
  VAR_17 = VAR_9;
  break;
 case 136:
 case 138:
  VAR_18->rx_filter = 137;

  VAR_17 = VAR_10;
  break;
 case 139:
  VAR_18->rx_filter = 139;
  VAR_17 = VAR_7;
  break;
 case 132:
 case 140:
  VAR_18->rx_filter = 139;

  VAR_17 = VAR_8;
  break;
 }

 VAR_18->ops->cfg_filters(VAR_15->cdev, VAR_17, VAR_16);

 FUNC_5(&VAR_18->lock);

 return 0;
}
