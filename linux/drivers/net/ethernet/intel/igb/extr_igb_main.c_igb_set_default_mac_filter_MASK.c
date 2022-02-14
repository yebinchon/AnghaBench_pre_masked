
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct igb_mac_addr {int state; int queue; int addr; } ;
struct TYPE_3__ {int addr; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct igb_adapter {int vfs_allocated_count; TYPE_2__ hw; struct igb_mac_addr* mac_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct igb_adapter*,int ) ;

__attribute__((used)) static void FUNC_2(struct igb_adapter *VAR_2)
{
 struct igb_mac_addr *VAR_3 = &VAR_2->mac_table[0];

 FUNC_0(VAR_3->addr, VAR_2->hw.mac.addr);
 VAR_3->queue = VAR_2->vfs_allocated_count;
 VAR_3->state = VAR_0 | VAR_1;

 FUNC_1(VAR_2, 0);
}
