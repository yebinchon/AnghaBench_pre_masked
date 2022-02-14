
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap_hsmmc_host {int base; TYPE_1__* pdata; } ;
struct TYPE_2__ {int controller_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct omap_hsmmc_host*) ;

__attribute__((used)) static void FUNC_3(struct omap_hsmmc_host *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;


 if (VAR_8->pdata->controller_flags & VAR_2) {
  VAR_9 = VAR_4;
  VAR_10 = VAR_7 | VAR_6;
 } else {
  VAR_9 = VAR_3;
  VAR_10 = VAR_6;
 }

 VAR_11 = FUNC_0(VAR_8->base, VAR_1) & ~VAR_5;
 FUNC_1(VAR_8->base, VAR_1, VAR_11 | VAR_9);

 VAR_11 = FUNC_0(VAR_8->base, VAR_0);
 FUNC_1(VAR_8->base, VAR_0, VAR_11 | VAR_10);


 FUNC_2(VAR_8);
}
