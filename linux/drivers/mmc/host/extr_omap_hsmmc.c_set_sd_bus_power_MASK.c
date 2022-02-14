
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hsmmc_host {int base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_2 () ;
 unsigned long VAR_2 ;

__attribute__((used)) static void FUNC_3(struct omap_hsmmc_host *VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(VAR_3->base, VAR_0,
    FUNC_0(VAR_3->base, VAR_0) | VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (FUNC_0(VAR_3->base, VAR_0) & VAR_1)
   break;
  FUNC_2();
 }
}
