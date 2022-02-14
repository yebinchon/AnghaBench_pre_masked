
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ksz_mac_table {int fid; int use_fid; scalar_t__ valid; int override; int ports; int mac_addr; } ;
struct ksz_hw {TYPE_1__* ksz_switch; } ;
struct TYPE_2__ {struct ksz_mac_table* mac_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ksz_hw*,int,int ,int ,int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ksz_hw *VAR_2)
{
 struct ksz_mac_table *VAR_3;
 int VAR_4;

 for (VAR_4 = VAR_0; VAR_4 <= VAR_1; VAR_4++) {
  VAR_3 = &VAR_2->ksz_switch->mac_table[VAR_4];
  VAR_3->valid = 0;
  FUNC_0(VAR_2, VAR_4,
   VAR_3->mac_addr, VAR_3->ports,
   VAR_3->override, VAR_3->valid,
   VAR_3->use_fid, VAR_3->fid);
 }
}
