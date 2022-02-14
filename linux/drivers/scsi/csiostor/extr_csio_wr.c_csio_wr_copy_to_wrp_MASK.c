
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void uint8_t ;
typedef int uint32_t ;
struct csio_wr_pair {int size1; int size2; void* addr2; scalar_t__ addr1; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,void*,int) ;

void
FUNC_2(void *VAR_0, struct csio_wr_pair *VAR_1,
     uint32_t VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;


 VAR_4 = ((VAR_1->size1 - VAR_2) >= VAR_3) ?
     VAR_3 : (VAR_1->size1 - VAR_2);

 FUNC_1((uint8_t *) VAR_1->addr1 + VAR_2, VAR_0, VAR_4);
 VAR_3 -= VAR_4;


 if (VAR_3) {
  FUNC_0(VAR_3 <= VAR_1->size2);
  FUNC_0(VAR_1->addr2 != ((void*)0));
  FUNC_1(VAR_1->addr2, (uint8_t *) VAR_0 + VAR_4, VAR_3);
 }
}
