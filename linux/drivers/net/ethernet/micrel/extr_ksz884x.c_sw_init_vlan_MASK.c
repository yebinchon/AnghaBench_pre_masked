
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ksz_switch {TYPE_2__* port_cfg; TYPE_1__* vlan_table; } ;
struct ksz_hw {struct ksz_switch* ksz_switch; } ;
struct TYPE_4__ {int member; int vid; } ;
struct TYPE_3__ {int member; int fid; int vid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ksz_hw*,int,int *) ;
 int FUNC_1 (struct ksz_hw*,int,int *,int *,int *) ;

__attribute__((used)) static void FUNC_2(struct ksz_hw *VAR_3)
{
 int VAR_4;
 int VAR_5;
 struct ksz_switch *VAR_6 = VAR_3->ksz_switch;


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  FUNC_1(VAR_3, VAR_5,
   &VAR_6->vlan_table[VAR_5].vid,
   &VAR_6->vlan_table[VAR_5].fid,
   &VAR_6->vlan_table[VAR_5].member);
 }

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_0(VAR_3, VAR_4, &VAR_6->port_cfg[VAR_4].vid);
  VAR_6->port_cfg[VAR_4].member = VAR_0;
 }
}
