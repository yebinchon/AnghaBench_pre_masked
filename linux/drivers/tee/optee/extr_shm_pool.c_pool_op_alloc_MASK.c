
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_shm_pool_mgr {int dummy; } ;
struct tee_shm {unsigned int size; int paddr; int kaddr; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_0 (int,unsigned int) ;
 unsigned int FUNC_1 (size_t) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct tee_shm_pool_mgr *VAR_4,
    struct tee_shm *VAR_5, size_t VAR_6)
{
 unsigned int VAR_7 = FUNC_1(VAR_6);
 struct page *VAR_8;

 VAR_8 = FUNC_0(VAR_1 | VAR_3, VAR_7);
 if (!VAR_8)
  return -VAR_0;

 VAR_5->kaddr = FUNC_2(VAR_8);
 VAR_5->paddr = FUNC_3(VAR_8);
 VAR_5->size = VAR_2 << VAR_7;

 return 0;
}
