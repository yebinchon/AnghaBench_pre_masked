
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct bpf_stack_build_id {int dummy; } ;
struct bpf_map {int dummy; } ;


 scalar_t__ FUNC_0 (struct bpf_map*) ;

__attribute__((used)) static inline int FUNC_1(struct bpf_map *VAR_0)
{
 return FUNC_0(VAR_0) ?
  sizeof(struct bpf_stack_build_id) : sizeof(u64);
}
