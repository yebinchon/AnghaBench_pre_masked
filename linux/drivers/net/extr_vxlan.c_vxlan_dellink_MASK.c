
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ remote_dev; } ;
struct vxlan_dev {TYPE_1__ default_dst; int next; } ;
struct net_device {int dummy; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int *) ;
 struct vxlan_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__,struct net_device*) ;
 int FUNC_3 (struct net_device*,struct list_head*) ;
 int FUNC_4 (struct vxlan_dev*,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0, struct list_head *VAR_1)
{
 struct vxlan_dev *VAR_2 = FUNC_1(VAR_0);

 FUNC_4(VAR_2, 1);

 FUNC_0(&VAR_2->next);
 FUNC_3(VAR_0, VAR_1);
 if (VAR_2->default_dst.remote_dev)
  FUNC_2(VAR_2->default_dst.remote_dev, VAR_0);
}
