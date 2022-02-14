
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vlan_flags; void* outer_up_table; void* egress_table; void* ingress_table; int sw_flags2; int sw_flags; } ;
struct ice_vsi_ctx {int alloc_from_pool; TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ice_vsi_ctx *VAR_5)
{
 u32 VAR_6 = 0;

 FUNC_2(&VAR_5->info, 0, sizeof(VAR_5->info));

 VAR_5->alloc_from_pool = 1;

 VAR_5->info.sw_flags = VAR_1;

 VAR_5->info.sw_flags2 = VAR_0;




 VAR_5->info.vlan_flags = ((VAR_2 &
      VAR_3) >>
     VAR_4);

 VAR_6 |= FUNC_0(0, 0);
 VAR_6 |= FUNC_0(1, 1);
 VAR_6 |= FUNC_0(2, 2);
 VAR_6 |= FUNC_0(3, 3);
 VAR_6 |= FUNC_0(4, 4);
 VAR_6 |= FUNC_0(5, 5);
 VAR_6 |= FUNC_0(6, 6);
 VAR_6 |= FUNC_0(7, 7);
 VAR_5->info.ingress_table = FUNC_1(VAR_6);
 VAR_5->info.egress_table = FUNC_1(VAR_6);

 VAR_5->info.outer_up_table = FUNC_1(VAR_6);

}
