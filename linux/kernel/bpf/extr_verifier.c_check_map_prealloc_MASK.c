
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map {scalar_t__ map_type; int map_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(struct bpf_map *VAR_4)
{
 return (VAR_4->map_type != VAR_1 &&
  VAR_4->map_type != VAR_3 &&
  VAR_4->map_type != VAR_2) ||
  !(VAR_4->map_flags & VAR_0);
}
