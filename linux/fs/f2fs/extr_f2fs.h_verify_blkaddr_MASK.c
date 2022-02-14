
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
typedef int block_t ;


 int FUNC_0 (struct f2fs_sb_info*,int) ;
 int FUNC_1 (struct f2fs_sb_info*,char*,int ,int) ;
 int FUNC_2 (struct f2fs_sb_info*,int ,int) ;

__attribute__((used)) static inline void FUNC_3(struct f2fs_sb_info *VAR_0,
     block_t VAR_1, int VAR_2)
{
 if (!FUNC_2(VAR_0, VAR_1, VAR_2)) {
  FUNC_1(VAR_0, "invalid blkaddr: %u, type: %d, run fsck to fix.",
    VAR_1, VAR_2);
  FUNC_0(VAR_0, 1);
 }
}
