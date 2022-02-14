
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dw_pcie {scalar_t__ dbi_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct dw_pcie *VAR_3)
{
 u16 VAR_4 = FUNC_0(VAR_3->dbi_base + VAR_0 + VAR_1);

 return !!(VAR_4 & VAR_2);
}
