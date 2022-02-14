
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct client_init_ramrod_data {int rx; int tx; int general; } ;
struct TYPE_3__ {int pause_params; int flags; int rxq_params; int txq_params; int gen_params; } ;
struct TYPE_4__ {TYPE_1__ setup; } ;
struct bnx2x_queue_state_params {TYPE_2__ params; int q_obj; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int *,int *,int *) ;
 int FUNC_3 (int ,int *,int *,int *) ;

__attribute__((used)) static void FUNC_4(struct bnx2x *VAR_0,
    struct bnx2x_queue_state_params *VAR_1,
    struct client_init_ramrod_data *VAR_2)
{
 FUNC_0(VAR_0, VAR_1->q_obj,
           &VAR_1->params.setup.gen_params,
           &VAR_2->general,
           &VAR_1->params.setup.flags);

 FUNC_3(VAR_1->q_obj,
      &VAR_1->params.setup.txq_params,
      &VAR_2->tx,
      &VAR_1->params.setup.flags);

 FUNC_2(VAR_1->q_obj,
      &VAR_1->params.setup.rxq_params,
      &VAR_2->rx,
      &VAR_1->params.setup.flags);

 FUNC_1(VAR_1->q_obj,
         &VAR_1->params.setup.pause_params,
         &VAR_2->rx);
}
