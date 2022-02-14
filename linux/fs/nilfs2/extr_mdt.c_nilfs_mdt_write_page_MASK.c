
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; scalar_t__ for_reclaim; } ;
struct super_block {int dummy; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct page*,int) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,int ) ;
 int FUNC_3 (struct writeback_control*,struct page*) ;
 scalar_t__ FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static int
FUNC_6(struct page *VAR_2, struct writeback_control *VAR_3)
{
 struct inode *VAR_4 = VAR_2->mapping->host;
 struct super_block *VAR_5;
 int VAR_6 = 0;

 if (VAR_4 && FUNC_4(VAR_4->i_sb)) {






  FUNC_0(VAR_2, 0);
  FUNC_5(VAR_2);
  return -VAR_0;
 }

 FUNC_3(VAR_3, VAR_2);
 FUNC_5(VAR_2);

 if (!VAR_4)
  return 0;

 VAR_5 = VAR_4->i_sb;

 if (VAR_3->sync_mode == VAR_1)
  VAR_6 = FUNC_1(VAR_5);
 else if (VAR_3->for_reclaim)
  FUNC_2(VAR_5, VAR_4->i_ino);

 return VAR_6;
}
