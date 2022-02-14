
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_davinci_host {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mmc_davinci_host*,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mmc_davinci_host *VAR_4)
{

 FUNC_0(VAR_4, 1);

 FUNC_1(0, VAR_4->base + VAR_0);
 FUNC_1(VAR_3, VAR_4->base + VAR_0);

 FUNC_1(0x1FFF, VAR_4->base + VAR_2);
 FUNC_1(0xFFFF, VAR_4->base + VAR_1);

 FUNC_0(VAR_4, 0);
}
