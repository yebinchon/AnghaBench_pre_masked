
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct histb_pcie {int dummy; } ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct histb_pcie*,int ) ;
 struct histb_pcie* FUNC_1 (struct dw_pcie*) ;

__attribute__((used)) static int FUNC_2(struct dw_pcie *VAR_6)
{
 struct histb_pcie *VAR_7 = FUNC_1(VAR_6);
 u32 VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_0(VAR_7, VAR_3);
 VAR_9 = FUNC_0(VAR_7, VAR_4);
 VAR_9 &= VAR_1;
 if ((VAR_8 & VAR_5) && (VAR_8 & VAR_2) &&
     (VAR_9 == VAR_0))
  return 1;

 return 0;
}
