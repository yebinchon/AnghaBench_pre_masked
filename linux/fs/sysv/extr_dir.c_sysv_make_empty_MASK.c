
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_dir_entry {int name; void* inode; } ;
struct page {int dummy; } ;
struct inode {int i_ino; int i_sb; int i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct page*,int ,int) ;
 struct page* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (char*,int ,int ) ;
 scalar_t__ FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct page*,int ,int) ;
 int FUNC_11 (struct page*) ;

int FUNC_12(struct inode *VAR_3, struct inode *VAR_4)
{
 struct page *VAR_5 = FUNC_3(VAR_3->i_mapping, 0);
 struct sysv_dir_entry * VAR_6;
 char *VAR_7;
 int VAR_8;

 if (!VAR_5)
  return -VAR_0;
 VAR_8 = FUNC_10(VAR_5, 0, 2 * VAR_2);
 if (VAR_8) {
  FUNC_11(VAR_5);
  goto fail;
 }
 FUNC_4(VAR_5);

 VAR_7 = (char*)FUNC_7(VAR_5);
 FUNC_6(VAR_7, 0, VAR_1);

 VAR_6 = (struct sysv_dir_entry *) VAR_7;
 VAR_6->inode = FUNC_1(FUNC_0(VAR_3->i_sb), VAR_3->i_ino);
 FUNC_9(VAR_6->name,".");
 VAR_6++;
 VAR_6->inode = FUNC_1(FUNC_0(VAR_3->i_sb), VAR_4->i_ino);
 FUNC_9(VAR_6->name,"..");

 FUNC_5(VAR_5);
 VAR_8 = FUNC_2(VAR_5, 0, 2 * VAR_2);
fail:
 FUNC_8(VAR_5);
 return VAR_8;
}
