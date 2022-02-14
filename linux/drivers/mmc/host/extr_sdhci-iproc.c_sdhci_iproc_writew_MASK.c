
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_iproc_host {int is_blk_shadowed; int shadow_blk; int shadow_cmd; int is_cmd_shadowed; } ;
struct sdhci_host {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sdhci_host*,int) ;
 int FUNC_2 (struct sdhci_host*,int,int) ;
 struct sdhci_iproc_host* FUNC_3 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_4 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_4, u16 VAR_5, int VAR_6)
{
 struct sdhci_pltfm_host *VAR_7 = FUNC_4(VAR_4);
 struct sdhci_iproc_host *VAR_8 = FUNC_3(VAR_7);
 u32 VAR_9 = FUNC_0(VAR_6);
 u32 VAR_10 = 0xffff << VAR_9;
 u32 VAR_11, VAR_12;

 if (VAR_6 == VAR_2) {

  if (VAR_8->is_blk_shadowed) {
   FUNC_2(VAR_4, VAR_8->shadow_blk,
    VAR_1);
   VAR_8->is_blk_shadowed = 0;
  }
  VAR_11 = VAR_8->shadow_cmd;
  VAR_8->is_cmd_shadowed = 0;
 } else if ((VAR_6 == VAR_1 || VAR_6 == VAR_0) &&
     VAR_8->is_blk_shadowed) {

  VAR_11 = VAR_8->shadow_blk;
 } else {

  VAR_11 = FUNC_1(VAR_4, (VAR_6 & ~3));
 }
 VAR_12 = (VAR_11 & ~VAR_10) | (VAR_5 << VAR_9);

 if (VAR_6 == VAR_3) {

  VAR_8->shadow_cmd = VAR_12;
  VAR_8->is_cmd_shadowed = 1;
 } else if (VAR_6 == VAR_1 || VAR_6 == VAR_0) {

  VAR_8->shadow_blk = VAR_12;
  VAR_8->is_blk_shadowed = 1;
 } else {

  FUNC_2(VAR_4, VAR_12, VAR_6 & ~3);
 }
}
