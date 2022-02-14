
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct buf_cache_t {int flag; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,unsigned long long) ;
 int VAR_1 ;
 struct buf_cache_t* FUNC_1 (struct super_block*,scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct buf_cache_t*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct super_block *VAR_2, sector_t VAR_3)
{
 struct buf_cache_t *VAR_4;

 FUNC_2(&VAR_1);

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (FUNC_3(VAR_4))
  VAR_4->flag &= ~(VAR_0);

 FUNC_0(!VAR_4, "[EXFAT] failed to find buffer_cache(sector:%llu).\n",
      (unsigned long long)VAR_3);

 FUNC_4(&VAR_1);
}
