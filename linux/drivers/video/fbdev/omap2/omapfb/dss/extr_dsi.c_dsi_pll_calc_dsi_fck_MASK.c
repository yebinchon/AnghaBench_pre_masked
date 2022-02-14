
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_pll_clock_info {int* mX; int clkdco; int* clkout; } ;


 int FUNC_0 (int,unsigned long) ;
 int VAR_0 ;
 size_t VAR_1 ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dss_pll_clock_info *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_1(VAR_0);

 VAR_2->mX[VAR_1] = FUNC_0(VAR_2->clkdco, VAR_3);
 VAR_2->clkout[VAR_1] = VAR_2->clkdco / VAR_2->mX[VAR_1];
}
