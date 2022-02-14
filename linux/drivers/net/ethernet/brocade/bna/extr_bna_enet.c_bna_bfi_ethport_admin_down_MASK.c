
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int num_entries; } ;
struct bfi_enet_enable_req {TYPE_3__ mh; int enable; } ;
struct TYPE_6__ {struct bfi_enet_enable_req admin_req; } ;
struct bna_ethport {int msgq_cmd; TYPE_1__* bna; TYPE_2__ bfi_enet_cmd; } ;
struct TYPE_5__ {int msgq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *,int,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__,int ,int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct bna_ethport *VAR_3)
{
 struct bfi_enet_enable_req *VAR_4 =
  &VAR_3->bfi_enet_cmd.admin_req;

 FUNC_2(VAR_4->mh, VAR_1,
  VAR_0, 0, 0);
 VAR_4->mh.num_entries = FUNC_4(
  FUNC_3(sizeof(struct bfi_enet_enable_req)));
 VAR_4->enable = VAR_2;

 FUNC_1(&VAR_3->msgq_cmd, ((void*)0), ((void*)0),
  sizeof(struct bfi_enet_enable_req), &VAR_4->mh);
 FUNC_0(&VAR_3->bna->msgq, &VAR_3->msgq_cmd);
}
