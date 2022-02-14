
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epf_group {int epf; int index; } ;
struct config_item {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct pci_epf_group*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 struct pci_epf_group* FUNC_5 (struct config_item*) ;

__attribute__((used)) static void FUNC_6(struct config_item *VAR_2)
{
 struct pci_epf_group *VAR_3 = FUNC_5(VAR_2);

 FUNC_2(&VAR_1);
 FUNC_0(&VAR_0, VAR_3->index);
 FUNC_3(&VAR_1);
 FUNC_4(VAR_3->epf);
 FUNC_1(VAR_3);
}
