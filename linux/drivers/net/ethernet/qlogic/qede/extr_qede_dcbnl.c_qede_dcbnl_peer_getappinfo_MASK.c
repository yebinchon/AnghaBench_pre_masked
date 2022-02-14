
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct qede_dev {int cdev; TYPE_2__* ops; } ;
struct net_device {int dummy; } ;
struct dcb_peer_app_info {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dcb; } ;
struct TYPE_3__ {int (* peer_getappinfo ) (int ,struct dcb_peer_app_info*,int *) ;} ;


 struct qede_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct dcb_peer_app_info*,int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
          struct dcb_peer_app_info *VAR_1,
          u16 *VAR_2)
{
 struct qede_dev *VAR_3 = FUNC_0(VAR_0);

 return VAR_3->ops->dcb->peer_getappinfo(VAR_3->cdev, VAR_1, VAR_2);
}
