
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct au1xmmc_host {int clk; } ;


 int FUNC_0 (struct au1xmmc_host*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct au1xmmc_host *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = FUNC_3(VAR_2->clk);
 unsigned int VAR_5 = ((VAR_4 / VAR_3) / 2) - 1;
 u32 VAR_6;

 VAR_6 = FUNC_1(FUNC_0(VAR_2));

 VAR_6 &= ~(VAR_1);
 VAR_6 |= (VAR_5 & VAR_1) | VAR_0;

 FUNC_2(VAR_6, FUNC_0(VAR_2));
 FUNC_4();
}
