
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct ena_admin_host_info {int* supported_network_features; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct ena_admin_host_info *VAR_0,
     struct net_device *VAR_1)
{
 VAR_0->supported_network_features[0] =
  VAR_1->features & FUNC_0(31, 0);
 VAR_0->supported_network_features[1] =
  (VAR_1->features & FUNC_0(63, 32)) >> 32;
}
