
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; } ;
struct page {int dummy; } ;
struct gfs2_sbd {struct super_block* sd_vfs; } ;


 int FUNC_0 (struct gfs2_sbd*) ;
 int FUNC_1 (struct gfs2_sbd*,struct page*,int ,int ,int ) ;

void FUNC_2(struct gfs2_sbd *VAR_0, struct page *VAR_1)
{
 struct super_block *VAR_2 = VAR_0->sd_vfs;
 FUNC_1(VAR_0, VAR_1, VAR_2->s_blocksize, 0,
         FUNC_0(VAR_0));
}
