
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_ethhdr {scalar_t__ h_vlan_proto; int h_vlan_encapsulated_proto; } ;
struct net_device {int dummy; } ;
struct ethhdr {int h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5, void *VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9;


 if (((struct vlan_ethhdr *)VAR_6)->h_vlan_proto == FUNC_0(VAR_2)) {
  VAR_9 = FUNC_1(((struct vlan_ethhdr *)VAR_6)->h_vlan_encapsulated_proto);
  VAR_8 = VAR_4;
 } else {
  VAR_9 = FUNC_1(((struct ethhdr *)VAR_6)->h_proto);
  VAR_8 = VAR_1;
 }
 if (VAR_9 > VAR_0)
  return VAR_7;

 VAR_9 += VAR_8;

 if (VAR_7 > VAR_3) {
  if (VAR_7 >= VAR_9) {



   return VAR_9;
  } else {



   return -1;
  }
 } else {

  if (VAR_9 > VAR_3) {
   return -1;
  }
  return VAR_7;
 }
}
