
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ocxl_link {int ref; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

void FUNC_3(struct pci_dev *VAR_2, void *VAR_3)
{
 struct ocxl_link *VAR_4 = (struct ocxl_link *) VAR_3;

 FUNC_1(&VAR_0);
 FUNC_0(&VAR_4->ref, VAR_1);
 FUNC_2(&VAR_0);
}
