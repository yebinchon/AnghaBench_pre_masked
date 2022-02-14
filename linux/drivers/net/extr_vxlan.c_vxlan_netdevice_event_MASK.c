
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_net {int dummy; } ;
struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 struct vxlan_net* FUNC_1 (int ,int ) ;
 struct net_device* FUNC_2 (void*) ;
 int FUNC_3 (struct vxlan_net*,struct net_device*) ;
 int VAR_5 ;
 int FUNC_4 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_6,
     unsigned long VAR_7, void *VAR_8)
{
 struct net_device *VAR_9 = FUNC_2(VAR_8);
 struct vxlan_net *VAR_10 = FUNC_1(FUNC_0(VAR_9), VAR_5);

 if (VAR_7 == VAR_3) {
  FUNC_4(VAR_9, 0);
  FUNC_3(VAR_10, VAR_9);
 } else if (VAR_7 == VAR_0) {
  FUNC_4(VAR_9, 1);
 } else if (VAR_7 == VAR_2 ||
     VAR_7 == VAR_1) {
  FUNC_4(VAR_9, VAR_7 == VAR_2);
 }

 return VAR_4;
}
