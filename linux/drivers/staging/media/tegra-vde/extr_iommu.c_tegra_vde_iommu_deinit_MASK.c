
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_vde {int * domain; int group; int iova; int iova_resv_static_addresses; int iova_resv_last_page; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;

void FUNC_6(struct tegra_vde *VAR_0)
{
 if (VAR_0->domain) {
  FUNC_0(&VAR_0->iova, VAR_0->iova_resv_last_page);
  FUNC_0(&VAR_0->iova, VAR_0->iova_resv_static_addresses);
  FUNC_1(VAR_0->domain, VAR_0->group);
  FUNC_5(&VAR_0->iova);
  FUNC_4();
  FUNC_2(VAR_0->domain);
  FUNC_3(VAR_0->group);

  VAR_0->domain = ((void*)0);
 }
}
