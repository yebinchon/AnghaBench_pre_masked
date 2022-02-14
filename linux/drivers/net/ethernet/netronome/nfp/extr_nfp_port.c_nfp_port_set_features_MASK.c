
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_port {scalar_t__ tc_offload_cnt; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct nfp_port* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_2, netdev_features_t VAR_3)
{
 struct nfp_port *VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  return 0;

 if ((VAR_2->features & VAR_1) > (VAR_3 & VAR_1) &&
     VAR_4->tc_offload_cnt) {
  FUNC_0(VAR_2, "Cannot disable HW TC offload while offloads active\n");
  return -VAR_0;
 }

 return 0;
}
