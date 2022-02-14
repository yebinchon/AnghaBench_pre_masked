
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perm_bits {int * write; int * virt; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct perm_bits *VAR_0)
{
 FUNC_0(VAR_0->virt);
 FUNC_0(VAR_0->write);
 VAR_0->virt = ((void*)0);
 VAR_0->write = ((void*)0);
}
