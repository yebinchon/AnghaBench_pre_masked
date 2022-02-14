
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_shm {int flags; int size; scalar_t__ kaddr; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tee_shm*,unsigned long,int *) ;

int FUNC_1(struct tee_shm *VAR_2, void *VAR_3, phys_addr_t *VAR_4)
{
 if (!(VAR_2->flags & VAR_1))
  return -VAR_0;

 if ((char *)VAR_3 < (char *)VAR_2->kaddr)
  return -VAR_0;
 if ((char *)VAR_3 >= ((char *)VAR_2->kaddr + VAR_2->size))
  return -VAR_0;

 return FUNC_0(
   VAR_2, (unsigned long)VAR_3 - (unsigned long)VAR_2->kaddr, VAR_4);
}
