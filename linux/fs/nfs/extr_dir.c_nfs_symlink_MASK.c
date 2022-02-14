
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct iattr {int ia_mode; int ia_valid; } ;
struct dentry {int dummy; } ;
struct TYPE_6__ {int (* symlink ) (struct inode*,struct dentry*,struct page*,unsigned int,struct iattr*) ;} ;
struct TYPE_5__ {int i_mapping; } ;
struct TYPE_4__ {int s_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct page*) ;
 int VAR_8 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ,int ,int ) ;
 struct page* FUNC_4 (int ) ;
 int FUNC_5 (struct dentry*) ;
 TYPE_2__* FUNC_6 (struct dentry*) ;
 int FUNC_7 (int ,char*,int ,int ,struct dentry*,char const*,...) ;
 int FUNC_8 (char*,char const*,unsigned int) ;
 int FUNC_9 (char*,int ,unsigned int) ;
 char* FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 unsigned int FUNC_12 (char const*) ;
 int FUNC_13 (struct inode*,struct dentry*,struct page*,unsigned int,struct iattr*) ;
 int FUNC_14 (struct inode*,struct dentry*) ;
 int FUNC_15 (struct inode*,struct dentry*,int) ;
 int FUNC_16 (struct page*) ;

int FUNC_17(struct inode *VAR_9, struct dentry *VAR_10, const char *VAR_11)
{
 struct page *VAR_12;
 char *VAR_13;
 struct iattr VAR_14;
 unsigned int VAR_15 = FUNC_12(VAR_11);
 int VAR_16;

 FUNC_7(VAR_8, "NFS: symlink(%s/%lu, %pd, %s)\n", VAR_9->i_sb->s_id,
  VAR_9->i_ino, VAR_10, VAR_11);

 if (VAR_15 > VAR_5)
  return -VAR_1;

 VAR_14.ia_mode = VAR_6 | VAR_7;
 VAR_14.ia_valid = VAR_0;

 VAR_12 = FUNC_4(VAR_4);
 if (!VAR_12)
  return -VAR_2;

 VAR_13 = FUNC_10(VAR_12);
 FUNC_8(VAR_13, VAR_11, VAR_15);
 if (VAR_15 < VAR_5)
  FUNC_9(VAR_13 + VAR_15, 0, VAR_5 - VAR_15);

 FUNC_14(VAR_9, VAR_10);
 VAR_16 = FUNC_0(VAR_9)->symlink(VAR_9, VAR_10, VAR_12, VAR_15, &VAR_14);
 FUNC_15(VAR_9, VAR_10, VAR_16);
 if (VAR_16 != 0) {
  FUNC_7(VAR_8, "NFS: symlink(%s/%lu, %pd, %s) error %d\n",
   VAR_9->i_sb->s_id, VAR_9->i_ino,
   VAR_10, VAR_11, VAR_16);
  FUNC_5(VAR_10);
  FUNC_2(VAR_12);
  return VAR_16;
 }





 if (!FUNC_3(VAR_12, FUNC_6(VAR_10)->i_mapping, 0,
       VAR_3)) {
  FUNC_1(VAR_12);
  FUNC_16(VAR_12);




  FUNC_11(VAR_12);
 } else
  FUNC_2(VAR_12);

 return 0;
}
