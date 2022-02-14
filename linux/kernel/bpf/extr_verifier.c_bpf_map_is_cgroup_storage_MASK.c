
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map {scalar_t__ map_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct bpf_map *VAR_2)
{
 return (VAR_2->map_type == VAR_0 ||
  VAR_2->map_type == VAR_1);
}
