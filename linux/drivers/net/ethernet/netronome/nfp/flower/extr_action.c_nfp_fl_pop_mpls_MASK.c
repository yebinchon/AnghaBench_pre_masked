
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len_lw; int jump_id; } ;
struct nfp_fl_pop_mpls {int ethtype; TYPE_1__ head; } ;
struct TYPE_4__ {int proto; } ;
struct flow_action_entry {TYPE_2__ mpls_pop; } ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct nfp_fl_pop_mpls *VAR_2,
  const struct flow_action_entry *VAR_3)
{
 size_t VAR_4 = sizeof(struct nfp_fl_pop_mpls);

 VAR_2->head.jump_id = VAR_0;
 VAR_2->head.len_lw = VAR_4 >> VAR_1;
 VAR_2->ethtype = VAR_3->mpls_pop.proto;
}
