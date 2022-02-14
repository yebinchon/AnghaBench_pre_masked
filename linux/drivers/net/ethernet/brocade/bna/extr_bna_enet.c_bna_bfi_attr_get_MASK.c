
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_entries; } ;
struct bfi_enet_attr_req {TYPE_2__ mh; } ;
struct bna_ioceth {int msgq_cmd; TYPE_1__* bna; struct bfi_enet_attr_req attr_req; } ;
struct TYPE_4__ {int msgq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *,int,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__,int ,int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct bna_ioceth *VAR_2)
{
 struct bfi_enet_attr_req *VAR_3 = &VAR_2->attr_req;

 FUNC_2(VAR_3->mh, VAR_1,
  VAR_0, 0, 0);
 VAR_3->mh.num_entries = FUNC_4(
 FUNC_3(sizeof(struct bfi_enet_attr_req)));
 FUNC_1(&VAR_2->msgq_cmd, ((void*)0), ((void*)0),
  sizeof(struct bfi_enet_attr_req), &VAR_3->mh);
 FUNC_0(&VAR_2->bna->msgq, &VAR_2->msgq_cmd);
}
