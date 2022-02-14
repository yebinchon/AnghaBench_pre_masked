
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; struct airo_info* ml_priv; } ;
struct TYPE_4__ {int macAddr; } ;
struct airo_info {TYPE_3__* wifidev; TYPE_2__* dev; int flags; TYPE_1__ config; } ;
struct TYPE_6__ {int dev_addr; } ;
struct TYPE_5__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct airo_info*,int) ;
 int FUNC_1 (struct airo_info*,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct airo_info*,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct airo_info*,int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, void *VAR_2)
{
 struct airo_info *VAR_3 = VAR_1->ml_priv;
 struct sockaddr *VAR_4 = VAR_2;

 FUNC_3(VAR_3, 1);
 FUNC_2 (VAR_3->config.macAddr, VAR_4->sa_data, VAR_1->addr_len);
 FUNC_4 (VAR_0, &VAR_3->flags);
 FUNC_0(VAR_3, 1);
 FUNC_5 (VAR_3, 1);
 FUNC_1(VAR_3, 1);
 FUNC_2 (VAR_3->dev->dev_addr, VAR_4->sa_data, VAR_1->addr_len);
 if (VAR_3->wifidev)
  FUNC_2 (VAR_3->wifidev->dev_addr, VAR_4->sa_data, VAR_1->addr_len);
 return 0;
}
