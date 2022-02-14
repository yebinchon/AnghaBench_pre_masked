
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_omap_host {scalar_t__ is_tuning; } ;
struct sdhci_host {TYPE_1__* cmd; int data_early; } ;
struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sdhci_omap_host* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static u32 FUNC_3(struct sdhci_host *VAR_6, u32 VAR_7)
{
 struct sdhci_pltfm_host *VAR_8 = FUNC_1(VAR_6);
 struct sdhci_omap_host *VAR_9 = FUNC_0(VAR_8);

 if (VAR_9->is_tuning && VAR_6->cmd && !VAR_6->data_early &&
     (VAR_7 & VAR_0)) {







  if (VAR_7 & VAR_5)
   VAR_6->cmd->error = -VAR_3;
  else
   VAR_6->cmd->error = -VAR_2;

  VAR_6->cmd = ((void*)0);






  FUNC_2(VAR_6, VAR_7 & VAR_1, VAR_4);
  VAR_7 &= ~VAR_1;
 }

 return VAR_7;
}
