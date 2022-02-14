
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sg_mapping_iter {scalar_t__ consumed; int addr; scalar_t__ length; } ;


 int FUNC_0 (int ,void*,size_t) ;
 size_t FUNC_1 (scalar_t__,size_t) ;
 scalar_t__ FUNC_2 (struct sg_mapping_iter*) ;

__attribute__((used)) static void FUNC_3(struct sg_mapping_iter *VAR_0, uint32_t VAR_1)
{
 size_t VAR_2, VAR_3 = 4;
 void *VAR_4 = &VAR_1;

 do {
  VAR_2 = FUNC_1(VAR_0->length - VAR_0->consumed, VAR_3);
  FUNC_0(VAR_0->addr, VAR_4, VAR_2);
  VAR_0->consumed += VAR_2;
  VAR_3 -= VAR_2;
  if (!VAR_3)
   return;
  VAR_4 += VAR_2;
 } while (FUNC_2(VAR_0));
}
