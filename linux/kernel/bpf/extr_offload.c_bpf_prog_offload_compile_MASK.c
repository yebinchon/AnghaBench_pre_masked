
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog {int bpf_func; } ;


 int FUNC_0 (struct bpf_prog*) ;
 int VAR_0 ;

int FUNC_1(struct bpf_prog *VAR_1)
{
 VAR_1->bpf_func = VAR_0;

 return FUNC_0(VAR_1);
}
