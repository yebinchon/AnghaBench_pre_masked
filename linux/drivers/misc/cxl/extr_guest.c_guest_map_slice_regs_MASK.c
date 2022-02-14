
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_afu {int slice; int dev; TYPE_1__* guest; int p2n_mmio; } ;
struct TYPE_2__ {int p2n_size; int p2n_phys; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct cxl_afu *VAR_1)
{
 if (!(VAR_1->p2n_mmio = FUNC_1(VAR_1->guest->p2n_phys, VAR_1->guest->p2n_size))) {
  FUNC_0(&VAR_1->dev, "Error mapping AFU(%d) MMIO regions\n",
   VAR_1->slice);
  return -VAR_0;
 }
 return 0;
}
