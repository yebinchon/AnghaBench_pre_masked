
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int credit_count; } ;
struct TYPE_4__ {TYPE_1__ credit; } ;
struct drv_ctl_info {int cmd; TYPE_2__ data; } ;
struct cnic_local {struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int (* drv_ctl ) (int ,struct drv_ctl_info*) ;} ;
struct cnic_dev {int netdev; struct cnic_local* cnic_priv; } ;


 int FUNC_0 (struct drv_ctl_info*,int ,int) ;
 int FUNC_1 (int ,struct drv_ctl_info*) ;

__attribute__((used)) static void FUNC_2(struct cnic_dev *VAR_0, int VAR_1, u32 VAR_2)
{
 struct cnic_local *VAR_3 = VAR_0->cnic_priv;
 struct cnic_eth_dev *VAR_4 = VAR_3->ethdev;
 struct drv_ctl_info VAR_5;

 FUNC_0(&VAR_5, 0, sizeof(struct drv_ctl_info));
 VAR_5.cmd = VAR_1;
 VAR_5.data.credit.credit_count = VAR_2;
 VAR_4->drv_ctl(VAR_0->netdev, &VAR_5);
}
