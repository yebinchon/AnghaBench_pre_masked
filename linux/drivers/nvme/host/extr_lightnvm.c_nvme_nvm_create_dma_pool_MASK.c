
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_ns {TYPE_2__* ctrl; } ;
struct nvm_dev {TYPE_1__* q; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct nvme_ns* queuedata; } ;


 int VAR_0 ;
 void* FUNC_0 (char*,int ,int,int ,int ) ;

__attribute__((used)) static void *FUNC_1(struct nvm_dev *VAR_1, char *VAR_2,
     int VAR_3)
{
 struct nvme_ns *VAR_4 = VAR_1->q->queuedata;

 return FUNC_0(VAR_2, VAR_4->ctrl->dev, VAR_3, VAR_0, 0);
}
