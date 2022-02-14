
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sg_mapping_iter {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sg_mapping_iter*,int **) ;
 int FUNC_2 (struct sg_mapping_iter*,int ) ;

void FUNC_3(struct sg_mapping_iter *VAR_0, uint32_t VAR_1)
{
 uint32_t *VAR_2 = ((void*)0);

 if (FUNC_0(FUNC_1(VAR_0, &VAR_2))) {
  if (VAR_2)
   *VAR_2 = VAR_1;
  else
   return;
 } else
  FUNC_2(VAR_0, VAR_1);
}
