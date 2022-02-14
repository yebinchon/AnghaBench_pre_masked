
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nfp_prog {int __prog_alloc_len; int prog_len; int * prog; int error; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(struct nfp_prog *VAR_1, u64 VAR_2)
{
 if (VAR_1->__prog_alloc_len / sizeof(u64) == VAR_1->prog_len) {
  FUNC_0("instruction limit reached (%u NFP instructions)\n",
   VAR_1->prog_len);
  VAR_1->error = -VAR_0;
  return;
 }

 VAR_1->prog[VAR_1->prog_len] = VAR_2;
 VAR_1->prog_len++;
}
