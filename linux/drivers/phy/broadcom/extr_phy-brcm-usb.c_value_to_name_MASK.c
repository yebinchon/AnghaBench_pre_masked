
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_to_name_map {char const* name; } ;



__attribute__((used)) static const char *FUNC_0(struct value_to_name_map *VAR_0, int VAR_1,
     int VAR_2)
{
 if (VAR_2 >= VAR_1)
  return "unknown";
 return VAR_0[VAR_2].name;
}
