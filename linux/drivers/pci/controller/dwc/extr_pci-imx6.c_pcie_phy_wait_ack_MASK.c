
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx6_pcie {struct dw_pcie* pci; } ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dw_pcie*,int ,int ) ;
 int FUNC_2 (struct imx6_pcie*,int) ;

__attribute__((used)) static int FUNC_3(struct imx6_pcie *VAR_2, int VAR_3)
{
 struct dw_pcie *VAR_4 = VAR_2->pci;
 u32 VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_3);
 FUNC_1(VAR_4, VAR_0, VAR_5);

 VAR_5 |= VAR_1;
 FUNC_1(VAR_4, VAR_0, VAR_5);

 VAR_6 = FUNC_2(VAR_2, 1);
 if (VAR_6)
  return VAR_6;

 VAR_5 = FUNC_0(VAR_3);
 FUNC_1(VAR_4, VAR_0, VAR_5);

 return FUNC_2(VAR_2, 0);
}
