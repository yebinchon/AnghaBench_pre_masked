
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dra7xx_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dra7xx_pcie*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct dra7xx_pcie *VAR_3,
          u8 VAR_4)
{
 u32 VAR_5;

 VAR_5 = (VAR_4 - 1) << VAR_1;
 VAR_5 |= VAR_0;
 FUNC_0(VAR_3, VAR_2, VAR_5);
}
