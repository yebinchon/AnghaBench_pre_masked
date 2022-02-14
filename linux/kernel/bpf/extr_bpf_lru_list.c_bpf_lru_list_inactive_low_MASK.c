
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_lru_list {scalar_t__* counts; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static bool FUNC_0(const struct bpf_lru_list *VAR_2)
{
 return VAR_2->counts[VAR_1] <
  VAR_2->counts[VAR_0];
}
