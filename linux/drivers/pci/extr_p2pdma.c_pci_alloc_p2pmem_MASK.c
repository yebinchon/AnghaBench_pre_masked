
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct percpu_ref {int dummy; } ;
struct pci_dev {TYPE_1__* p2pdma; } ;
struct TYPE_2__ {int pool; } ;


 scalar_t__ FUNC_0 (int ,size_t,void**) ;
 int FUNC_1 (int ,unsigned long,size_t) ;
 int FUNC_2 (struct percpu_ref*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

void *FUNC_6(struct pci_dev *VAR_0, size_t VAR_1)
{
 void *VAR_2 = ((void*)0);
 struct percpu_ref *VAR_3;






 FUNC_3();
 if (FUNC_5(!VAR_0->p2pdma))
  goto out;

 VAR_2 = (void *)FUNC_0(VAR_0->p2pdma->pool, VAR_1,
   (void **) &VAR_3);
 if (!VAR_2)
  goto out;

 if (FUNC_5(!FUNC_2(VAR_3))) {
  FUNC_1(VAR_0->p2pdma->pool, (unsigned long) VAR_2, VAR_1);
  VAR_2 = ((void*)0);
  goto out;
 }
out:
 FUNC_4();
 return VAR_2;
}
