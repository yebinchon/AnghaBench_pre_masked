
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct voltage_map_desc {int min; int max; int step; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_1(
  const struct voltage_map_desc *VAR_1,
  int VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_1 == ((void*)0))
  return -VAR_0;

 if (VAR_3 < VAR_1->min || VAR_2 > VAR_1->max)
  return -VAR_0;

 if (VAR_2 < VAR_1->min)
  VAR_2 = VAR_1->min;

 VAR_4 = FUNC_0(VAR_2 - VAR_1->min, VAR_1->step);

 if (VAR_1->min + VAR_1->step * VAR_4 > VAR_3)
  return -VAR_0;

 return VAR_4;
}
