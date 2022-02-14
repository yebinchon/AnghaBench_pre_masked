
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_cache_info {int * cache; } ;


 int FUNC_0 (struct ecryptfs_cache_info*) ;
 struct ecryptfs_cache_info* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_1;





 FUNC_2();

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++) {
  struct ecryptfs_cache_info *VAR_2;

  VAR_2 = &VAR_0[VAR_1];
  FUNC_1(*(VAR_2->cache));
 }
}
