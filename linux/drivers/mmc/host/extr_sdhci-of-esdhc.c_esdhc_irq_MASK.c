
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sdhci_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int *,char*) ;
 scalar_t__ FUNC_2 (struct sdhci_host*,int ) ;
 int FUNC_3 (struct sdhci_host*,scalar_t__,int ) ;

__attribute__((used)) static u32 FUNC_4(struct sdhci_host *VAR_5, u32 VAR_6)
{
 u32 VAR_7;

 if (FUNC_1(((void*)0), ((void*)0),
    "fsl,p2020-esdhc")) {
  VAR_7 = FUNC_0(FUNC_2(VAR_5,
     VAR_2));
  if (VAR_7 == VAR_0 &&
    FUNC_2(VAR_5, VAR_1) &&
    VAR_6 & VAR_3) {
   VAR_6 &= ~VAR_3;
   FUNC_3(VAR_5, VAR_3,
     VAR_4);
  }
 }
 return VAR_6;
}
