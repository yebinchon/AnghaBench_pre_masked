
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct advk_pcie {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct advk_pcie*) ;
 int FUNC_1 (struct advk_pcie*,int ) ;
 int FUNC_2 (struct advk_pcie*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct advk_pcie *VAR_6 = VAR_5;
 u32 VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_0);
 if (!(VAR_7 & VAR_3))
  return VAR_2;

 FUNC_0(VAR_6);


 FUNC_2(VAR_6, VAR_3, VAR_0);

 return VAR_1;
}
