
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_info {int dummy; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {TYPE_2__* i_sb; } ;
struct TYPE_4__ {struct ubifs_info* s_fs_info; } ;
struct TYPE_3__ {struct inode* host; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct ubifs_info*,int) ;

__attribute__((used)) static int FUNC_2(struct page *VAR_0)
{
 int VAR_1;
 struct inode *VAR_2 = VAR_0->mapping->host;
 struct ubifs_info *VAR_3 = VAR_2->i_sb->s_fs_info;

 VAR_1 = FUNC_0(VAR_0);




 FUNC_1(VAR_3, VAR_1 == 0);
 return VAR_1;
}
