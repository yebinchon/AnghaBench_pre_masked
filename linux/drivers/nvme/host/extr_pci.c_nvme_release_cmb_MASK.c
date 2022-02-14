
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* device; } ;
struct nvme_dev {scalar_t__ cmb_size; TYPE_2__ ctrl; } ;
struct TYPE_6__ {int attr; } ;
struct TYPE_4__ {int kobj; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;

__attribute__((used)) static inline void FUNC_1(struct nvme_dev *VAR_1)
{
 if (VAR_1->cmb_size) {
  FUNC_0(&VAR_1->ctrl.device->kobj,
          &VAR_0.attr, ((void*)0));
  VAR_1->cmb_size = 0;
 }
}
