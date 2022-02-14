
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_lru_list {int * counts; } ;
typedef enum bpf_lru_list_type { ____Placeholder_bpf_lru_list_type } bpf_lru_list_type ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct bpf_lru_list *VAR_1,
       enum bpf_lru_list_type VAR_2)
{
 if (VAR_2 < VAR_0)
  VAR_1->counts[VAR_2]++;
}
