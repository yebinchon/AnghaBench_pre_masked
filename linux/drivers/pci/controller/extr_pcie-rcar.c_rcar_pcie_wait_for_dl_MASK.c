
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct rcar_pcie*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct rcar_pcie *VAR_3)
{
 unsigned int VAR_4 = 10000;

 while (VAR_4--) {
  if ((FUNC_1(VAR_3, VAR_2) & VAR_0))
   return 0;

  FUNC_2(5);
  FUNC_0();
 }

 return -VAR_1;
}
