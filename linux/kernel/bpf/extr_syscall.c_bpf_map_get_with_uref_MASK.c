
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fd {int dummy; } ;
struct bpf_map {int dummy; } ;


 scalar_t__ FUNC_0 (struct bpf_map*) ;
 struct bpf_map* FUNC_1 (struct fd) ;
 struct bpf_map* FUNC_2 (struct bpf_map*,int) ;
 struct fd FUNC_3 (int ) ;
 int FUNC_4 (struct fd) ;

struct bpf_map *FUNC_5(u32 VAR_0)
{
 struct fd VAR_1 = FUNC_3(VAR_0);
 struct bpf_map *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (FUNC_0(VAR_2))
  return VAR_2;

 VAR_2 = FUNC_2(VAR_2, 1);
 FUNC_4(VAR_1);

 return VAR_2;
}
