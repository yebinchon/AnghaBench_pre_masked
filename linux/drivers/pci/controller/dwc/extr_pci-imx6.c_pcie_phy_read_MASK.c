
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct imx6_pcie {struct dw_pcie* pci; } ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dw_pcie*,int ) ;
 int FUNC_1 (struct dw_pcie*,int ,int) ;
 int FUNC_2 (struct imx6_pcie*,int) ;
 int FUNC_3 (struct imx6_pcie*,int) ;

__attribute__((used)) static int FUNC_4(struct imx6_pcie *VAR_3, int VAR_4, u16 *VAR_5)
{
 struct dw_pcie *VAR_6 = VAR_3->pci;
 u32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, VAR_4);
 if (VAR_8)
  return VAR_8;


 VAR_7 = VAR_1;
 FUNC_1(VAR_6, VAR_0, VAR_7);

 VAR_8 = FUNC_2(VAR_3, 1);
 if (VAR_8)
  return VAR_8;

 *VAR_5 = FUNC_0(VAR_6, VAR_2);


 FUNC_1(VAR_6, VAR_0, 0x00);

 return FUNC_2(VAR_3, 0);
}
