
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct serdes_am654 {int pll_ok; int pll_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct serdes_am654 *VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 VAR_3 = FUNC_1(VAR_2->pll_enable, VAR_0);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_2->pll_ok, VAR_4, VAR_4, 1000,
           VAR_1);
}
