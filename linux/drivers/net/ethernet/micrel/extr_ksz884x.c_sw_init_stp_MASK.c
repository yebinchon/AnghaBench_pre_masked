
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ksz_mac_table {int* mac_addr; int override; int valid; int fid; int use_fid; int ports; } ;
struct ksz_hw {TYPE_1__* ksz_switch; } ;
struct TYPE_2__ {struct ksz_mac_table* mac_table; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ksz_hw*,size_t,int*,int ,int,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ksz_hw *VAR_2)
{
 struct ksz_mac_table *VAR_3;

 VAR_3 = &VAR_2->ksz_switch->mac_table[VAR_1];
 VAR_3->mac_addr[0] = 0x01;
 VAR_3->mac_addr[1] = 0x80;
 VAR_3->mac_addr[2] = 0xC2;
 VAR_3->mac_addr[3] = 0x00;
 VAR_3->mac_addr[4] = 0x00;
 VAR_3->mac_addr[5] = 0x00;
 VAR_3->ports = VAR_0;
 VAR_3->override = 1;
 VAR_3->valid = 1;
 FUNC_0(VAR_2, VAR_1,
  VAR_3->mac_addr, VAR_3->ports,
  VAR_3->override, VAR_3->valid,
  VAR_3->use_fid, VAR_3->fid);
}
