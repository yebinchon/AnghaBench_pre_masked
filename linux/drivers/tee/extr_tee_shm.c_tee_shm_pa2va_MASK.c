
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_shm {int flags; scalar_t__ paddr; scalar_t__ size; } ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_1 ;
 void* FUNC_2 (struct tee_shm*,scalar_t__) ;

int FUNC_3(struct tee_shm *VAR_2, phys_addr_t VAR_3, void **VAR_4)
{
 if (!(VAR_2->flags & VAR_1))
  return -VAR_0;

 if (VAR_3 < VAR_2->paddr)
  return -VAR_0;
 if (VAR_3 >= (VAR_2->paddr + VAR_2->size))
  return -VAR_0;

 if (VAR_4) {
  void *VAR_5 = FUNC_2(VAR_2, VAR_3 - VAR_2->paddr);

  if (FUNC_0(VAR_5))
   return FUNC_1(VAR_5);
  *VAR_4 = VAR_5;
 }
 return 0;
}
