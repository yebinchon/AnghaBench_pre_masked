
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sdhci_host {int tuning_loop_count; scalar_t__ tuning_delay; int mmc; int tuning_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct sdhci_host*,int ) ;
 int FUNC_4 (struct sdhci_host*,int ) ;
 int FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (struct sdhci_host*,int ) ;

__attribute__((used)) static int FUNC_7(struct sdhci_host *VAR_5, u32 VAR_6)
{
 int VAR_7;





 for (VAR_7 = 0; VAR_7 < VAR_5->tuning_loop_count; VAR_7++) {
  u16 VAR_8;

  FUNC_6(VAR_5, VAR_6);

  if (!VAR_5->tuning_done) {
   FUNC_2("%s: Tuning timeout, falling back to fixed sampling clock\n",
    FUNC_1(VAR_5->mmc));
   FUNC_3(VAR_5, VAR_6);
   return -VAR_1;
  }


  if (VAR_5->tuning_delay > 0)
   FUNC_0(VAR_5->tuning_delay);

  VAR_8 = FUNC_4(VAR_5, VAR_4);
  if (!(VAR_8 & VAR_2)) {
   if (VAR_8 & VAR_3)
    return 0;
   break;
  }

 }

 FUNC_2("%s: Tuning failed, falling back to fixed sampling clock\n",
  FUNC_1(VAR_5->mmc));
 FUNC_5(VAR_5);
 return -VAR_0;
}
