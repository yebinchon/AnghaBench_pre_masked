
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_shm_pool_mgr {int dummy; } ;
struct tee_shm_pool_mem_info {int size; int paddr; int vaddr; } ;
typedef void tee_shm_pool ;


 scalar_t__ FUNC_0 (void*) ;
 int VAR_0 ;
 void* FUNC_1 (struct tee_shm_pool_mgr*,struct tee_shm_pool_mgr*) ;
 void* FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (struct tee_shm_pool_mgr*) ;

struct tee_shm_pool *
FUNC_4(struct tee_shm_pool_mem_info *VAR_1,
      struct tee_shm_pool_mem_info *VAR_2)
{
 struct tee_shm_pool_mgr *VAR_3;
 struct tee_shm_pool_mgr *VAR_4;
 void *VAR_5;




 VAR_5 = FUNC_2(VAR_1->vaddr, VAR_1->paddr,
         VAR_1->size,
         3 );
 if (FUNC_0(VAR_5))
  return VAR_5;
 VAR_3 = VAR_5;




 VAR_5 = FUNC_2(VAR_2->vaddr,
         VAR_2->paddr,
         VAR_2->size, VAR_0);
 if (FUNC_0(VAR_5))
  goto err_free_priv_mgr;
 VAR_4 = VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (FUNC_0(VAR_5))
  goto err_free_dmabuf_mgr;

 return VAR_5;

err_free_dmabuf_mgr:
 FUNC_3(VAR_4);
err_free_priv_mgr:
 FUNC_3(VAR_3);

 return VAR_5;
}
