
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysv_dir_entry {scalar_t__ inode; int name; } ;
struct page {int dummy; } ;
struct inode {int i_ctime; int i_mtime; int i_ino; int i_sb; } ;
struct TYPE_2__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; int d_parent; } ;
typedef int loff_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct page*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct inode*) ;
 struct inode* FUNC_6 (int ) ;
 int FUNC_7 (struct page*,int,int) ;
 struct page* FUNC_8 (struct inode*,unsigned long) ;
 unsigned long FUNC_9 (struct inode*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int ,char const*,int) ;
 int FUNC_14 (int ,int ,int) ;
 scalar_t__ FUNC_15 (int,int ,char const*,int ) ;
 scalar_t__ FUNC_16 (struct page*) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*,int,int) ;
 int FUNC_19 (struct page*) ;

int FUNC_20(struct dentry *VAR_5, struct inode *VAR_6)
{
 struct inode *VAR_7 = FUNC_6(VAR_5->d_parent);
 const char * VAR_8 = VAR_5->d_name.name;
 int VAR_9 = VAR_5->d_name.len;
 struct page *VAR_10 = ((void*)0);
 struct sysv_dir_entry * VAR_11;
 unsigned long VAR_12 = FUNC_9(VAR_7);
 unsigned long VAR_13;
 char *VAR_14;
 loff_t VAR_15;
 int VAR_16;


 for (VAR_13 = 0; VAR_13 <= VAR_12; VAR_13++) {
  VAR_10 = FUNC_8(VAR_7, VAR_13);
  VAR_16 = FUNC_2(VAR_10);
  if (FUNC_1(VAR_10))
   goto out;
  VAR_14 = (char*)FUNC_16(VAR_10);
  VAR_11 = (struct sysv_dir_entry *)VAR_14;
  VAR_14 += VAR_2 - VAR_3;
  while ((char *)VAR_11 <= VAR_14) {
   if (!VAR_11->inode)
    goto got_it;
   VAR_16 = -VAR_0;
   if (FUNC_15(VAR_9, VAR_4, VAR_8, VAR_11->name))
    goto out_page;
   VAR_11++;
  }
  FUNC_10(VAR_10);
 }
 FUNC_0();
 return -VAR_1;

got_it:
 VAR_15 = FUNC_17(VAR_10) +
   (char*)VAR_11 - (char*)FUNC_16(VAR_10);
 FUNC_11(VAR_10);
 VAR_16 = FUNC_18(VAR_10, VAR_15, VAR_3);
 if (VAR_16)
  goto out_unlock;
 FUNC_13 (VAR_11->name, VAR_8, VAR_9);
 FUNC_14 (VAR_11->name + VAR_9, 0, VAR_3 - VAR_9 - 2);
 VAR_11->inode = FUNC_4(FUNC_3(VAR_6->i_sb), VAR_6->i_ino);
 VAR_16 = FUNC_7(VAR_10, VAR_15, VAR_3);
 VAR_7->i_mtime = VAR_7->i_ctime = FUNC_5(VAR_7);
 FUNC_12(VAR_7);
out_page:
 FUNC_10(VAR_10);
out:
 return VAR_16;
out_unlock:
 FUNC_19(VAR_10);
 goto out_page;
}
