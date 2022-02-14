
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxcmci_host {int use_sdio; int lock; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mxcmci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mxcmci_host*,int ) ;
 int FUNC_2 (struct mxcmci_host*,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct mmc_host *VAR_2, int VAR_3)
{
 struct mxcmci_host *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_3(&VAR_4->lock, VAR_5);
 VAR_4->use_sdio = VAR_3;
 VAR_6 = FUNC_1(VAR_4, VAR_1);

 if (VAR_3)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;

 FUNC_2(VAR_4, VAR_6, VAR_1);
 FUNC_4(&VAR_4->lock, VAR_5);
}
