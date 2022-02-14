
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dw_pcie*,int) ;

__attribute__((used)) static unsigned int FUNC_3(struct dw_pcie *VAR_1, int VAR_2)
{
 u32 VAR_3;
 int VAR_4 = VAR_0;

 while (VAR_4) {
  VAR_3 = FUNC_2(VAR_1, VAR_4);
  if (FUNC_0(VAR_3) == VAR_2)
   return VAR_4;

  VAR_4 = FUNC_1(VAR_3);
  if (!VAR_4)
   break;
 }

 return 0;
}
