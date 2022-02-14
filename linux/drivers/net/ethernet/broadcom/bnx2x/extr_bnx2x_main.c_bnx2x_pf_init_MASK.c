
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int lo; int hi; } ;
struct TYPE_5__ {int member_0; } ;
struct event_ring_data {int sb_id; int index_id; int producer; TYPE_4__ base_addr; TYPE_1__ member_0; } ;
struct cmng_struct_per_port {int dummy; } ;
struct bnx2x_func_init_params {int spq_active; int pf_id; int func_id; int spq_prod; int spq_map; int member_0; } ;
struct TYPE_7__ {scalar_t__ pmf; } ;
struct TYPE_6__ {int line_speed; } ;
struct bnx2x {int eq_prod; int eq_mapping; int cmng; TYPE_3__ port; TYPE_2__ link_vars; int spq_prod_idx; int spq_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct bnx2x*,scalar_t__,int ) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct bnx2x*,int,int ) ;
 int FUNC_9 (struct bnx2x*,struct bnx2x_func_init_params*) ;
 int FUNC_10 (struct bnx2x*) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (struct bnx2x*,int *,int ) ;
 int FUNC_13 (struct bnx2x*,struct event_ring_data*,int) ;

__attribute__((used)) static void FUNC_14(struct bnx2x *VAR_6)
{
 struct bnx2x_func_init_params VAR_7 = {0};
 struct event_ring_data VAR_8 = { 0 };

 if (!FUNC_3(VAR_6)) {


  FUNC_5(VAR_6, VAR_4 +
      VAR_1*4 +
      (FUNC_4(VAR_6) ?
    FUNC_0(VAR_6) : FUNC_2(VAR_6))*4, 0);

  FUNC_5(VAR_6, VAR_4 +
      VAR_1*4 +
      VAR_0*4 +
      (FUNC_4(VAR_6) ?
    FUNC_0(VAR_6) : FUNC_2(VAR_6))*4, 0);
 }

 VAR_7.spq_active = 1;
 VAR_7.pf_id = FUNC_0(VAR_6);
 VAR_7.func_id = FUNC_0(VAR_6);
 VAR_7.spq_map = VAR_6->spq_mapping;
 VAR_7.spq_prod = VAR_6->spq_prod_idx;

 FUNC_9(VAR_6, &VAR_7);

 FUNC_11(&(VAR_6->cmng), 0, sizeof(struct cmng_struct_per_port));







 VAR_6->link_vars.line_speed = VAR_5;
 FUNC_8(VAR_6, 1, FUNC_10(VAR_6));


 if (VAR_6->port.pmf)
  FUNC_12(VAR_6, &VAR_6->cmng, FUNC_1(VAR_6));


 VAR_8.base_addr.hi = FUNC_6(VAR_6->eq_mapping);
 VAR_8.base_addr.lo = FUNC_7(VAR_6->eq_mapping);
 VAR_8.producer = VAR_6->eq_prod;
 VAR_8.index_id = VAR_3;
 VAR_8.sb_id = VAR_2;
 FUNC_13(VAR_6, &VAR_8, FUNC_0(VAR_6));
}
