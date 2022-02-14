
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int blocks_per_seg; } ;


 int VAR_0 ;
 int FUNC_0 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct f2fs_sb_info *VAR_1)
{
 return FUNC_0(VAR_1, VAR_0) >= VAR_1->blocks_per_seg * 8;
}
