
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_shm_pool_mgr {struct gen_pool* private_data; } ;
struct tee_shm {size_t size; int paddr; void* kaddr; } ;
struct gen_pool {int min_alloc_order; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct gen_pool*,size_t) ;
 int FUNC_1 (struct gen_pool*,unsigned long) ;
 int FUNC_2 (void*,int ,size_t) ;
 size_t FUNC_3 (size_t,int) ;

__attribute__((used)) static int FUNC_4(struct tee_shm_pool_mgr *VAR_1,
        struct tee_shm *VAR_2, size_t VAR_3)
{
 unsigned long VAR_4;
 struct gen_pool *VAR_5 = VAR_1->private_data;
 size_t VAR_6 = FUNC_3(VAR_3, 1 << VAR_5->min_alloc_order);

 VAR_4 = FUNC_0(VAR_5, VAR_6);
 if (!VAR_4)
  return -VAR_0;

 FUNC_2((void *)VAR_4, 0, VAR_6);
 VAR_2->kaddr = (void *)VAR_4;
 VAR_2->paddr = FUNC_1(VAR_5, VAR_4);
 VAR_2->size = VAR_6;
 return 0;
}
