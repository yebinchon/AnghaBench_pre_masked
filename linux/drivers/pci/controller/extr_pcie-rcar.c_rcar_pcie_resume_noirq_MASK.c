
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_pcie {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rcar_pcie* FUNC_0 (struct device*) ;
 int FUNC_1 (struct rcar_pcie*,int ) ;
 int FUNC_2 (struct rcar_pcie*,int ,int ) ;
 int FUNC_3 (struct rcar_pcie*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4)
{
 struct rcar_pcie *VAR_5 = FUNC_0(VAR_4);

 if (FUNC_1(VAR_5, VAR_3) &&
     !(FUNC_1(VAR_5, VAR_2) & VAR_1))
  return 0;


 FUNC_2(VAR_5, VAR_0, VAR_2);
 return FUNC_3(VAR_5);
}
