
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw2100_priv {int pci_dev; } ;
struct ipw2100_bd_queue {int * drv; int nic; int size; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct ipw2100_priv *VAR_0, struct ipw2100_bd_queue *VAR_1)
{
 FUNC_0("enter\n");

 if (!VAR_1)
  return;

 if (VAR_1->drv) {
  FUNC_1(VAR_0->pci_dev, VAR_1->size, VAR_1->drv, VAR_1->nic);
  VAR_1->drv = ((void*)0);
 }

 FUNC_0("exit\n");
}
