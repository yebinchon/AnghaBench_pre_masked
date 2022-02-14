
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ringupd_dmahandle; scalar_t__ ringupd; int scratch_dmahandle; scalar_t__ scratch; } ;
struct brcmf_pciedev_info {TYPE_2__ shared; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_1(struct brcmf_pciedev_info *VAR_2)
{
 if (VAR_2->shared.scratch)
  FUNC_0(&VAR_2->pdev->dev,
      VAR_1,
      VAR_2->shared.scratch,
      VAR_2->shared.scratch_dmahandle);
 if (VAR_2->shared.ringupd)
  FUNC_0(&VAR_2->pdev->dev,
      VAR_0,
      VAR_2->shared.ringupd,
      VAR_2->shared.ringupd_dmahandle);
}
