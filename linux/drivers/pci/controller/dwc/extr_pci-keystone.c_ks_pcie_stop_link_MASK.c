
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct keystone_pcie {int dummy; } ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct keystone_pcie*,int ) ;
 int FUNC_1 (struct keystone_pcie*,int ,int) ;
 struct keystone_pcie* FUNC_2 (struct dw_pcie*) ;

__attribute__((used)) static void FUNC_3(struct dw_pcie *VAR_2)
{
 struct keystone_pcie *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;


 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_4 &= ~VAR_1;
 FUNC_1(VAR_3, VAR_0, VAR_1 | VAR_4);
}
