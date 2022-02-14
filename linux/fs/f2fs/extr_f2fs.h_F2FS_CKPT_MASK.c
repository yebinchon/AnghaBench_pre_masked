
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {scalar_t__ ckpt; } ;
struct f2fs_checkpoint {int dummy; } ;



__attribute__((used)) static inline struct f2fs_checkpoint *FUNC_0(struct f2fs_sb_info *VAR_0)
{
 return (struct f2fs_checkpoint *)(VAR_0->ckpt);
}
