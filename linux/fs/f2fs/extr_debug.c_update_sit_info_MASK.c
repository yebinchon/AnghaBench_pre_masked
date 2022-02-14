
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_stat_info {void* avg_vblocks; scalar_t__ dirty_count; int bimodal; } ;
struct f2fs_sb_info {scalar_t__ segs_per_sec; } ;


 unsigned long long FUNC_0 (struct f2fs_sb_info*) ;
 struct f2fs_stat_info* FUNC_1 (struct f2fs_sb_info*) ;
 unsigned long long FUNC_2 (struct f2fs_sb_info*) ;
 unsigned int FUNC_3 (struct f2fs_sb_info*) ;
 unsigned long long FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned long long,unsigned long long) ;
 void* FUNC_6 (unsigned long long,int) ;
 unsigned int FUNC_7 (struct f2fs_sb_info*,unsigned int,int) ;

__attribute__((used)) static void FUNC_8(struct f2fs_sb_info *VAR_0)
{
 struct f2fs_stat_info *VAR_1 = FUNC_1(VAR_0);
 unsigned long long VAR_2, VAR_3, VAR_4;
 unsigned long long VAR_5, VAR_6;
 unsigned int VAR_7, VAR_8;
 int VAR_9 = 0;

 VAR_5 = 0;
 VAR_4 = 0;
 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = VAR_2 / 2;
 for (VAR_7 = 0; VAR_7 < FUNC_3(VAR_0); VAR_7 += VAR_0->segs_per_sec) {
  VAR_8 = FUNC_7(VAR_0, VAR_7, 1);
  VAR_6 = FUNC_4(VAR_8 - VAR_3);
  VAR_5 += VAR_6 * VAR_6;

  if (VAR_8 > 0 && VAR_8 < VAR_2) {
   VAR_4 += VAR_8;
   VAR_9++;
  }
 }
 VAR_6 = FUNC_6(FUNC_2(VAR_0) * VAR_3 * VAR_3, 100);
 VAR_1->bimodal = FUNC_5(VAR_5, VAR_6);
 if (VAR_1->dirty_count)
  VAR_1->avg_vblocks = FUNC_6(VAR_4, VAR_9);
 else
  VAR_1->avg_vblocks = 0;
}
