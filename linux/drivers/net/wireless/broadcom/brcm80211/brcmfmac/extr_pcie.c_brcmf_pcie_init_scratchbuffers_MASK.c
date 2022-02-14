
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ tcm_base_address; scalar_t__ ringupd_dmahandle; void* ringupd; scalar_t__ scratch_dmahandle; void* scratch; } ;
struct brcmf_pciedev_info {TYPE_2__ shared; TYPE_1__* pdev; } ;
struct brcmf_bus {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct brcmf_bus*,char*) ;
 int FUNC_1 (struct brcmf_pciedev_info*) ;
 int FUNC_2 (struct brcmf_pciedev_info*,scalar_t__,int) ;
 struct brcmf_bus* FUNC_3 (int *) ;
 void* FUNC_4 (int *,int,scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_5(struct brcmf_pciedev_info *VAR_8)
{
 struct brcmf_bus *VAR_9 = FUNC_3(&VAR_8->pdev->dev);
 u64 VAR_10;
 u32 VAR_11;

 VAR_8->shared.scratch =
  FUNC_4(&VAR_8->pdev->dev,
       VAR_1,
       &VAR_8->shared.scratch_dmahandle,
       VAR_7);
 if (!VAR_8->shared.scratch)
  goto fail;

 VAR_11 = VAR_8->shared.tcm_base_address +
        VAR_4;
 VAR_10 = (u64)VAR_8->shared.scratch_dmahandle;
 FUNC_2(VAR_8, VAR_11, VAR_10 & 0xffffffff);
 FUNC_2(VAR_8, VAR_11 + 4, VAR_10 >> 32);
 VAR_11 = VAR_8->shared.tcm_base_address +
        VAR_5;
 FUNC_2(VAR_8, VAR_11, VAR_1);

 VAR_8->shared.ringupd =
  FUNC_4(&VAR_8->pdev->dev,
       VAR_0,
       &VAR_8->shared.ringupd_dmahandle,
       VAR_7);
 if (!VAR_8->shared.ringupd)
  goto fail;

 VAR_11 = VAR_8->shared.tcm_base_address +
        VAR_2;
 VAR_10 = (u64)VAR_8->shared.ringupd_dmahandle;
 FUNC_2(VAR_8, VAR_11, VAR_10 & 0xffffffff);
 FUNC_2(VAR_8, VAR_11 + 4, VAR_10 >> 32);
 VAR_11 = VAR_8->shared.tcm_base_address +
        VAR_3;
 FUNC_2(VAR_8, VAR_11, VAR_0);
 return 0;

fail:
 FUNC_0(VAR_9, "Allocating scratch buffers failed\n");
 FUNC_1(VAR_8);
 return -VAR_6;
}
