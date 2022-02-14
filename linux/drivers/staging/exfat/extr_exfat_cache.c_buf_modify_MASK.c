
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct buf_cache_t {int buf_bh; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (int,char*,unsigned long long) ;
 int VAR_0 ;
 struct buf_cache_t* FUNC_1 (struct super_block*,scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct buf_cache_t*) ;
 int FUNC_4 (struct super_block*,scalar_t__,int ,int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct super_block *VAR_1, sector_t VAR_2)
{
 struct buf_cache_t *VAR_3;

 FUNC_2(&VAR_0);

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (FUNC_3(VAR_3))
  FUNC_4(VAR_1, VAR_2, VAR_3->buf_bh, 0);

 FUNC_0(!VAR_3, "[EXFAT] failed to find buffer_cache(sector:%llu).\n",
      (unsigned long long)VAR_2);

 FUNC_5(&VAR_0);
}
