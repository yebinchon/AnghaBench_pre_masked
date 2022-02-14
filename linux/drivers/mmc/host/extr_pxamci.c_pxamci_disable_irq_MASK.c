
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxamci_host {unsigned int imask; int lock; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct pxamci_host *VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(&VAR_1->lock, VAR_3);
 VAR_1->imask |= VAR_2;
 FUNC_2(VAR_1->imask, VAR_1->base + VAR_0);
 FUNC_1(&VAR_1->lock, VAR_3);
}
