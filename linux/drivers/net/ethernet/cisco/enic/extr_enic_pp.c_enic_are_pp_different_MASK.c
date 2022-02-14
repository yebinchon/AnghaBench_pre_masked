
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enic_port_profile {int mac_addr; int host_uuid; int instance_uuid; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct enic_port_profile *VAR_1,
  struct enic_port_profile *VAR_2)
{
 return FUNC_2(VAR_1->name, VAR_2->name) | !!FUNC_1(VAR_1->instance_uuid,
  VAR_2->instance_uuid, VAR_0) |
  !!FUNC_1(VAR_1->host_uuid, VAR_2->host_uuid, VAR_0) |
  !FUNC_0(VAR_1->mac_addr, VAR_2->mac_addr);
}
