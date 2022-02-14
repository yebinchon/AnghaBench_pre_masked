
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad5398_chip_info {unsigned int max_uA; unsigned int min_uA; unsigned int current_level; } ;



__attribute__((used)) static int FUNC_0(struct ad5398_chip_info *VAR_0,
 unsigned VAR_1)
{
 unsigned VAR_2 = VAR_0->max_uA - VAR_0->min_uA;

 return VAR_0->min_uA + (VAR_1 * VAR_2 / VAR_0->current_level);
}
