
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nfp_prog {int prog_len; int __prog_alloc_len; void* prog; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int,int ) ;
 int FUNC_2 (void*,void*,int) ;

__attribute__((used)) static void FUNC_3(struct nfp_prog *VAR_1)
{
 void *VAR_2;

 VAR_2 = FUNC_1(VAR_1->prog_len, sizeof(u64), VAR_0);
 if (!VAR_2)
  return;

 VAR_1->__prog_alloc_len = VAR_1->prog_len * sizeof(u64);
 FUNC_2(VAR_2, VAR_1->prog, VAR_1->__prog_alloc_len);
 FUNC_0(VAR_1->prog);
 VAR_1->prog = VAR_2;
}
