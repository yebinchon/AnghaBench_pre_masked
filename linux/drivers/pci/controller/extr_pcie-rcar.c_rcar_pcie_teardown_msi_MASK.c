
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_msi {int pages; } ;
struct rcar_pcie {struct rcar_msi msi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct rcar_pcie*,int ,int ) ;
 int FUNC_2 (struct rcar_pcie*) ;

__attribute__((used)) static void FUNC_3(struct rcar_pcie *VAR_2)
{
 struct rcar_msi *VAR_3 = &VAR_2->msi;


 FUNC_1(VAR_2, 0, VAR_1);


 FUNC_1(VAR_2, 0, VAR_0);

 FUNC_0(VAR_3->pages, 0);

 FUNC_2(VAR_2);
}
