
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct minix_sb_info {char* s_dirsize; scalar_t__ s_version; int s_namelen; } ;
struct inode {int i_ctime; int i_mtime; scalar_t__ i_ino; struct super_block* i_sb; } ;
struct TYPE_4__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; int d_parent; } ;
struct TYPE_5__ {char* name; scalar_t__ inode; } ;
typedef TYPE_2__ minix_dirent ;
struct TYPE_6__ {char* name; scalar_t__ inode; } ;
typedef TYPE_3__ minix3_dirent ;
typedef int loff_t ;
typedef scalar_t__ __u32 ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (int ) ;
 int FUNC_5 (struct page*,int,char*) ;
 struct page* FUNC_6 (struct inode*,unsigned long) ;
 unsigned long FUNC_7 (struct inode*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (char*,char const*,int) ;
 int FUNC_12 (char*,int ,char*) ;
 int FUNC_13 (struct inode*,unsigned long) ;
 char* FUNC_14 (char*,struct minix_sb_info*) ;
 int FUNC_15 (struct page*,int,char*) ;
 struct minix_sb_info* FUNC_16 (struct super_block*) ;
 scalar_t__ FUNC_17 (int,int ,char const*,char*) ;
 scalar_t__ FUNC_18 (struct page*) ;
 int FUNC_19 (struct page*) ;
 int FUNC_20 (struct page*) ;

int FUNC_21(struct dentry *VAR_4, struct inode *VAR_5)
{
 struct inode *VAR_6 = FUNC_4(VAR_4->d_parent);
 const char * VAR_7 = VAR_4->d_name.name;
 int VAR_8 = VAR_4->d_name.len;
 struct super_block * VAR_9 = VAR_6->i_sb;
 struct minix_sb_info * VAR_10 = FUNC_16(VAR_9);
 struct page *VAR_11 = ((void*)0);
 unsigned long VAR_12 = FUNC_7(VAR_6);
 unsigned long VAR_13;
 char *VAR_14, *VAR_15;
 minix_dirent *VAR_16;
 minix3_dirent *VAR_17;
 loff_t VAR_18;
 int VAR_19;
 char *VAR_20 = ((void*)0);
 __u32 VAR_21;






 for (VAR_13 = 0; VAR_13 <= VAR_12; VAR_13++) {
  char *VAR_22, *VAR_23;

  VAR_11 = FUNC_6(VAR_6, VAR_13);
  VAR_19 = FUNC_2(VAR_11);
  if (FUNC_1(VAR_11))
   goto out;
  FUNC_9(VAR_11);
  VAR_14 = (char*)FUNC_18(VAR_11);
  VAR_23 = VAR_14 + FUNC_13(VAR_6, VAR_13);
  VAR_22 = VAR_14 + VAR_3 - VAR_10->s_dirsize;
  for (VAR_15 = VAR_14; VAR_15 <= VAR_22; VAR_15 = FUNC_14(VAR_15, VAR_10)) {
   VAR_16 = (minix_dirent *)VAR_15;
   VAR_17 = (minix3_dirent *)VAR_15;
   if (VAR_10->s_version == VAR_2) {
    VAR_20 = VAR_17->name;
    VAR_21 = VAR_17->inode;
    } else {
      VAR_20 = VAR_16->name;
    VAR_21 = VAR_16->inode;
   }
   if (VAR_15 == VAR_23) {

    if (VAR_10->s_version == VAR_2)
     VAR_17->inode = 0;
     else
     VAR_16->inode = 0;
    goto got_it;
   }
   if (!VAR_21)
    goto got_it;
   VAR_19 = -VAR_0;
   if (FUNC_17(VAR_8, VAR_10->s_namelen, VAR_7, VAR_20))
    goto out_unlock;
  }
  FUNC_20(VAR_11);
  FUNC_8(VAR_11);
 }
 FUNC_0();
 return -VAR_1;

got_it:
 VAR_18 = FUNC_19(VAR_11) + VAR_15 - (char *)FUNC_18(VAR_11);
 VAR_19 = FUNC_15(VAR_11, VAR_18, VAR_10->s_dirsize);
 if (VAR_19)
  goto out_unlock;
 FUNC_11 (VAR_20, VAR_7, VAR_8);
 if (VAR_10->s_version == VAR_2) {
  FUNC_12 (VAR_20 + VAR_8, 0, VAR_10->s_dirsize - VAR_8 - 4);
  VAR_17->inode = VAR_5->i_ino;
 } else {
  FUNC_12 (VAR_20 + VAR_8, 0, VAR_10->s_dirsize - VAR_8 - 2);
  VAR_16->inode = VAR_5->i_ino;
 }
 VAR_19 = FUNC_5(VAR_11, VAR_18, VAR_10->s_dirsize);
 VAR_6->i_mtime = VAR_6->i_ctime = FUNC_3(VAR_6);
 FUNC_10(VAR_6);
out_put:
 FUNC_8(VAR_11);
out:
 return VAR_19;
out_unlock:
 FUNC_20(VAR_11);
 goto out_put;
}
