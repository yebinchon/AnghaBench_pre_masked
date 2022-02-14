
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_shm_pool_mgr {int dummy; } ;
typedef void tee_shm_pool ;


 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 () ;
 void* FUNC_2 (struct tee_shm_pool_mgr*,struct tee_shm_pool_mgr*) ;
 int FUNC_3 (struct tee_shm_pool_mgr*) ;

__attribute__((used)) static struct tee_shm_pool *FUNC_4(void)
{
 struct tee_shm_pool_mgr *VAR_0;
 struct tee_shm_pool_mgr *VAR_1;
 void *VAR_2;

 VAR_2 = FUNC_1();
 if (FUNC_0(VAR_2))
  return VAR_2;
 VAR_0 = VAR_2;

 VAR_2 = FUNC_1();
 if (FUNC_0(VAR_2)) {
  FUNC_3(VAR_0);
  return VAR_2;
 }
 VAR_1 = VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (FUNC_0(VAR_2)) {
  FUNC_3(VAR_0);
  FUNC_3(VAR_1);
 }

 return VAR_2;
}
