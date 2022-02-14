
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct nvme_ns {int lba_shift; struct nvm_dev* ndev; TYPE_1__* ctrl; int ext; int ms; struct request_queue* queue; } ;
struct nvm_geo {int csecs; int mdts; int ext; int sos; } ;
struct nvm_dev {struct nvme_ns* private_data; int * ops; int name; struct request_queue* q; struct nvm_geo geo; } ;
struct TYPE_2__ {int max_hw_sectors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int ) ;
 struct nvm_dev* FUNC_2 (int) ;
 int FUNC_3 (struct nvm_dev*) ;
 int VAR_2 ;

int FUNC_4(struct nvme_ns *VAR_3, char *VAR_4, int VAR_5)
{
 struct request_queue *VAR_6 = VAR_3->queue;
 struct nvm_dev *VAR_7;
 struct nvm_geo *VAR_8;

 FUNC_0();

 VAR_7 = FUNC_2(VAR_5);
 if (!VAR_7)
  return -VAR_1;


 VAR_8 = &VAR_7->geo;
 VAR_8->csecs = 1 << VAR_3->lba_shift;
 VAR_8->sos = VAR_3->ms;
 VAR_8->ext = VAR_3->ext;
 VAR_8->mdts = VAR_3->ctrl->max_hw_sectors;

 VAR_7->q = VAR_6;
 FUNC_1(VAR_7->name, VAR_4, VAR_0);
 VAR_7->ops = &VAR_2;
 VAR_7->private_data = VAR_3;
 VAR_3->ndev = VAR_7;

 return FUNC_3(VAR_7);
}
