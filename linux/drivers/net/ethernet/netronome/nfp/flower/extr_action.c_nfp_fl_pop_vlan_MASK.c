
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t len_lw; int jump_id; } ;
struct nfp_fl_pop_vlan {scalar_t__ reserved; TYPE_1__ head; } ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0(struct nfp_fl_pop_vlan *VAR_2)
{
 size_t VAR_3 = sizeof(struct nfp_fl_pop_vlan);

 VAR_2->head.jump_id = VAR_0;
 VAR_2->head.len_lw = VAR_3 >> VAR_1;
 VAR_2->reserved = 0;
}
