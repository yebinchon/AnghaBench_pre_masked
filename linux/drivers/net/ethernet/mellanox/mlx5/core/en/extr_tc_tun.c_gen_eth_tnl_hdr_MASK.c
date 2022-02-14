
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vlan_hdr {void* h_vlan_encapsulated_proto; void* h_vlan_TCI; } ;
struct net_device {int dev_addr; } ;
struct mlx5e_encap_entry {int h_dest; } ;
struct ethhdr {void* h_proto; int h_source; int h_dest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 void* FUNC_4 (struct net_device*) ;

__attribute__((used)) static char *FUNC_5(char *VAR_2, struct net_device *VAR_3,
        struct mlx5e_encap_entry *VAR_4,
        u16 VAR_5)
{
 struct ethhdr *VAR_6 = (struct ethhdr *)VAR_2;
 char *VAR_7;

 FUNC_0(VAR_6->h_dest, VAR_4->h_dest);
 FUNC_0(VAR_6->h_source, VAR_3->dev_addr);
 if (FUNC_2(VAR_3)) {
  struct vlan_hdr *VAR_8 = (struct vlan_hdr *)
     ((char *)VAR_6 + VAR_0);
  VAR_7 = (char *)VAR_8 + VAR_1;
  VAR_6->h_proto = FUNC_4(VAR_3);
  VAR_8->h_vlan_TCI = FUNC_1(FUNC_3(VAR_3));
  VAR_8->h_vlan_encapsulated_proto = FUNC_1(VAR_5);
 } else {
  VAR_6->h_proto = FUNC_1(VAR_5);
  VAR_7 = (char *)VAR_6 + VAR_0;
 }

 return VAR_7;
}
