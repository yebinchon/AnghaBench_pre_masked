
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {scalar_t__ map_type; scalar_t__ max_entries; int key_size; scalar_t__ value_size; int map_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (union bpf_attr*) ;
 int FUNC_1 (int) ;

int FUNC_2(union bpf_attr *VAR_6)
{
 bool VAR_7 = VAR_6->map_type == VAR_1;
 int VAR_8 = FUNC_0(VAR_6);


 if (VAR_6->max_entries == 0 || VAR_6->key_size != 4 ||
     VAR_6->value_size == 0 ||
     VAR_6->map_flags & ~VAR_0 ||
     !FUNC_1(VAR_6->map_flags) ||
     (VAR_7 && VAR_8 != VAR_5))
  return -VAR_3;

 if (VAR_6->value_size > VAR_4)



  return -VAR_2;

 return 0;
}
