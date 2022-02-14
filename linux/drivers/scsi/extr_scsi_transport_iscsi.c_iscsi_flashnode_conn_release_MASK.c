
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_bus_flash_conn {struct iscsi_bus_flash_conn* link_local_ipv6_addr; struct iscsi_bus_flash_conn* redirect_ipaddr; struct iscsi_bus_flash_conn* ipaddress; } ;
struct device {int dummy; } ;


 struct iscsi_bus_flash_conn* FUNC_0 (struct device*) ;
 int FUNC_1 (struct iscsi_bus_flash_conn*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct iscsi_bus_flash_conn *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->ipaddress);
 FUNC_1(VAR_1->redirect_ipaddr);
 FUNC_1(VAR_1->link_local_ipv6_addr);
 FUNC_1(VAR_1);
}
