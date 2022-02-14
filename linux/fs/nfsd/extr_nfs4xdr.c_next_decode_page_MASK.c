
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_compoundargs {int pagelen; scalar_t__ p; scalar_t__ end; int * pagelist; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct nfsd4_compoundargs *VAR_1)
{
 VAR_1->p = FUNC_1(VAR_1->pagelist[0]);
 VAR_1->pagelist++;
 if (VAR_1->pagelen < VAR_0) {
  VAR_1->end = VAR_1->p + FUNC_0(VAR_1->pagelen);
  VAR_1->pagelen = 0;
 } else {
  VAR_1->end = VAR_1->p + (VAR_0>>2);
  VAR_1->pagelen -= VAR_0;
 }
}
