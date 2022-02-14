
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qstr {char* name; int len; } ;
struct inode {scalar_t__ i_ino; int i_sb; int i_ctime; int i_mode; } ;
struct hfsplus_sb_info {int vh_mutex; int file_count; int next_cnid; int hidden_dir; } ;
struct dentry {int d_name; void* d_fsdata; struct dentry* d_parent; } ;
typedef int cnid ;
struct TYPE_2__ {scalar_t__ linkid; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct hfsplus_sb_info* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct dentry*) ;
 int FUNC_6 (scalar_t__*,int) ;
 int FUNC_7 (scalar_t__,struct inode*,int *,struct inode*) ;
 int FUNC_8 (struct dentry*,struct inode*,scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,struct inode*,int *,int ,struct qstr*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_17(struct dentry *VAR_2, struct inode *VAR_3,
   struct dentry *VAR_4)
{
 struct hfsplus_sb_info *VAR_5 = FUNC_2(VAR_3->i_sb);
 struct inode *VAR_6 = FUNC_5(VAR_2);
 struct inode *VAR_7 = FUNC_5(VAR_2->d_parent);
 struct qstr VAR_8;
 char VAR_9[32];
 u32 VAR_10, VAR_11;
 int VAR_12;

 if (FUNC_1(VAR_6))
  return -VAR_1;
 if (!FUNC_3(VAR_6->i_mode))
  return -VAR_1;

 FUNC_14(&VAR_5->vh_mutex);
 if (VAR_6->i_ino == (u32)(unsigned long)VAR_2->d_fsdata) {
  for (;;) {
   FUNC_6(&VAR_11, sizeof(VAR_10));
   VAR_11 &= 0x3fffffff;
   VAR_8.name = VAR_9;
   VAR_8.len = FUNC_16(VAR_9, "iNode%d", VAR_11);
   VAR_12 = FUNC_10(VAR_6->i_ino,
       VAR_7, &VAR_2->d_name,
       VAR_5->hidden_dir, &VAR_8);
   if (!VAR_12)
    break;
   if (VAR_12 != -VAR_0)
    goto out;
  }
  FUNC_0(VAR_6)->linkid = VAR_11;
  VAR_10 = VAR_5->next_cnid++;
  VAR_2->d_fsdata = (void *)(unsigned long)VAR_10;
  VAR_12 = FUNC_7(VAR_10, VAR_7,
   &VAR_2->d_name, VAR_6);
  if (VAR_12)

   goto out;
  VAR_5->file_count++;
 }
 VAR_10 = VAR_5->next_cnid++;
 VAR_12 = FUNC_7(VAR_10, VAR_3, &VAR_4->d_name, VAR_6);
 if (VAR_12)
  goto out;

 FUNC_12(VAR_6);
 FUNC_8(VAR_4, VAR_6, VAR_10);
 FUNC_11(VAR_6);
 VAR_6->i_ctime = FUNC_4(VAR_6);
 FUNC_13(VAR_6);
 VAR_5->file_count++;
 FUNC_9(VAR_3->i_sb);
out:
 FUNC_15(&VAR_5->vh_mutex);
 return VAR_12;
}
