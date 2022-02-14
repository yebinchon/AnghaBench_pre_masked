
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int topo; } ;
struct switchtec_ntb {int* direct_mw_to_bar; int nr_direct_mw; int peer_partition; int nr_rsvd_luts; scalar_t__ mmio_xlink_win; scalar_t__ mmio_peer_dbmsg; TYPE_2__* stdev; int mmio_peer_ctrl; int mmio_self_ctrl; TYPE_1__ ntb; } ;
struct ntb_dbmsg_regs {int dummy; } ;
struct TYPE_4__ {int pdev; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct switchtec_ntb*,int ,int const,int,int) ;
 int FUNC_1 (struct switchtec_ntb*,int*) ;
 int FUNC_2 (struct switchtec_ntb*) ;
 int FUNC_3 (struct switchtec_ntb*) ;
 int FUNC_4 (struct switchtec_ntb*,int const,int*,int) ;
 int FUNC_5 (struct switchtec_ntb*,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_9(struct switchtec_ntb *VAR_6)
{
 int VAR_7;
 int VAR_8 = VAR_6->direct_mw_to_bar[0];
 const int VAR_9 = 1;
 u64 VAR_10[6];
 u64 VAR_11;
 int VAR_12;
 int VAR_13;

 if (!FUNC_3(VAR_6))
  return 0;

 FUNC_7(&VAR_6->stdev->dev, "Using crosslink configuration\n");
 VAR_6->ntb.topo = VAR_3;

 VAR_13 = FUNC_1(VAR_6, VAR_10);
 if (VAR_13 < VAR_6->nr_direct_mw + 1) {
  FUNC_6(&VAR_6->stdev->dev,
   "Error enumerating crosslink partition\n");
  return -VAR_0;
 }

 VAR_11 = (VAR_10[0] + VAR_4 +
  VAR_5 +
  sizeof(struct ntb_dbmsg_regs) * VAR_6->peer_partition);

 VAR_12 = VAR_11 & (VAR_2 - 1);
 VAR_11 -= VAR_12;

 VAR_7 = FUNC_0(VAR_6, VAR_6->mmio_self_ctrl, VAR_9,
     VAR_6->peer_partition, VAR_11);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_4(VAR_6, VAR_9, &VAR_10[1],
     VAR_13 - 1);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_6, VAR_6->mmio_peer_ctrl);
 if (VAR_7)
  return VAR_7;

 VAR_6->mmio_xlink_win = FUNC_8(VAR_6->stdev->pdev, VAR_8,
      VAR_2, VAR_2);
 if (!VAR_6->mmio_xlink_win) {
  VAR_7 = -VAR_1;
  return VAR_7;
 }

 VAR_6->mmio_peer_dbmsg = VAR_6->mmio_xlink_win + VAR_12;
 VAR_6->nr_rsvd_luts++;

 FUNC_2(VAR_6);

 return 0;
}
