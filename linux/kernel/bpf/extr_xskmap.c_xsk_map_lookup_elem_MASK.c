
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bpf_map {int dummy; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (struct bpf_map*,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void *FUNC_3(struct bpf_map *VAR_0, void *VAR_1)
{
 FUNC_0(!FUNC_2());
 return FUNC_1(VAR_0, *(u32 *)VAR_1);
}
