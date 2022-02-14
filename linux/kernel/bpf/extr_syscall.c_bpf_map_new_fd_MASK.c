
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int *,struct bpf_map*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct bpf_map*,int ) ;

int FUNC_3(struct bpf_map *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, FUNC_0(VAR_3));
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_1("bpf-map", &VAR_1, VAR_2,
    VAR_3 | VAR_0);
}
