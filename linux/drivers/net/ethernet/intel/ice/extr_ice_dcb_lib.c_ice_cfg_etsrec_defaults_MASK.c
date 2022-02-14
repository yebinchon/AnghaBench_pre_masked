
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {int maxtcs; int* tcbwtable; int * tsatable; } ;
struct ice_dcbx_cfg {TYPE_1__ etsrec; } ;
struct ice_port_info {struct ice_dcbx_cfg local_dcbx_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_0(struct ice_port_info *VAR_3)
{
 struct ice_dcbx_cfg *VAR_4 = &VAR_3->local_dcbx_cfg;
 u8 VAR_5;


 if (VAR_4->etsrec.maxtcs)
  return;


 VAR_4->etsrec.maxtcs = 1;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4->etsrec.tcbwtable[VAR_5] = VAR_5 ? 0 : 100;
  VAR_4->etsrec.tsatable[VAR_5] = VAR_5 ? VAR_1 :
       VAR_0;
 }
}
