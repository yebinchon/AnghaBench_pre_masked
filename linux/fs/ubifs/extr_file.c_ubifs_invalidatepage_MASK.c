
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_info {int dirty_pg_cnt; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {TYPE_2__* i_sb; } ;
struct TYPE_4__ {struct ubifs_info* s_fs_info; } ;
struct TYPE_3__ {struct inode* host; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ubifs_info*) ;
 int FUNC_6 (struct ubifs_info*) ;
 int FUNC_7 (struct ubifs_info*,int ) ;

__attribute__((used)) static void FUNC_8(struct page *VAR_1, unsigned int VAR_2,
     unsigned int VAR_3)
{
 struct inode *VAR_4 = VAR_1->mapping->host;
 struct ubifs_info *VAR_5 = VAR_4->i_sb->s_fs_info;

 FUNC_7(VAR_5, FUNC_3(VAR_1));
 if (VAR_2 || VAR_3 < VAR_0)

  return;

 if (FUNC_2(VAR_1))
  FUNC_6(VAR_5);
 else
  FUNC_5(VAR_5);

 FUNC_4(&VAR_5->dirty_pg_cnt);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
}
