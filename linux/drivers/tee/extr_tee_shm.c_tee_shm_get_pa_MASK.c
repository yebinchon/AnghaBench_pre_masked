
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_shm {size_t size; scalar_t__ paddr; } ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;

int FUNC_0(struct tee_shm *VAR_1, size_t VAR_2, phys_addr_t *VAR_3)
{
 if (VAR_2 >= VAR_1->size)
  return -VAR_0;
 if (VAR_3)
  *VAR_3 = VAR_1->paddr + VAR_2;
 return 0;
}
