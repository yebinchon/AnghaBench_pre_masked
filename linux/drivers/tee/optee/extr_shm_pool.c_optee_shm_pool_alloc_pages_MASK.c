
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_shm_pool_mgr {int * ops; } ;


 int VAR_0 ;
 struct tee_shm_pool_mgr* FUNC_0 (int ) ;
 int VAR_1 ;
 struct tee_shm_pool_mgr* FUNC_1 (int,int ) ;
 int VAR_2 ;

struct tee_shm_pool_mgr *FUNC_2(void)
{
 struct tee_shm_pool_mgr *VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);

 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_3->ops = &VAR_2;

 return VAR_3;
}
