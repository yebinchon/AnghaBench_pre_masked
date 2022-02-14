
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_super {TYPE_1__* root_inode; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_ino; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,char*,unsigned long long,unsigned long long) ;
 int FUNC_4 (int) ;
 struct inode* FUNC_5 (struct ocfs2_super*,scalar_t__,int ,int ) ;
 int FUNC_6 (struct inode*,int *,int ) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (struct inode*,char*,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_9(struct ocfs2_super *VAR_3,
  u64 VAR_4, u64 VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0;
 u64 VAR_8 = 0;
 u64 VAR_9 = VAR_4;
 struct inode *VAR_10;


 while (1) {
  VAR_10 = FUNC_5(VAR_3, VAR_9, 0, 0);
  if (FUNC_0(VAR_10)) {
   VAR_6 = FUNC_1(VAR_10);
   break;
  }

  VAR_6 = FUNC_6(VAR_10, ((void*)0), 0);
  if (VAR_6 < 0) {
   FUNC_2(VAR_10);
   if (VAR_6 != -VAR_0)
    FUNC_4(VAR_6);
   break;
  }

  VAR_6 = FUNC_8(VAR_10, "..", 2,
    &VAR_8);
  FUNC_7(VAR_10, 0);
  FUNC_2(VAR_10);
  if (VAR_6 < 0) {
   VAR_6 = -VAR_0;
   break;
  }

  if (VAR_8 == VAR_5) {
   VAR_6 = 1;
   break;
  }

  if (VAR_8 == VAR_3->root_inode->i_ino) {
   VAR_6 = 0;
   break;
  }

  VAR_9 = VAR_8;

  if (++VAR_7 >= 32) {
   FUNC_3(VAR_2, "max lookup times reached, filesystem "
     "may have nested directories, "
     "src inode: %llu, dest inode: %llu.\n",
     (unsigned long long)VAR_4,
     (unsigned long long)VAR_5);
   VAR_6 = 0;
   break;
  }
 }

 return VAR_6;
}
