
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drv_ctl_io {int dma_addr; int offset; } ;
struct TYPE_2__ {struct drv_ctl_io io; } ;
struct drv_ctl_info {int cmd; TYPE_1__ data; } ;
struct cnic_local {struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int (* drv_ctl ) (int ,struct drv_ctl_info*) ;} ;
struct cnic_dev {int netdev; struct cnic_local* cnic_priv; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct drv_ctl_info*,int ,int) ;
 int FUNC_1 (int ,struct drv_ctl_info*) ;

__attribute__((used)) static void FUNC_2(struct cnic_dev *VAR_1, u32 VAR_2, dma_addr_t VAR_3)
{
 struct cnic_local *VAR_4 = VAR_1->cnic_priv;
 struct cnic_eth_dev *VAR_5 = VAR_4->ethdev;
 struct drv_ctl_info VAR_6;
 struct drv_ctl_io *VAR_7 = &VAR_6.data.io;

 FUNC_0(&VAR_6, 0, sizeof(struct drv_ctl_info));
 VAR_6.cmd = VAR_0;
 VAR_7->offset = VAR_2;
 VAR_7->dma_addr = VAR_3;
 VAR_5->drv_ctl(VAR_1->netdev, &VAR_6);
}
