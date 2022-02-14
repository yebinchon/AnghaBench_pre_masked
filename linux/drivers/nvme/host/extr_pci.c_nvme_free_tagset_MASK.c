
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * tagset; } ;
struct TYPE_4__ {scalar_t__ tags; } ;
struct nvme_dev {TYPE_1__ ctrl; TYPE_2__ tagset; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct nvme_dev *VAR_0)
{
 if (VAR_0->tagset.tags)
  FUNC_0(&VAR_0->tagset);
 VAR_0->ctrl.tagset = ((void*)0);
}
