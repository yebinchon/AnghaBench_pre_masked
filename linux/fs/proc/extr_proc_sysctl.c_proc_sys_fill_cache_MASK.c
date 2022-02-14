
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {int len; int name; int hash; } ;
struct inode {int i_mode; int i_ino; int d_sb; } ;
struct TYPE_2__ {struct inode* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dir_context {int dummy; } ;
struct dentry {int i_mode; int i_ino; int d_sb; } ;
struct ctl_table_header {int dummy; } ;
struct ctl_table {int procname; } ;
typedef int ino_t ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct inode*,struct qstr*,int *) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct inode*,struct qstr*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,int *) ;
 struct inode* FUNC_8 (struct inode*,struct inode*) ;
 int FUNC_9 (struct dir_context*,int ,int ,int ,unsigned int) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,int ,int ) ;
 int VAR_1 ;
 struct inode* FUNC_12 (int ,struct ctl_table_header*,struct ctl_table*) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (struct inode*) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_15(struct file *VAR_3,
    struct dir_context *VAR_4,
    struct ctl_table_header *VAR_5,
    struct ctl_table *VAR_6)
{
 struct dentry *VAR_7, *VAR_8 = VAR_3->f_path.dentry;
 struct inode *VAR_9;
 struct qstr VAR_10;
 ino_t VAR_11 = 0;
 unsigned VAR_12 = VAR_0;

 VAR_10.name = VAR_6->procname;
 VAR_10.len = FUNC_13(VAR_6->procname);
 VAR_10.hash = FUNC_11(VAR_8, VAR_10.name, VAR_10.len);

 VAR_7 = FUNC_5(VAR_8, &VAR_10);
 if (!VAR_7) {
  FUNC_0(VAR_2);
  VAR_7 = FUNC_2(VAR_8, &VAR_10, &VAR_2);
  if (FUNC_1(VAR_7))
   return 0;
  if (FUNC_3(VAR_7)) {
   struct dentry *VAR_13;
   VAR_9 = FUNC_12(VAR_8->d_sb, VAR_5, VAR_6);
   if (FUNC_1(VAR_9)) {
    FUNC_6(VAR_7);
    FUNC_10(VAR_7);
    return 0;
   }
   FUNC_7(VAR_7, &VAR_1);
   VAR_13 = FUNC_8(VAR_9, VAR_7);
   FUNC_6(VAR_7);
   if (FUNC_14(VAR_13)) {
    if (FUNC_1(VAR_13)) {
     FUNC_10(VAR_7);
     return 0;
    }
    FUNC_10(VAR_7);
    VAR_7 = VAR_13;
   }
  }
 }
 VAR_9 = FUNC_4(VAR_7);
 VAR_11 = VAR_9->i_ino;
 VAR_12 = VAR_9->i_mode >> 12;
 FUNC_10(VAR_7);
 return FUNC_9(VAR_4, VAR_10.name, VAR_10.len, VAR_11, VAR_12);
}
