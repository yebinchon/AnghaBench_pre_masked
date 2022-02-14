
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct buf_cache_t {int buf_bh; } ;
typedef int sector_t ;


 struct buf_cache_t* FUNC_0 (struct super_block*,int ) ;
 int FUNC_1 (struct super_block*,int ,int ,int ) ;

void FUNC_2(struct super_block *VAR_0, sector_t VAR_1)
{
 struct buf_cache_t *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_1(VAR_0, VAR_1, VAR_2->buf_bh, 0);
}
