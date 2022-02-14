
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int len; int name; } ;
struct page {int dummy; } ;
struct f2fs_inode {int i_name; int i_namelen; } ;


 struct f2fs_inode* FUNC_0 (struct page*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct page*,int ,int,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static void FUNC_5(const struct qstr *VAR_1, struct page *VAR_2)
{
 struct f2fs_inode *VAR_3;

 FUNC_2(VAR_2, VAR_0, 1, 1);


 VAR_3 = FUNC_0(VAR_2);
 VAR_3->i_namelen = FUNC_1(VAR_1->len);
 FUNC_3(VAR_3->i_name, VAR_1->name, VAR_1->len);
 FUNC_4(VAR_2);
}
