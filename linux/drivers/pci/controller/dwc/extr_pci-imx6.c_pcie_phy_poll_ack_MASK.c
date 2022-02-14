
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct imx6_pcie {struct dw_pcie* pci; } ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dw_pcie*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct imx6_pcie *VAR_3, bool VAR_4)
{
 struct dw_pcie *VAR_5 = VAR_3->pci;
 bool VAR_6;
 u32 VAR_7 = 10;
 u32 VAR_8 = 0;

 do {
  VAR_6 = FUNC_0(VAR_5, VAR_1) &
   VAR_2;
  VAR_8++;

  if (VAR_6 == VAR_4)
   return 0;

  FUNC_1(1);
 } while (VAR_8 < VAR_7);

 return -VAR_0;
}
