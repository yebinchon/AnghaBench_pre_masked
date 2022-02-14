
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int num_entries; } ;
struct bfi_enet_diag_lb_req {TYPE_4__ mh; int enable; int mode; } ;
struct TYPE_6__ {struct bfi_enet_diag_lb_req lpbk_req; } ;
struct bna_ethport {int msgq_cmd; TYPE_3__* bna; TYPE_1__ bfi_enet_cmd; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_8__ {int msgq; TYPE_2__ enet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *,int,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__,int ,int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct bna_ethport *VAR_6)
{
 struct bfi_enet_diag_lb_req *VAR_7 =
  &VAR_6->bfi_enet_cmd.lpbk_req;

 FUNC_2(VAR_7->mh, VAR_3,
  VAR_2, 0, 0);
 VAR_7->mh.num_entries = FUNC_4(
  FUNC_3(sizeof(struct bfi_enet_diag_lb_req)));
 VAR_7->mode = (VAR_6->bna->enet.type ==
    VAR_4) ?
    VAR_1 :
    VAR_0;
 VAR_7->enable = VAR_5;

 FUNC_1(&VAR_6->msgq_cmd, ((void*)0), ((void*)0),
  sizeof(struct bfi_enet_diag_lb_req), &VAR_7->mh);
 FUNC_0(&VAR_6->bna->msgq, &VAR_6->msgq_cmd);
}
