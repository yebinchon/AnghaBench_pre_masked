
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int max_entries; } ;
struct reuseport_array {TYPE_1__ map; } ;
struct bpf_map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct reuseport_array* FUNC_0 (struct bpf_map*) ;

__attribute__((used)) static int FUNC_1(struct bpf_map *VAR_2, void *VAR_3,
     void *VAR_4)
{
 struct reuseport_array *VAR_5 = FUNC_0(VAR_2);
 u32 VAR_6 = VAR_3 ? *(u32 *)VAR_3 : VAR_1;
 u32 *VAR_7 = (u32 *)VAR_4;

 if (VAR_6 >= VAR_5->map.max_entries) {
  *VAR_7 = 0;
  return 0;
 }

 if (VAR_6 == VAR_5->map.max_entries - 1)
  return -VAR_0;

 *VAR_7 = VAR_6 + 1;
 return 0;
}
