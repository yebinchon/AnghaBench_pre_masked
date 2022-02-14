
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {scalar_t__ tv_nsec; } ;
struct path {int mnt; TYPE_1__* dentry; } ;
struct inode {int dummy; } ;
struct iattr {int ia_valid; void* ia_mtime; void* ia_atime; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct inode**) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,struct iattr*,struct inode**) ;
 void* FUNC_6 (struct timespec64,struct inode*) ;

__attribute__((used)) static int FUNC_7(const struct path *VAR_9, struct timespec64 *VAR_10)
{
 int VAR_11;
 struct iattr VAR_12;
 struct inode *VAR_13 = VAR_9->dentry->d_inode;
 struct inode *VAR_14 = ((void*)0);

 VAR_11 = FUNC_4(VAR_9->mnt);
 if (VAR_11)
  goto out;

 if (VAR_10 && VAR_10[0].tv_nsec == VAR_7 &&
       VAR_10[1].tv_nsec == VAR_7)
  VAR_10 = ((void*)0);

 VAR_12.ia_valid = VAR_2 | VAR_3 | VAR_0;
 if (VAR_10) {
  if (VAR_10[0].tv_nsec == VAR_8)
   VAR_12.ia_valid &= ~VAR_0;
  else if (VAR_10[0].tv_nsec != VAR_7) {
   VAR_12.ia_atime = FUNC_6(VAR_10[0], VAR_13);
   VAR_12.ia_valid |= VAR_1;
  }

  if (VAR_10[1].tv_nsec == VAR_8)
   VAR_12.ia_valid &= ~VAR_3;
  else if (VAR_10[1].tv_nsec != VAR_7) {
   VAR_12.ia_mtime = FUNC_6(VAR_10[1], VAR_13);
   VAR_12.ia_valid |= VAR_4;
  }





  VAR_12.ia_valid |= VAR_5;
 } else {
  VAR_12.ia_valid |= VAR_6;
 }
retry_deleg:
 FUNC_1(VAR_13);
 VAR_11 = FUNC_5(VAR_9->dentry, &VAR_12, &VAR_14);
 FUNC_2(VAR_13);
 if (VAR_14) {
  VAR_11 = FUNC_0(&VAR_14);
  if (!VAR_11)
   goto retry_deleg;
 }

 FUNC_3(VAR_9->mnt);
out:
 return VAR_11;
}
