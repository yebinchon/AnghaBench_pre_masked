
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct enetc_ndev_priv {int bdr_int_num; int * int_vector; TYPE_1__* si; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct pci_dev*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct enetc_ndev_priv *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->si->pdev;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->bdr_int_num; VAR_3++) {
  int VAR_4 = FUNC_2(VAR_2, VAR_0 + VAR_3);

  FUNC_1(VAR_4, ((void*)0));
  FUNC_0(VAR_4, VAR_1->int_vector[VAR_3]);
 }
}
