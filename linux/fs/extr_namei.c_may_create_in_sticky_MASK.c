
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; int i_uid; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_2__ {int i_mode; int i_uid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct dentry * const VAR_4,
    struct inode * const VAR_5)
{
 if ((!VAR_2 && FUNC_0(VAR_5->i_mode)) ||
     (!VAR_3 && FUNC_1(VAR_5->i_mode)) ||
     FUNC_3(!(VAR_4->d_inode->i_mode & VAR_1)) ||
     FUNC_4(VAR_5->i_uid, VAR_4->d_inode->i_uid) ||
     FUNC_4(FUNC_2(), VAR_5->i_uid))
  return 0;

 if (FUNC_3(VAR_4->d_inode->i_mode & 0002) ||
     (VAR_4->d_inode->i_mode & 0020 &&
      ((VAR_2 >= 2 && FUNC_0(VAR_5->i_mode)) ||
       (VAR_3 >= 2 && FUNC_1(VAR_5->i_mode))))) {
  return -VAR_0;
 }
 return 0;
}
