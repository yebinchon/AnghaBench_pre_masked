
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sit_info {unsigned long long min_mtime; unsigned long long max_mtime; } ;
struct f2fs_sb_info {unsigned int segs_per_sec; unsigned int log_blocks_per_seg; } ;
struct TYPE_2__ {scalar_t__ mtime; } ;


 unsigned int FUNC_0 (struct f2fs_sb_info*,unsigned int) ;
 unsigned int FUNC_1 (struct f2fs_sb_info*,unsigned int) ;
 struct sit_info* FUNC_2 (struct f2fs_sb_info*) ;
 unsigned int VAR_0 ;
 int FUNC_3 (int,unsigned long long) ;
 void* FUNC_4 (unsigned int,unsigned int) ;
 TYPE_1__* FUNC_5 (struct f2fs_sb_info*,unsigned int) ;
 unsigned int FUNC_6 (struct f2fs_sb_info*,unsigned int,int) ;

__attribute__((used)) static unsigned int FUNC_7(struct f2fs_sb_info *VAR_1, unsigned int VAR_2)
{
 struct sit_info *VAR_3 = FUNC_2(VAR_1);
 unsigned int VAR_4 = FUNC_0(VAR_1, VAR_2);
 unsigned int VAR_5 = FUNC_1(VAR_1, VAR_4);
 unsigned long long VAR_6 = 0;
 unsigned int VAR_7;
 unsigned char VAR_8 = 0;
 unsigned char VAR_9;
 unsigned int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_1->segs_per_sec; VAR_10++)
  VAR_6 += FUNC_5(VAR_1, VAR_5 + VAR_10)->mtime;
 VAR_7 = FUNC_6(VAR_1, VAR_2, 1);

 VAR_6 = FUNC_4(VAR_6, VAR_1->segs_per_sec);
 VAR_7 = FUNC_4(VAR_7, VAR_1->segs_per_sec);

 VAR_9 = (VAR_7 * 100) >> VAR_1->log_blocks_per_seg;


 if (VAR_6 < VAR_3->min_mtime)
  VAR_3->min_mtime = VAR_6;
 if (VAR_6 > VAR_3->max_mtime)
  VAR_3->max_mtime = VAR_6;
 if (VAR_3->max_mtime != VAR_3->min_mtime)
  VAR_8 = 100 - FUNC_3(100 * (VAR_6 - VAR_3->min_mtime),
    VAR_3->max_mtime - VAR_3->min_mtime);

 return VAR_0 - ((100 * (100 - VAR_9) * VAR_8) / (100 + VAR_9));
}
