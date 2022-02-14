
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_davinci_host {int mmc; scalar_t__ base; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct mmc_davinci_host *VAR_5 = VAR_4;
 unsigned int VAR_6;

 VAR_6 = FUNC_3(VAR_5->base + VAR_0);
 if (VAR_6 & VAR_2) {
  FUNC_0(FUNC_1(VAR_5->mmc),
   "SDIO interrupt status %x\n", VAR_6);
  FUNC_4(VAR_6 | VAR_2, VAR_5->base + VAR_0);
  FUNC_2(VAR_5->mmc);
 }
 return VAR_1;
}
