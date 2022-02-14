
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct free_segmap_info {int free_sections; int free_secmap; int free_segments; int free_segmap; } ;
struct f2fs_sb_info {int dummy; } ;


 struct free_segmap_info* FUNC_0 (struct f2fs_sb_info*) ;
 unsigned int FUNC_1 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static inline void FUNC_4(struct f2fs_sb_info *VAR_0,
  unsigned int VAR_1)
{
 struct free_segmap_info *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3 = FUNC_1(VAR_0, VAR_1);

 FUNC_2(VAR_1, VAR_2->free_segmap);
 VAR_2->free_segments--;
 if (!FUNC_3(VAR_3, VAR_2->free_secmap))
  VAR_2->free_sections--;
}
