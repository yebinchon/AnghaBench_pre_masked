
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int valid_sections; int sw_flags2; int vlan_flags; } ;
struct ice_vsi_ctx {TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct ice_vsi_ctx *VAR_5)
{
 VAR_5->info.vlan_flags = VAR_3;
 VAR_5->info.vlan_flags |= VAR_4;
 VAR_5->info.sw_flags2 &= ~VAR_2;
 VAR_5->info.valid_sections = FUNC_0(VAR_1 |
      VAR_0);
}
