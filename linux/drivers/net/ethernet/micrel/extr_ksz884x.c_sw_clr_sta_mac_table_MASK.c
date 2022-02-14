
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ksz_mac_table {int fid; int use_fid; int override; int ports; int mac_addr; } ;
struct ksz_hw {TYPE_1__* ksz_switch; } ;
struct TYPE_2__ {struct ksz_mac_table* mac_table; } ;


 int VAR_0 ;
 int FUNC_0 (struct ksz_hw*,int,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ksz_hw *VAR_1)
{
 struct ksz_mac_table *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = &VAR_1->ksz_switch->mac_table[VAR_3];
  FUNC_0(VAR_1, VAR_3,
   VAR_2->mac_addr, VAR_2->ports,
   VAR_2->override, 0,
   VAR_2->use_fid, VAR_2->fid);
 }
}
