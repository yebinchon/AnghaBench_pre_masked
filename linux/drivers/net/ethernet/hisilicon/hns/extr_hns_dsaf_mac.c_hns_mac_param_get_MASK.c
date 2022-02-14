
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mac_params {int dev; int mac_id; int addr; int mac_mode; int vaddr; } ;
struct hns_mac_cb {int dev; int mac_id; TYPE_1__* addr_entry_idx; int vaddr; } ;
struct TYPE_2__ {int addr; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct hns_mac_cb*) ;

__attribute__((used)) static void FUNC_2(struct mac_params *VAR_0,
         struct hns_mac_cb *VAR_1)
{
 VAR_0->vaddr = VAR_1->vaddr;
 VAR_0->mac_mode = FUNC_1(VAR_1);
 FUNC_0(VAR_0->addr, VAR_1->addr_entry_idx[0].addr);
 VAR_0->mac_id = VAR_1->mac_id;
 VAR_0->dev = VAR_1->dev;
}
