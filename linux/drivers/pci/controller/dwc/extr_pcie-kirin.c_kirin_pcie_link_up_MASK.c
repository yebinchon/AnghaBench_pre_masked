
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kirin_pcie {int dummy; } ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kirin_pcie*,int ) ;
 struct kirin_pcie* FUNC_1 (struct dw_pcie*) ;

__attribute__((used)) static int FUNC_2(struct dw_pcie *VAR_2)
{
 struct kirin_pcie *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4 = FUNC_0(VAR_3, VAR_0);

 if ((VAR_4 & VAR_1) == VAR_1)
  return 1;

 return 0;
}
