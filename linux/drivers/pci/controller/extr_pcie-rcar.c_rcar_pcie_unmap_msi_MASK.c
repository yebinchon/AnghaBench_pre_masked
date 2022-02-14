
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_msi {int domain; } ;
struct rcar_pcie {struct rcar_msi msi; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct rcar_pcie *VAR_1)
{
 struct rcar_msi *VAR_2 = &VAR_1->msi;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = FUNC_2(VAR_2->domain, VAR_3);
  if (VAR_4 > 0)
   FUNC_0(VAR_4);
 }

 FUNC_1(VAR_2->domain);
}
