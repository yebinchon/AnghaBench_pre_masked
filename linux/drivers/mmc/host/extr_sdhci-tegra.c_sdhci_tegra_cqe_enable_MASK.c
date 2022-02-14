
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {struct cqhci_host* cqe_private; } ;
struct cqhci_host {int activated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cqhci_host*,int ) ;
 int FUNC_1 (struct cqhci_host*,int,int ) ;
 int FUNC_2 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_4)
{
 struct cqhci_host *VAR_5 = VAR_4->cqe_private;
 u32 VAR_6;







 if (!VAR_5->activated) {
  VAR_6 = FUNC_0(VAR_5, VAR_0);
  if (VAR_6 & VAR_1)
   FUNC_1(VAR_5, (VAR_6 & ~VAR_1),
         VAR_0);
  FUNC_2(VAR_4);
  if (VAR_6 & VAR_1)
   FUNC_1(VAR_5, VAR_6, VAR_0);
 }
 VAR_6 = FUNC_0(VAR_5, VAR_2);
 VAR_6 &= ~VAR_3;
 FUNC_1(VAR_5, VAR_6, VAR_2);
}
