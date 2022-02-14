
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sdhci_host {scalar_t__ version; int flags; scalar_t__ v4_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sdhci_host*,int ) ;
 int FUNC_1 (struct sdhci_host*,int ) ;
 int FUNC_2 (struct sdhci_host*,int ,int ) ;
 int FUNC_3 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct sdhci_host *VAR_10)
{
 u8 VAR_11;
 u16 VAR_12;

 if (VAR_10->version < VAR_7)
  return;

 VAR_11 = FUNC_0(VAR_10, VAR_4);






 VAR_11 &= ~VAR_3;
 if (!(VAR_10->flags & VAR_6))
  goto out;


 if (VAR_10->flags & VAR_9)
  VAR_11 |= VAR_1;

 if (VAR_10->flags & VAR_8) {





  if (VAR_10->v4_mode) {
   VAR_12 = FUNC_1(VAR_10, VAR_5);
   VAR_12 |= VAR_0;
   FUNC_3(VAR_10, VAR_12, VAR_5);
  } else if (VAR_10->flags & VAR_9) {




   VAR_11 |= VAR_2;
  }
 }

out:
 FUNC_2(VAR_10, VAR_11, VAR_4);
}
