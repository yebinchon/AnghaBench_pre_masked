
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nwl_pcie {scalar_t__ pcireg_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct nwl_pcie *VAR_2)
{
 if (FUNC_0(VAR_2->pcireg_base + VAR_1) & VAR_0)
  return 1;
 return 0;
}
