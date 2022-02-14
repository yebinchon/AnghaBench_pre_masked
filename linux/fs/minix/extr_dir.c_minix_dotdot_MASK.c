
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct minix_sb_info {int dummy; } ;
struct minix_dir_entry {int dummy; } ;
struct inode {int i_sb; } ;


 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (struct inode*,int ) ;
 struct minix_dir_entry* FUNC_2 (int ,struct minix_sb_info*) ;
 struct minix_sb_info* FUNC_3 (int ) ;
 int FUNC_4 (struct page*) ;

struct minix_dir_entry * FUNC_5 (struct inode *VAR_0, struct page **VAR_1)
{
 struct page *VAR_2 = FUNC_1(VAR_0, 0);
 struct minix_sb_info *VAR_3 = FUNC_3(VAR_0->i_sb);
 struct minix_dir_entry *VAR_4 = ((void*)0);

 if (!FUNC_0(VAR_2)) {
  VAR_4 = FUNC_2(FUNC_4(VAR_2), VAR_3);
  *VAR_1 = VAR_2;
 }
 return VAR_4;
}
