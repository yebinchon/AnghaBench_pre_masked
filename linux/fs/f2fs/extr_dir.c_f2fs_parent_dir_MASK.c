
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_dir_entry {int dummy; } ;


 struct qstr FUNC_0 (char*,int) ;
 struct f2fs_dir_entry* FUNC_1 (struct inode*,struct qstr*,struct page**) ;

struct f2fs_dir_entry *FUNC_2(struct inode *VAR_0, struct page **VAR_1)
{
 struct qstr VAR_2 = FUNC_0("..", 2);

 return FUNC_1(VAR_0, &VAR_2, VAR_1);
}
