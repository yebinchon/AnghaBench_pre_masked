
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drv_ctl_io {int data; int offset; } ;
struct TYPE_2__ {struct drv_ctl_io io; } ;
struct drv_ctl_info {int cmd; TYPE_1__ data; } ;
struct cnic_local {struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int (* drv_ctl ) (int ,struct drv_ctl_info*) ;} ;
struct cnic_dev {int netdev; struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct drv_ctl_info*,int ,int) ;
 int FUNC_1 (int ,struct drv_ctl_info*) ;

__attribute__((used)) static u32 FUNC_2(struct cnic_dev *VAR_1, u32 VAR_2)
{
 struct cnic_local *VAR_3 = VAR_1->cnic_priv;
 struct cnic_eth_dev *VAR_4 = VAR_3->ethdev;
 struct drv_ctl_info VAR_5;
 struct drv_ctl_io *VAR_6 = &VAR_5.data.io;

 FUNC_0(&VAR_5, 0, sizeof(struct drv_ctl_info));
 VAR_5.cmd = VAR_0;
 VAR_6->offset = VAR_2;
 VAR_4->drv_ctl(VAR_1->netdev, &VAR_5);
 return VAR_6->data;
}
