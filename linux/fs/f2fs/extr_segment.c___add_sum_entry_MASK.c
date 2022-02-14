
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_summary {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct curseg_info {int next_blkoff; void* sum_blk; } ;


 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int) ;
 int FUNC_1 (void*,struct f2fs_summary*,int) ;

__attribute__((used)) static void FUNC_2(struct f2fs_sb_info *VAR_0, int VAR_1,
     struct f2fs_summary *VAR_2)
{
 struct curseg_info *VAR_3 = FUNC_0(VAR_0, VAR_1);
 void *VAR_4 = VAR_3->sum_blk;
 VAR_4 += VAR_3->next_blkoff * sizeof(struct f2fs_summary);
 FUNC_1(VAR_4, VAR_2, sizeof(struct f2fs_summary));
}
