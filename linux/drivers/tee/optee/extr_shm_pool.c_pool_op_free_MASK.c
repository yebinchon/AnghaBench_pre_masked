
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_shm_pool_mgr {int dummy; } ;
struct tee_shm {int * kaddr; int size; } ;


 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tee_shm_pool_mgr *VAR_0,
    struct tee_shm *VAR_1)
{
 FUNC_0((unsigned long)VAR_1->kaddr, FUNC_1(VAR_1->size));
 VAR_1->kaddr = ((void*)0);
}
