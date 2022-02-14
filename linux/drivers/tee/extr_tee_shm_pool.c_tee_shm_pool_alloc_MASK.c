
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_shm_pool_mgr {int dummy; } ;
struct tee_shm_pool {struct tee_shm_pool_mgr* dma_buf_mgr; struct tee_shm_pool_mgr* private_mgr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tee_shm_pool* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct tee_shm_pool_mgr*) ;
 struct tee_shm_pool* FUNC_2 (int,int ) ;

struct tee_shm_pool *FUNC_3(struct tee_shm_pool_mgr *VAR_3,
     struct tee_shm_pool_mgr *VAR_4)
{
 struct tee_shm_pool *VAR_5;

 if (!FUNC_1(VAR_3) || !FUNC_1(VAR_4))
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 VAR_5->private_mgr = VAR_3;
 VAR_5->dma_buf_mgr = VAR_4;

 return VAR_5;
}
