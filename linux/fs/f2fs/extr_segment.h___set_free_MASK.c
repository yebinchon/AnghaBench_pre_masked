
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct free_segmap_info {int segmap_lock; int free_sections; int free_secmap; int free_segmap; int free_segments; } ;
struct f2fs_sb_info {unsigned int segs_per_sec; } ;


 struct free_segmap_info* FUNC_0 (struct f2fs_sb_info*) ;
 unsigned int FUNC_1 (struct f2fs_sb_info*,unsigned int) ;
 unsigned int FUNC_2 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_3 (unsigned int,int ) ;
 unsigned int FUNC_4 (int ,unsigned int,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline void FUNC_7(struct f2fs_sb_info *VAR_0, unsigned int VAR_1)
{
 struct free_segmap_info *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3 = FUNC_1(VAR_0, VAR_1);
 unsigned int VAR_4 = FUNC_2(VAR_0, VAR_3);
 unsigned int VAR_5;

 FUNC_5(&VAR_2->segmap_lock);
 FUNC_3(VAR_1, VAR_2->free_segmap);
 VAR_2->free_segments++;

 VAR_5 = FUNC_4(VAR_2->free_segmap,
   VAR_4 + VAR_0->segs_per_sec, VAR_4);
 if (VAR_5 >= VAR_4 + VAR_0->segs_per_sec) {
  FUNC_3(VAR_3, VAR_2->free_secmap);
  VAR_2->free_sections++;
 }
 FUNC_6(&VAR_2->segmap_lock);
}
