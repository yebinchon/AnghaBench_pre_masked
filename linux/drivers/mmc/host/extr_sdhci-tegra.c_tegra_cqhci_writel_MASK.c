
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mmc_host {int dummy; } ;
struct cqhci_host {scalar_t__ mmio; struct mmc_host* mmc; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cqhci_host*,int) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct cqhci_host *VAR_2, u32 VAR_3, int VAR_4)
{
 struct mmc_host *VAR_5 = VAR_2->mmc;
 u8 VAR_6;
 ktime_t VAR_7;
 bool VAR_8;
 if (VAR_4 == VAR_0 && !(VAR_3 & VAR_1) &&
     FUNC_0(VAR_2, VAR_0) & VAR_1) {
  FUNC_4(VAR_5);
  FUNC_5(VAR_3, VAR_2->mmio + VAR_4);
  VAR_7 = FUNC_1(FUNC_3(), 50);
  while (1) {
   VAR_8 = FUNC_2(FUNC_3(), VAR_7) > 0;
   VAR_6 = FUNC_0(VAR_2, VAR_0);
   if (!(VAR_6 & VAR_1) || VAR_8)
    break;
  }




  if (VAR_8)
   FUNC_5(VAR_3, VAR_2->mmio + VAR_4);
 } else {
  FUNC_5(VAR_3, VAR_2->mmio + VAR_4);
 }
}
