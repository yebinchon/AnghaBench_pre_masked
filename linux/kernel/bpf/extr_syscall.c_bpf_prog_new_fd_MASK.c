
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,struct bpf_prog*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct bpf_prog*) ;

int FUNC_2(struct bpf_prog *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_0("bpf-prog", &VAR_2, VAR_3,
    VAR_1 | VAR_0);
}
