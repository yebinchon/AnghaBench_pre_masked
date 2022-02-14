
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_ptp {int hw_ts_ioctl_called; int rx_filter; int tx_type; } ;
struct qede_dev {struct qede_ptp* ptp; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int rx_filter; int tx_type; scalar_t__ flags; } ;
typedef int config ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int FUNC_1 (struct qede_dev*,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_3 (int ,struct hwtstamp_config*,int) ;
 int FUNC_4 (struct qede_dev*) ;

int FUNC_5(struct qede_dev *VAR_4, struct ifreq *VAR_5)
{
 struct hwtstamp_config VAR_6;
 struct qede_ptp *VAR_7;
 int VAR_8;

 VAR_7 = VAR_4->ptp;
 if (!VAR_7)
  return -VAR_2;

 if (FUNC_2(&VAR_6, VAR_5->ifr_data, sizeof(VAR_6)))
  return -VAR_0;

 FUNC_1(VAR_4, VAR_3,
     "HWTSTAMP IOCTL: Requested tx_type = %d, requested rx_filters = %d\n",
     VAR_6.tx_type, VAR_6.rx_filter);

 if (VAR_6.flags) {
  FUNC_0(VAR_4, "config.flags is reserved for future use\n");
  return -VAR_1;
 }

 VAR_7->hw_ts_ioctl_called = 1;
 VAR_7->tx_type = VAR_6.tx_type;
 VAR_7->rx_filter = VAR_6.rx_filter;

 VAR_8 = FUNC_4(VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_6.rx_filter = VAR_7->rx_filter;

 return FUNC_3(VAR_5->ifr_data, &VAR_6,
       sizeof(VAR_6)) ? -VAR_0 : 0;
}
