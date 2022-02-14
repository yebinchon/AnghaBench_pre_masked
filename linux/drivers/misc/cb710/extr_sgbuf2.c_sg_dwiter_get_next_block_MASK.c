
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sg_mapping_iter {size_t length; size_t consumed; int * addr; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sg_mapping_iter*) ;

__attribute__((used)) static bool FUNC_3(struct sg_mapping_iter *VAR_0, uint32_t **VAR_1)
{
 size_t VAR_2;

 if (FUNC_2(VAR_0))
  return 1;

 VAR_2 = VAR_0->length - VAR_0->consumed;

 if (FUNC_0(VAR_2 >= 4 && !FUNC_1(
   VAR_0->addr + VAR_0->consumed))) {
  *VAR_1 = VAR_0->addr + VAR_0->consumed;
  VAR_0->consumed += 4;
  return 1;
 }

 return 0;
}
