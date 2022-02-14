
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_aux {int ksym_lnode; struct bpf_prog* prog; } ;
struct bpf_prog {unsigned int pages; struct bpf_prog_aux* aux; int jit_requested; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct bpf_prog* FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 () ;
 struct bpf_prog_aux* FUNC_3 (int,int) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 int FUNC_5 (struct bpf_prog*) ;

struct bpf_prog *FUNC_6(unsigned int VAR_4, gfp_t VAR_5)
{
 gfp_t VAR_6 = VAR_0 | VAR_3 | VAR_5;
 struct bpf_prog_aux *VAR_7;
 struct bpf_prog *VAR_8;

 VAR_4 = FUNC_4(VAR_4, VAR_2);
 VAR_8 = FUNC_1(VAR_4, VAR_6, VAR_1);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_0 | VAR_5);
 if (VAR_7 == ((void*)0)) {
  FUNC_5(VAR_8);
  return ((void*)0);
 }

 VAR_8->pages = VAR_4 / VAR_2;
 VAR_8->aux = VAR_7;
 VAR_8->aux->prog = VAR_8;
 VAR_8->jit_requested = FUNC_2();

 FUNC_0(&VAR_8->aux->ksym_lnode);

 return VAR_8;
}
