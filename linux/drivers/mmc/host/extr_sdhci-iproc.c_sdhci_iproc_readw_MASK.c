
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_iproc_host {int shadow_cmd; int shadow_blk; scalar_t__ is_blk_shadowed; scalar_t__ is_cmd_shadowed; } ;
struct sdhci_host {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sdhci_host*,int) ;
 struct sdhci_iproc_host* FUNC_2 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_3 (struct sdhci_host*) ;

__attribute__((used)) static u16 FUNC_4(struct sdhci_host *VAR_3, int VAR_4)
{
 struct sdhci_pltfm_host *VAR_5 = FUNC_3(VAR_3);
 struct sdhci_iproc_host *VAR_6 = FUNC_2(VAR_5);
 u32 VAR_7;
 u16 VAR_8;

 if ((VAR_4 == VAR_2) && VAR_6->is_cmd_shadowed) {

  VAR_7 = VAR_6->shadow_cmd;
 } else if ((VAR_4 == VAR_1 || VAR_4 == VAR_0) &&
     VAR_6->is_blk_shadowed) {

  VAR_7 = VAR_6->shadow_blk;
 } else {
  VAR_7 = FUNC_1(VAR_3, (VAR_4 & ~3));
 }
 VAR_8 = VAR_7 >> FUNC_0(VAR_4) & 0xffff;
 return VAR_8;
}
