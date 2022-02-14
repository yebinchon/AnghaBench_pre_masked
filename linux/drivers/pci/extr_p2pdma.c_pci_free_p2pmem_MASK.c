
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct percpu_ref {int dummy; } ;
struct pci_dev {TYPE_1__* p2pdma; } ;
struct TYPE_2__ {int pool; } ;


 int FUNC_0 (int ,uintptr_t,size_t,void**) ;
 int FUNC_1 (struct percpu_ref*) ;

void FUNC_2(struct pci_dev *VAR_0, void *VAR_1, size_t VAR_2)
{
 struct percpu_ref *VAR_3;

 FUNC_0(VAR_0->p2pdma->pool, (uintptr_t)VAR_1, VAR_2,
   (void **) &VAR_3);
 FUNC_1(VAR_3);
}
