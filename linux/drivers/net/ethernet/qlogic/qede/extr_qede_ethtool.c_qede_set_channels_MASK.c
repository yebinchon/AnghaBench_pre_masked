
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int num_hwfns; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
struct qede_dev {int fp_num_tx; int fp_num_rx; int req_queues; int req_num_tx; int req_num_rx; int rss_ind_table; int rss_params_inited; TYPE_2__ dev_info; } ;
struct net_device {int dummy; } ;
struct ethtool_channels {int rx_count; int tx_count; int combined_count; scalar_t__ other_count; } ;


 int FUNC_0 (struct qede_dev*,int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qede_dev*) ;
 int FUNC_2 (struct qede_dev*) ;
 scalar_t__ FUNC_3 (struct qede_dev*) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int) ;
 struct qede_dev* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct qede_dev*,int *,int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4,
        struct ethtool_channels *VAR_5)
{
 struct qede_dev *VAR_6 = FUNC_5(VAR_4);
 u32 VAR_7;

 FUNC_0(VAR_6, (VAR_2 | VAR_1),
     "set-channels command parameters: rx = %d, tx = %d, other = %d, combined = %d\n",
     VAR_5->rx_count, VAR_5->tx_count,
     VAR_5->other_count, VAR_5->combined_count);

 VAR_7 = VAR_5->rx_count + VAR_5->tx_count +
   VAR_5->combined_count;


 if (VAR_5->other_count) {
  FUNC_0(VAR_6, (VAR_2 | VAR_1),
      "command parameters not supported\n");
  return -VAR_0;
 }

 if (!(VAR_5->combined_count || (VAR_5->rx_count &&
        VAR_5->tx_count))) {
  FUNC_0(VAR_6, (VAR_2 | VAR_1),
      "need to request at least one transmit and one receive channel\n");
  return -VAR_0;
 }

 if (VAR_7 > FUNC_1(VAR_6)) {
  FUNC_0(VAR_6, (VAR_2 | VAR_1),
      "requested channels = %d max supported channels = %d\n",
      VAR_7, FUNC_1(VAR_6));
  return -VAR_0;
 }


 if ((VAR_7 == FUNC_2(VAR_6)) &&
     (VAR_5->tx_count == VAR_6->fp_num_tx) &&
     (VAR_5->rx_count == VAR_6->fp_num_rx)) {
  FUNC_0(VAR_6, (VAR_2 | VAR_1),
      "No change in active parameters\n");
  return 0;
 }


 if ((VAR_7 % VAR_6->dev_info.common.num_hwfns) ||
     (VAR_5->tx_count % VAR_6->dev_info.common.num_hwfns) ||
     (VAR_5->rx_count % VAR_6->dev_info.common.num_hwfns)) {
  FUNC_0(VAR_6, (VAR_2 | VAR_1),
      "Number of channels must be divisible by %04x\n",
      VAR_6->dev_info.common.num_hwfns);
  return -VAR_0;
 }


 VAR_6->req_queues = VAR_7;
 VAR_6->req_num_tx = VAR_5->tx_count;
 VAR_6->req_num_rx = VAR_5->rx_count;

 if ((VAR_6->req_queues - VAR_6->req_num_tx) != FUNC_3(VAR_6)) {
  VAR_6->rss_params_inited &= ~VAR_3;
  FUNC_4(VAR_6->rss_ind_table, 0, sizeof(VAR_6->rss_ind_table));
 }

 FUNC_6(VAR_6, ((void*)0), 0);

 return 0;
}
