
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct macb_config {int caps; } ;
struct macb {int caps; TYPE_1__* pdev; int * ptp_info; int hw_dma_cap; int native_io; int regs; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,char*,int ) ;
 scalar_t__ FUNC_3 (struct macb*) ;
 int VAR_11 ;
 int FUNC_4 (struct macb*,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(struct macb *VAR_12,
    const struct macb_config *VAR_13)
{
 u32 VAR_14;

 if (VAR_13)
  VAR_12->caps = VAR_13->caps;

 if (FUNC_5(VAR_12->regs, VAR_12->native_io)) {
  VAR_12->caps |= VAR_7;

  VAR_14 = FUNC_4(VAR_12, VAR_0);
  if (FUNC_0(VAR_4, VAR_14) == 0)
   VAR_12->caps |= VAR_6;
  VAR_14 = FUNC_4(VAR_12, VAR_1);
  if ((VAR_14 & (FUNC_1(VAR_8) | FUNC_1(VAR_10))) == 0)
   VAR_12->caps |= VAR_5;
 }

 FUNC_2(&VAR_12->pdev->dev, "Cadence caps 0x%08x\n", VAR_12->caps);
}
