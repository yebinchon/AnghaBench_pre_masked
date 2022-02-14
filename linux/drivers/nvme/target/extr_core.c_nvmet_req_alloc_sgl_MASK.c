
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct nvmet_req {int sg; int sg_cnt; int transfer_len; struct pci_dev* p2p_dev; TYPE_3__* sq; TYPE_2__* ns; } ;
struct TYPE_6__ {scalar_t__ qid; TYPE_1__* ctrl; } ;
struct TYPE_5__ {int nsid; } ;
struct TYPE_4__ {int p2p_ns_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,int *,int ) ;
 struct pci_dev* FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ,int *) ;

int FUNC_4(struct nvmet_req *VAR_3)
{
 struct pci_dev *VAR_4 = ((void*)0);

 if (FUNC_0(VAR_0)) {
  if (VAR_3->sq->ctrl && VAR_3->ns)
   VAR_4 = FUNC_2(&VAR_3->sq->ctrl->p2p_ns_map,
          VAR_3->ns->nsid);

  VAR_3->p2p_dev = ((void*)0);
  if (VAR_3->sq->qid && VAR_4) {
   VAR_3->sg = FUNC_1(VAR_4, &VAR_3->sg_cnt,
             VAR_3->transfer_len);
   if (VAR_3->sg) {
    VAR_3->p2p_dev = VAR_4;
    return 0;
   }
  }





 }

 VAR_3->sg = FUNC_3(VAR_3->transfer_len, VAR_2, &VAR_3->sg_cnt);
 if (!VAR_3->sg)
  return -VAR_1;

 return 0;
}
