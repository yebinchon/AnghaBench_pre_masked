
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct free_segmap_info {int segmap_lock; scalar_t__ free_sections; scalar_t__ free_segments; int start_segno; void* free_secmap; void* free_segmap; } ;
struct f2fs_sb_info {int dummy; } ;
struct TYPE_2__ {struct free_segmap_info* free_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct f2fs_sb_info*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (struct f2fs_sb_info*) ;
 TYPE_1__* FUNC_4 (struct f2fs_sb_info*) ;
 unsigned int FUNC_5 (int ) ;
 void* FUNC_6 (struct f2fs_sb_info*,unsigned int,int ) ;
 struct free_segmap_info* FUNC_7 (struct f2fs_sb_info*,int,int ) ;
 int FUNC_8 (void*,int,unsigned int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct f2fs_sb_info *VAR_2)
{
 struct free_segmap_info *VAR_3;
 unsigned int VAR_4, VAR_5;


 VAR_3 = FUNC_7(VAR_2, sizeof(struct free_segmap_info), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_4(VAR_2)->free_info = VAR_3;

 VAR_4 = FUNC_5(FUNC_3(VAR_2));
 VAR_3->free_segmap = FUNC_6(VAR_2, VAR_4, VAR_1);
 if (!VAR_3->free_segmap)
  return -VAR_0;

 VAR_5 = FUNC_5(FUNC_2(VAR_2));
 VAR_3->free_secmap = FUNC_6(VAR_2, VAR_5, VAR_1);
 if (!VAR_3->free_secmap)
  return -VAR_0;


 FUNC_8(VAR_3->free_segmap, 0xff, VAR_4);
 FUNC_8(VAR_3->free_secmap, 0xff, VAR_5);


 VAR_3->start_segno = FUNC_0(VAR_2, FUNC_1(VAR_2));
 VAR_3->free_segments = 0;
 VAR_3->free_sections = 0;
 FUNC_9(&VAR_3->segmap_lock);
 return 0;
}
