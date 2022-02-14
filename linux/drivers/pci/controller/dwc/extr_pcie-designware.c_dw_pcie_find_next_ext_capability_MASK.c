
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct dw_pcie*,int) ;

__attribute__((used)) static u16 FUNC_3(struct dw_pcie *VAR_2, u16 VAR_3,
         u8 VAR_4)
{
 u32 VAR_5;
 int VAR_6;
 int VAR_7 = VAR_1;


 VAR_6 = (VAR_0 - VAR_1) / 8;

 if (VAR_3)
  VAR_7 = VAR_3;

 VAR_5 = FUNC_2(VAR_2, VAR_7);




 if (VAR_5 == 0)
  return 0;

 while (VAR_6-- > 0) {
  if (FUNC_0(VAR_5) == VAR_4 && VAR_7 != VAR_3)
   return VAR_7;

  VAR_7 = FUNC_1(VAR_5);
  if (VAR_7 < VAR_1)
   break;

  VAR_5 = FUNC_2(VAR_2, VAR_7);
 }

 return 0;
}
