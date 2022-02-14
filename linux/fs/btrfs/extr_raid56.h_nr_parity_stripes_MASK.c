
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_lookup {int type; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(const struct map_lookup *VAR_2)
{
 if (VAR_2->type & VAR_0)
  return 1;
 else if (VAR_2->type & VAR_1)
  return 2;
 else
  return 0;
}
