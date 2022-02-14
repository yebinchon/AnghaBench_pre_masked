
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map {int map_flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct bpf_map *VAR_1)
{
 return (VAR_1->map_flags & VAR_0);
}
