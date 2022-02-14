
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int num_entries; } ;
struct bfi_enet_enable_req {TYPE_4__ mh; int enable; } ;
struct TYPE_8__ {struct bfi_enet_enable_req req; } ;
struct bna_rxf {int msgq_cmd; TYPE_2__* rx; int rss_status; TYPE_3__ bfi_enet_cmd; } ;
struct TYPE_7__ {TYPE_1__* bna; int rid; } ;
struct TYPE_6__ {int msgq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *,int,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__,int ,int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct bna_rxf *VAR_2)
{
 struct bfi_enet_enable_req *VAR_3 = &VAR_2->bfi_enet_cmd.req;

 FUNC_2(VAR_3->mh, VAR_1,
  VAR_0, 0, VAR_2->rx->rid);
 VAR_3->mh.num_entries = FUNC_4(
  FUNC_3(sizeof(struct bfi_enet_enable_req)));
 VAR_3->enable = VAR_2->rss_status;
 FUNC_1(&VAR_2->msgq_cmd, ((void*)0), ((void*)0),
  sizeof(struct bfi_enet_enable_req), &VAR_3->mh);
 FUNC_0(&VAR_2->rx->bna->msgq, &VAR_2->msgq_cmd);
}
