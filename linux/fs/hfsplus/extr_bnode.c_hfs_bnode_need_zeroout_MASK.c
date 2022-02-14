
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct hfsplus_sb_info {TYPE_2__* s_vhdr; } ;
struct hfs_btree {scalar_t__ cnid; TYPE_1__* inode; } ;
struct TYPE_4__ {int attributes; } ;
struct TYPE_3__ {struct super_block* i_sb; } ;


 scalar_t__ VAR_0 ;
 struct hfsplus_sb_info* FUNC_0 (struct super_block*) ;
 int const VAR_1 ;
 int FUNC_1 (int ) ;

bool FUNC_2(struct hfs_btree *VAR_2)
{
 struct super_block *VAR_3 = VAR_2->inode->i_sb;
 struct hfsplus_sb_info *VAR_4 = FUNC_0(VAR_3);
 const u32 VAR_5 = FUNC_1(VAR_4->s_vhdr->attributes);

 return VAR_2->cnid == VAR_0 &&
  VAR_5 & VAR_1;
}
