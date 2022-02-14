
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int vlan_flags; void* valid_sections; int sw_flags2; void* pvid; } ;
struct ice_vsi_ctx {TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct ice_vsi_ctx *VAR_6, u16 VAR_7)
{
 VAR_6->info.vlan_flags = (VAR_5 |
     VAR_2 |
     VAR_4);
 VAR_6->info.pvid = FUNC_0(VAR_7);
 VAR_6->info.sw_flags2 |= VAR_3;
 VAR_6->info.valid_sections = FUNC_0(VAR_1 |
      VAR_0);
}
