
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxlan_net {int dummy; } ;
struct TYPE_2__ {int remote_ip; } ;
struct vxlan_dev {int age_timer; TYPE_1__ default_dst; int net; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct vxlan_net* FUNC_1 (int ,int ) ;
 struct vxlan_dev* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct vxlan_dev*,int) ;
 int FUNC_5 (struct vxlan_net*,struct vxlan_dev*) ;
 int FUNC_6 (struct vxlan_dev*) ;
 int VAR_0 ;
 int FUNC_7 (struct vxlan_dev*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1)
{
 struct vxlan_dev *VAR_2 = FUNC_2(VAR_1);
 struct vxlan_net *VAR_3 = FUNC_1(VAR_2->net, VAR_0);
 int VAR_4 = 0;

 if (FUNC_3(&VAR_2->default_dst.remote_ip) &&
     !FUNC_5(VAR_3, VAR_2))
  VAR_4 = FUNC_6(VAR_2);

 FUNC_0(&VAR_2->age_timer);

 FUNC_4(VAR_2, 0);
 FUNC_7(VAR_2);

 return VAR_4;
}
