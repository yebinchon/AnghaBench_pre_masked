
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* mac_addr; } ;
struct port_info {TYPE_1__ iscsic; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,int ) ;
 struct port_info* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1)
{
 struct port_info *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->iscsic.mac_addr, VAR_1->dev_addr, VAR_0);
 VAR_2->iscsic.mac_addr[3] |= 0x80;
}
