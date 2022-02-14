
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sdhci_host {scalar_t__ version; int preset_enabled; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sdhci_host*,int ) ;
 int FUNC_1 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sdhci_host *VAR_4, bool VAR_5)
{

 if (VAR_4->version < VAR_3)
  return;





 if (VAR_4->preset_enabled != VAR_5) {
  u16 VAR_6 = FUNC_0(VAR_4, VAR_1);

  if (VAR_5)
   VAR_6 |= VAR_0;
  else
   VAR_6 &= ~VAR_0;

  FUNC_1(VAR_4, VAR_6, VAR_1);

  if (VAR_5)
   VAR_4->flags |= VAR_2;
  else
   VAR_4->flags &= ~VAR_2;

  VAR_4->preset_enabled = VAR_5;
 }
}
