
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog {int dummy; } ;
struct bpf_offloaded_map {int netdev; } ;
struct bpf_map {int dummy; } ;


 int FUNC_0 (struct bpf_prog*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bpf_map*) ;
 int FUNC_2 (struct bpf_map*) ;
 int FUNC_3 (int *) ;
 struct bpf_offloaded_map* FUNC_4 (struct bpf_map*) ;
 int FUNC_5 (int *) ;

bool FUNC_6(struct bpf_prog *VAR_1, struct bpf_map *VAR_2)
{
 struct bpf_offloaded_map *VAR_3;
 bool VAR_4;

 if (!FUNC_1(VAR_2))
  return FUNC_2(VAR_2);
 VAR_3 = FUNC_4(VAR_2);

 FUNC_3(&VAR_0);
 VAR_4 = FUNC_0(VAR_1, VAR_3->netdev);
 FUNC_5(&VAR_0);

 return VAR_4;
}
