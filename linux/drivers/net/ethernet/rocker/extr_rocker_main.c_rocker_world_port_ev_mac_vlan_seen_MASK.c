
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rocker_world_ops {int (* port_ev_mac_vlan_seen ) (struct rocker_port*,unsigned char const*,int ) ;} ;
struct rocker_port {TYPE_1__* rocker; } ;
typedef int __be16 ;
struct TYPE_2__ {struct rocker_world_ops* wops; } ;


 int VAR_0 ;
 int FUNC_0 (struct rocker_port*,unsigned char const*,int ) ;

__attribute__((used)) static int FUNC_1(struct rocker_port *VAR_1,
           const unsigned char *VAR_2,
           __be16 VAR_3)
{
 struct rocker_world_ops *VAR_4 = VAR_1->rocker->wops;

 if (!VAR_4->port_ev_mac_vlan_seen)
  return -VAR_0;
 return VAR_4->port_ev_mac_vlan_seen(VAR_1, VAR_2, VAR_3);
}
