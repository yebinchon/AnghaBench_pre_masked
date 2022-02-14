
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_offloaded_map {scalar_t__ netdev; } ;
struct bpf_map {int dummy; } ;


 int FUNC_0 (struct bpf_offloaded_map*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bpf_offloaded_map*) ;
 struct bpf_offloaded_map* FUNC_3 (struct bpf_map*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;

void FUNC_7(struct bpf_map *VAR_1)
{
 struct bpf_offloaded_map *VAR_2 = FUNC_3(VAR_1);

 FUNC_4();
 FUNC_1(&VAR_0);
 if (VAR_2->netdev)
  FUNC_0(VAR_2);
 FUNC_6(&VAR_0);
 FUNC_5();

 FUNC_2(VAR_2);
}
