
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iavf_adapter {int num_active_queues; int num_req_queues; TYPE_2__* pdev; scalar_t__ num_tc; TYPE_1__* vf_res; } ;
struct ethtool_channels {int combined_count; scalar_t__ other_count; scalar_t__ tx_count; scalar_t__ rx_count; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int vf_cap_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct iavf_adapter*,int) ;
 struct iavf_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5,
        struct ethtool_channels *VAR_6)
{
 struct iavf_adapter *VAR_7 = FUNC_2(VAR_5);
 int VAR_8 = VAR_6->combined_count;

 if (VAR_8 != VAR_7->num_active_queues &&
     !(VAR_7->vf_res->vf_cap_flags &
       VAR_4)) {
  FUNC_0(&VAR_7->pdev->dev, "PF is not capable of queue negotiation.\n");
  return -VAR_0;
 }

 if ((VAR_7->vf_res->vf_cap_flags & VAR_3) &&
     VAR_7->num_tc) {
  FUNC_0(&VAR_7->pdev->dev, "Cannot set channels since ADq is enabled.\n");
  return -VAR_0;
 }




 if (VAR_8 <= 0 || VAR_8 > VAR_1)
  return -VAR_0;

 if (VAR_6->rx_count || VAR_6->tx_count || VAR_6->other_count != VAR_2)
  return -VAR_0;

 VAR_7->num_req_queues = VAR_8;
 return FUNC_1(VAR_7, VAR_8);
}
