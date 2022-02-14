
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tpa_en; } ;
struct client_init_ramrod_data {TYPE_2__ rx; } ;
struct bnx2x_queue_setup_params {int flags; } ;
struct TYPE_3__ {struct bnx2x_queue_setup_params setup; } ;
struct bnx2x_queue_state_params {TYPE_1__ params; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct bnx2x *VAR_2,
    struct bnx2x_queue_state_params *VAR_3,
    struct client_init_ramrod_data *VAR_4)
{
 struct bnx2x_queue_setup_params *VAR_5 = &VAR_3->params.setup;




 VAR_4->rx.tpa_en |= FUNC_0(VAR_0, &VAR_5->flags) *
    VAR_1;
}
