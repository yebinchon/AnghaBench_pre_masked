
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map {int dummy; } ;


 struct bpf_map* FUNC_0 (struct bpf_map*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct bpf_map *FUNC_3(struct bpf_map *VAR_1, bool VAR_2)
{
 FUNC_1(&VAR_0);
 VAR_1 = FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_0);

 return VAR_1;
}
