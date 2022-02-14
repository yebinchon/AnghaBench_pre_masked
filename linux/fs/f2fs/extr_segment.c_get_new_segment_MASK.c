
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct free_segmap_info {int segmap_lock; int free_segmap; int free_secmap; } ;
struct f2fs_sb_info {unsigned int secs_per_zone; unsigned int segs_per_sec; } ;
struct TYPE_2__ {unsigned int zone; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct f2fs_sb_info*,int) ;
 struct free_segmap_info* FUNC_1 (struct f2fs_sb_info*) ;
 unsigned int FUNC_2 (struct f2fs_sb_info*,unsigned int) ;
 unsigned int FUNC_3 (struct f2fs_sb_info*,unsigned int) ;
 unsigned int FUNC_4 (struct f2fs_sb_info*,unsigned int) ;
 unsigned int FUNC_5 (struct f2fs_sb_info*,unsigned int) ;
 unsigned int FUNC_6 (struct f2fs_sb_info*) ;
 int VAR_2 ;
 int FUNC_7 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_8 (struct f2fs_sb_info*,int) ;
 unsigned int FUNC_9 (int ,unsigned int,unsigned int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_13(struct f2fs_sb_info *VAR_3,
   unsigned int *VAR_4, bool VAR_5, int VAR_6)
{
 struct free_segmap_info *VAR_7 = FUNC_1(VAR_3);
 unsigned int VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11 = FUNC_6(VAR_3) / VAR_3->secs_per_zone;
 unsigned int VAR_12 = FUNC_2(VAR_3, *VAR_4);
 unsigned int VAR_13 = FUNC_5(VAR_3, *VAR_4);
 unsigned int VAR_14 = VAR_12;
 bool VAR_15 = 1;
 int VAR_16 = 0;
 int VAR_17;

 FUNC_10(&VAR_7->segmap_lock);

 if (!VAR_5 && ((*VAR_4 + 1) % VAR_3->segs_per_sec)) {
  VAR_8 = FUNC_9(VAR_7->free_segmap,
   FUNC_3(VAR_3, VAR_12 + 1), *VAR_4 + 1);
  if (VAR_8 < FUNC_3(VAR_3, VAR_12 + 1))
   goto got_it;
 }
find_other_zone:
 VAR_9 = FUNC_9(VAR_7->free_secmap, FUNC_6(VAR_3), VAR_12);
 if (VAR_9 >= FUNC_6(VAR_3)) {
  if (VAR_6 == VAR_1) {
   VAR_9 = FUNC_9(VAR_7->free_secmap,
       FUNC_6(VAR_3), 0);
   FUNC_8(VAR_3, VAR_9 >= FUNC_6(VAR_3));
  } else {
   VAR_16 = 1;
   VAR_14 = VAR_12 - 1;
  }
 }
 if (VAR_16 == 0)
  goto skip_left;

 while (FUNC_12(VAR_14, VAR_7->free_secmap)) {
  if (VAR_14 > 0) {
   VAR_14--;
   continue;
  }
  VAR_14 = FUNC_9(VAR_7->free_secmap,
       FUNC_6(VAR_3), 0);
  FUNC_8(VAR_3, VAR_14 >= FUNC_6(VAR_3));
  break;
 }
 VAR_9 = VAR_14;
skip_left:
 VAR_8 = FUNC_3(VAR_3, VAR_9);
 VAR_10 = FUNC_4(VAR_3, VAR_9);


 if (!VAR_15)
  goto got_it;
 if (VAR_3->secs_per_zone == 1)
  goto got_it;
 if (VAR_10 == VAR_13)
  goto got_it;
 if (VAR_6 == VAR_0) {
  if (!VAR_16 && VAR_10 + 1 >= VAR_11)
   goto got_it;
  if (VAR_16 && VAR_10 == 0)
   goto got_it;
 }
 for (VAR_17 = 0; VAR_17 < VAR_2; VAR_17++)
  if (FUNC_0(VAR_3, VAR_17)->zone == VAR_10)
   break;

 if (VAR_17 < VAR_2) {

  if (VAR_16)
   VAR_12 = VAR_10 * VAR_3->secs_per_zone - 1;
  else if (VAR_10 + 1 >= VAR_11)
   VAR_12 = 0;
  else
   VAR_12 = (VAR_10 + 1) * VAR_3->secs_per_zone;
  VAR_15 = 0;
  goto find_other_zone;
 }
got_it:

 FUNC_8(VAR_3, FUNC_12(VAR_8, VAR_7->free_segmap));
 FUNC_7(VAR_3, VAR_8);
 *VAR_4 = VAR_8;
 FUNC_11(&VAR_7->segmap_lock);
}
