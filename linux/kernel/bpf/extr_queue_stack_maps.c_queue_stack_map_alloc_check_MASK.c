
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {scalar_t__ max_entries; scalar_t__ key_size; scalar_t__ value_size; int map_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(union bpf_attr *VAR_6)
{
 if (!FUNC_1(VAR_0))
  return -VAR_3;


 if (VAR_6->max_entries == 0 || VAR_6->key_size != 0 ||
     VAR_6->value_size == 0 ||
     VAR_6->map_flags & ~VAR_5 ||
     !FUNC_0(VAR_6->map_flags))
  return -VAR_2;

 if (VAR_6->value_size > VAR_4)



  return -VAR_1;

 return 0;
}
