
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tid_t ;
struct inode {scalar_t__ i_nlink; int i_sb; int i_mode; } ;
struct TYPE_2__ {int commit_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,struct inode*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int,struct inode**,int ) ;
 int FUNC_10 (int ) ;

int FUNC_11(struct inode *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 tid_t VAR_6;
 static int VAR_7 = 5;

 FUNC_3("In jfs_commit_inode, inode = 0x%p", VAR_3);





 if (VAR_3->i_nlink == 0 || !FUNC_7(VAR_0, VAR_3))
  return 0;

 if (FUNC_1(VAR_3)) {



  if (!FUNC_6(VAR_3->i_mode) && VAR_7) {
   FUNC_2("jfs_commit_inode(0x%p) called on read-only volume",
    VAR_3);
   FUNC_2("Is remount racy?");
   VAR_7--;
  }
  return 0;
 }

 VAR_6 = FUNC_8(VAR_3->i_sb, VAR_1);
 FUNC_4(&FUNC_0(VAR_3)->commit_mutex);




 if (VAR_3->i_nlink && FUNC_7(VAR_0, VAR_3))
  VAR_5 = FUNC_9(VAR_6, 1, &VAR_3, VAR_4 ? VAR_2 : 0);

 FUNC_10(VAR_6);
 FUNC_5(&FUNC_0(VAR_3)->commit_mutex);
 return VAR_5;
}
