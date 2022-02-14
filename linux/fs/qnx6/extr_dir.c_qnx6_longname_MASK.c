
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int s_blocksize_bits; } ;
struct qnx6_sb_info {TYPE_1__* longfile; } ;
struct qnx6_long_filename {int dummy; } ;
struct qnx6_long_dir_entry {int de_long_inode; } ;
struct page {int dummy; } ;
struct address_space {int dummy; } ;
struct TYPE_2__ {struct address_space* i_mapping; } ;


 struct qnx6_long_filename* FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct qnx6_sb_info* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct qnx6_sb_info*,int ) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 struct page* FUNC_6 (struct address_space*,int,int *) ;

__attribute__((used)) static struct qnx6_long_filename *FUNC_7(struct super_block *VAR_2,
      struct qnx6_long_dir_entry *VAR_3,
      struct page **VAR_4)
{
 struct qnx6_sb_info *VAR_5 = FUNC_2(VAR_2);
 u32 VAR_6 = FUNC_3(VAR_5, VAR_3->de_long_inode);
 u32 VAR_7 = VAR_6 >> (VAR_1 - VAR_2->s_blocksize_bits);

 u32 VAR_8 = (VAR_6 << VAR_2->s_blocksize_bits) & ~VAR_0;
 struct address_space *VAR_9 = VAR_5->longfile->i_mapping;
 struct page *VAR_10 = FUNC_6(VAR_9, VAR_7, ((void*)0));
 if (FUNC_1(VAR_10))
  return FUNC_0(VAR_10);
 FUNC_4(*VAR_4 = VAR_10);
 return (struct qnx6_long_filename *)(FUNC_5(VAR_10) + VAR_8);
}
