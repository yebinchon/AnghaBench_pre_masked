
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camss {unsigned int csiphy_num; unsigned int csid_num; unsigned int vfe_num; int * vfe; int ispif; int * csid; int * csiphy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct camss *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->csiphy_num; VAR_1++)
  FUNC_1(&VAR_0->csiphy[VAR_1]);

 for (VAR_1 = 0; VAR_1 < VAR_0->csid_num; VAR_1++)
  FUNC_0(&VAR_0->csid[VAR_1]);

 FUNC_2(&VAR_0->ispif);

 for (VAR_1 = 0; VAR_1 < VAR_0->vfe_num; VAR_1++)
  FUNC_3(&VAR_0->vfe[VAR_1]);
}
