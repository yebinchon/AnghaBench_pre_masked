
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int mmc; } ;
struct sdhci_bcm_kona_dev {int write_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sdhci_bcm_kona_dev* FUNC_3 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct sdhci_host*,int ) ;
 int FUNC_6 (struct sdhci_host*,int,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct sdhci_host *VAR_3, int VAR_4)
{
 struct sdhci_pltfm_host *VAR_5 = FUNC_4(VAR_3);
 struct sdhci_bcm_kona_dev *VAR_6 = FUNC_3(VAR_5);
 u32 VAR_7;
 FUNC_1(&VAR_6->write_lock);
 FUNC_7(20);
 VAR_7 = FUNC_5(VAR_3, VAR_1);

 if (VAR_4) {
  int VAR_8;

  VAR_8 = FUNC_0(VAR_3->mmc);
  if (VAR_8 >= 0)
   VAR_7 = (VAR_7 & ~VAR_2) |
    ((VAR_8) ? VAR_2 : 0);

  VAR_7 |= VAR_0;
  FUNC_6(VAR_3, VAR_7, VAR_1);
 } else {
  VAR_7 &= ~VAR_0;
  FUNC_6(VAR_3, VAR_7, VAR_1);
 }
 FUNC_2(&VAR_6->write_lock);

 return 0;
}
