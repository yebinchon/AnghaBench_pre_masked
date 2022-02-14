
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hsmmc_host {int base; int mmc; scalar_t__ req_in_progress; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct omap_hsmmc_host*,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct omap_hsmmc_host *VAR_6 = VAR_5;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6->base, VAR_3);
 while (VAR_7 & (VAR_1 | VAR_0)) {
  if (VAR_6->req_in_progress)
   FUNC_2(VAR_6, VAR_7);

  if (VAR_7 & VAR_0)
   FUNC_1(VAR_6->mmc);


  VAR_7 = FUNC_0(VAR_6->base, VAR_3);
 }

 return VAR_2;
}
