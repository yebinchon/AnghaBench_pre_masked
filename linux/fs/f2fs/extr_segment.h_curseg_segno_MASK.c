
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct curseg_info {unsigned int segno; } ;


 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct f2fs_sb_info *VAR_0,
  int VAR_1)
{
 struct curseg_info *VAR_2 = FUNC_0(VAR_0, VAR_1);
 return VAR_2->segno;
}
