
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct path {TYPE_1__* dentry; } ;
struct inode {int i_mode; } ;
struct iattr {int ia_valid; int ia_gid; int ia_uid; } ;
typedef int kuid_t ;
typedef int kgid_t ;
typedef scalar_t__ gid_t ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode**) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,struct iattr*,struct inode**) ;
 int FUNC_9 (struct path const*,int ,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(const struct path *VAR_7, uid_t VAR_8, gid_t VAR_9)
{
 struct inode *VAR_10 = VAR_7->dentry->d_inode;
 struct inode *VAR_11 = ((void*)0);
 int VAR_12;
 struct iattr VAR_13;
 kuid_t VAR_14;
 kgid_t VAR_15;

 VAR_14 = FUNC_7(FUNC_2(), VAR_8);
 VAR_15 = FUNC_6(FUNC_2(), VAR_9);

retry_deleg:
 VAR_13.ia_valid = VAR_0;
 if (VAR_8 != (uid_t) -1) {
  if (!FUNC_10(VAR_14))
   return -VAR_6;
  VAR_13.ia_valid |= VAR_5;
  VAR_13.ia_uid = VAR_14;
 }
 if (VAR_9 != (gid_t) -1) {
  if (!FUNC_3(VAR_15))
   return -VAR_6;
  VAR_13.ia_valid |= VAR_1;
  VAR_13.ia_gid = VAR_15;
 }
 if (!FUNC_0(VAR_10->i_mode))
  VAR_13.ia_valid |=
   VAR_4 | VAR_3 | VAR_2;
 FUNC_4(VAR_10);
 VAR_12 = FUNC_9(VAR_7, VAR_14, VAR_15);
 if (!VAR_12)
  VAR_12 = FUNC_8(VAR_7->dentry, &VAR_13, &VAR_11);
 FUNC_5(VAR_10);
 if (VAR_11) {
  VAR_12 = FUNC_1(&VAR_11);
  if (!VAR_12)
   goto retry_deleg;
 }
 return VAR_12;
}
