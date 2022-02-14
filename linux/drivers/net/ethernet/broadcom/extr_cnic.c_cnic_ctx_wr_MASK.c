
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct drv_ctl_io {void* data; void* offset; void* cid_addr; } ;
struct TYPE_2__ {struct drv_ctl_io io; } ;
struct drv_ctl_info {int cmd; TYPE_1__ data; } ;
struct cnic_local {struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int (* drv_ctl ) (int ,struct drv_ctl_info*) ;} ;
struct cnic_dev {int netdev; struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct drv_ctl_info*,int ,int) ;
 int FUNC_1 (int ,struct drv_ctl_info*) ;

__attribute__((used)) static void FUNC_2(struct cnic_dev *VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct cnic_local *VAR_5 = VAR_1->cnic_priv;
 struct cnic_eth_dev *VAR_6 = VAR_5->ethdev;
 struct drv_ctl_info VAR_7;
 struct drv_ctl_io *VAR_8 = &VAR_7.data.io;

 FUNC_0(&VAR_7, 0, sizeof(struct drv_ctl_info));
 VAR_7.cmd = VAR_0;
 VAR_8->cid_addr = VAR_2;
 VAR_8->offset = VAR_3;
 VAR_8->data = VAR_4;
 VAR_6->drv_ctl(VAR_1->netdev, &VAR_7);
}
