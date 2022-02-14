
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perm_bits {int writefn; int readfn; void* write; void* virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perm_bits*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct perm_bits *VAR_4, int VAR_5)
{
 VAR_5 = FUNC_2(VAR_5, 4);





 VAR_4->virt = FUNC_1(VAR_5, VAR_1);
 VAR_4->write = FUNC_1(VAR_5, VAR_1);
 if (!VAR_4->virt || !VAR_4->write) {
  FUNC_0(VAR_4);
  return -VAR_0;
 }

 VAR_4->readfn = VAR_2;
 VAR_4->writefn = VAR_3;

 return 0;
}
