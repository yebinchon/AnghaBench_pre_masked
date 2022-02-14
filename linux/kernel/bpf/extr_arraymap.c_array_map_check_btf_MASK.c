
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct btf_type {int info; } ;
struct btf {int dummy; } ;
struct bpf_map {scalar_t__ map_type; int max_entries; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct btf_type const*) ;

__attribute__((used)) static int FUNC_4(const struct bpf_map *VAR_4,
          const struct btf *VAR_5,
          const struct btf_type *VAR_6,
          const struct btf_type *VAR_7)
{
 u32 VAR_8;


 if (FUNC_3(VAR_6)) {
  if (VAR_4->map_type != VAR_0 ||
      VAR_4->max_entries != 1)
   return -VAR_3;

  if (FUNC_0(VAR_7->info) != VAR_1)
   return -VAR_3;

  return 0;
 }

 if (FUNC_0(VAR_6->info) != VAR_2)
  return -VAR_3;

 VAR_8 = *(u32 *)(VAR_6 + 1);



 if (FUNC_1(VAR_8) != 32 || FUNC_2(VAR_8))
  return -VAR_3;

 return 0;
}
