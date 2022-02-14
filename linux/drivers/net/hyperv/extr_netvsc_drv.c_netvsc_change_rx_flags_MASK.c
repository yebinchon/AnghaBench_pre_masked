
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_context {int vf_netdev; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int) ;
 struct net_device_context* FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2, int VAR_3)
{
 struct net_device_context *VAR_4 = FUNC_2(VAR_2);
 struct net_device *VAR_5 = FUNC_3(VAR_4->vf_netdev);
 int VAR_6;

 if (!VAR_5)
  return;

 if (VAR_3 & VAR_1) {
  VAR_6 = (VAR_2->flags & VAR_1) ? 1 : -1;
  FUNC_1(VAR_5, VAR_6);
 }

 if (VAR_3 & VAR_0) {
  VAR_6 = (VAR_2->flags & VAR_0) ? 1 : -1;
  FUNC_0(VAR_5, VAR_6);
 }
}
