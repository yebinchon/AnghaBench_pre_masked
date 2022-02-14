
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct drv_ctl_l2_ring {void* client_id; void* cid; } ;
struct TYPE_2__ {struct drv_ctl_l2_ring ring; } ;
struct drv_ctl_info {int cmd; TYPE_1__ data; } ;
struct cnic_local {struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int (* drv_ctl ) (int ,struct drv_ctl_info*) ;} ;
struct cnic_dev {int netdev; struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drv_ctl_info*,int ,int) ;
 int FUNC_1 (int ,struct drv_ctl_info*) ;

__attribute__((used)) static void FUNC_2(struct cnic_dev *VAR_2, u32 VAR_3, u32 VAR_4, int VAR_5)
{
 struct cnic_local *VAR_6 = VAR_2->cnic_priv;
 struct cnic_eth_dev *VAR_7 = VAR_6->ethdev;
 struct drv_ctl_info VAR_8;
 struct drv_ctl_l2_ring *VAR_9 = &VAR_8.data.ring;

 FUNC_0(&VAR_8, 0, sizeof(struct drv_ctl_info));
 if (VAR_5)
  VAR_8.cmd = VAR_0;
 else
  VAR_8.cmd = VAR_1;

 VAR_9->cid = VAR_3;
 VAR_9->client_id = VAR_4;
 VAR_7->drv_ctl(VAR_2->netdev, &VAR_8);
}
