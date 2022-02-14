
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qstr {char* name; int len; } ;
struct inode {scalar_t__ i_ino; scalar_t__ i_nlink; int i_ctime; int i_flags; int i_sb; } ;
struct hfsplus_sb_info {int vh_mutex; int file_count; struct inode* hidden_dir; } ;
struct dentry {int d_name; scalar_t__ d_fsdata; } ;
struct TYPE_2__ {int opencnt; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct hfsplus_sb_info* FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 struct inode* FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (scalar_t__,struct inode*,int *) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (scalar_t__,struct inode*,int *,struct inode*,struct qstr*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_2, struct dentry *VAR_3)
{
 struct hfsplus_sb_info *VAR_4 = FUNC_2(VAR_2->i_sb);
 struct inode *VAR_5 = FUNC_6(VAR_3);
 struct qstr VAR_6;
 char VAR_7[32];
 u32 VAR_8;
 int VAR_9;

 if (FUNC_1(VAR_5))
  return -VAR_0;

 FUNC_12(&VAR_4->vh_mutex);
 VAR_8 = (u32)(unsigned long)VAR_3->d_fsdata;
 if (VAR_5->i_ino == VAR_8 &&
     FUNC_3(&FUNC_0(VAR_5)->opencnt)) {
  VAR_6.name = VAR_7;
  VAR_6.len = FUNC_14(VAR_7, "temp%lu", VAR_5->i_ino);
  VAR_9 = FUNC_10(VAR_5->i_ino,
      VAR_2, &VAR_3->d_name,
      VAR_4->hidden_dir, &VAR_6);
  if (!VAR_9) {
   VAR_5->i_flags |= VAR_1;
   FUNC_7(VAR_5);
  }
  goto out;
 }
 VAR_9 = FUNC_8(VAR_8, VAR_2, &VAR_3->d_name);
 if (VAR_9)
  goto out;

 if (VAR_5->i_nlink > 0)
  FUNC_7(VAR_5);
 if (VAR_5->i_ino == VAR_8)
  FUNC_4(VAR_5);
 if (!VAR_5->i_nlink) {
  if (VAR_5->i_ino != VAR_8) {
   VAR_4->file_count--;
   if (!FUNC_3(&FUNC_0(VAR_5)->opencnt)) {
    VAR_9 = FUNC_8(VAR_5->i_ino,
        VAR_4->hidden_dir,
        ((void*)0));
    if (!VAR_9)
     FUNC_9(VAR_5);
   } else
    VAR_5->i_flags |= VAR_1;
  } else
   FUNC_9(VAR_5);
 } else
  VAR_4->file_count--;
 VAR_5->i_ctime = FUNC_5(VAR_5);
 FUNC_11(VAR_5);
out:
 FUNC_13(&VAR_4->vh_mutex);
 return VAR_9;
}
