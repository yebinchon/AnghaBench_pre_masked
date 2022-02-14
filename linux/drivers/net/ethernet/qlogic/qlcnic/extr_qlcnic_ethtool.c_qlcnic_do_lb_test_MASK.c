
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int data; } ;
struct qlcnic_recv_context {struct qlcnic_host_sds_ring* sds_rings; } ;
struct qlcnic_host_sds_ring {int dummy; } ;
struct qlcnic_adapter {TYPE_2__* pdev; TYPE_1__* ahw; int netdev; int mac_addr; struct qlcnic_recv_context* recv_ctx; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ diag_cnt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct qlcnic_host_sds_ring*) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*,int ) ;

int FUNC_9(struct qlcnic_adapter *VAR_5, u8 VAR_6)
{
 struct qlcnic_recv_context *VAR_7 = VAR_5->recv_ctx;
 struct qlcnic_host_sds_ring *VAR_8 = &VAR_7->sds_rings[0];
 struct sk_buff *VAR_9;
 int VAR_10, VAR_11, VAR_12 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_9 = FUNC_4(VAR_5->netdev, VAR_1);
  if (!VAR_9)
   break;
  FUNC_5(VAR_9->data, VAR_5->mac_addr);
  FUNC_8(VAR_9, VAR_1);
  VAR_5->ahw->diag_cnt = 0;
  FUNC_7(VAR_9, VAR_5->netdev);
  VAR_11 = 0;

  do {
   FUNC_3(VAR_3);
   FUNC_6(VAR_8);
   if (VAR_11++ > VAR_2)
    break;
  } while (!VAR_5->ahw->diag_cnt);

  FUNC_1(VAR_9);

  if (!VAR_5->ahw->diag_cnt)
   FUNC_2(&VAR_5->pdev->dev,
     "LB Test: packet #%d was not received\n",
     VAR_10 + 1);
  else
   VAR_12++;
 }
 if (VAR_12 != VAR_10) {
  FUNC_0(&VAR_5->pdev->dev,
   "LB Test: failed, TX[%d], RX[%d]\n", VAR_10, VAR_12);
  if (VAR_6 != VAR_0)
   FUNC_2(&VAR_5->pdev->dev,
     "WARNING: Please check loopback cable\n");
  return -1;
 }
 return 0;
}
