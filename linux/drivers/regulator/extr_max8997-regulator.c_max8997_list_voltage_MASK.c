
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct voltage_map_desc {unsigned int min; unsigned int step; int max; } ;
struct regulator_dev {int dummy; } ;


 int FUNC_0 (struct voltage_map_desc**) ;
 int VAR_0 ;
 int FUNC_1 (struct regulator_dev*) ;
 struct voltage_map_desc** VAR_1 ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_2,
  unsigned int VAR_3)
{
 const struct voltage_map_desc *VAR_4;
 int VAR_5 = FUNC_1(VAR_2);
 int VAR_6;

 if (VAR_5 < 0 || VAR_5 >= FUNC_0(VAR_1))
  return -VAR_0;

 VAR_4 = VAR_1[VAR_5];
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_6 = VAR_4->min + VAR_4->step * VAR_3;
 if (VAR_6 > VAR_4->max)
  return -VAR_0;

 return VAR_6;
}
