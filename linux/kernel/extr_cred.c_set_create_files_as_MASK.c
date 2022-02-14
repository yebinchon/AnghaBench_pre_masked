
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_gid; int i_uid; } ;
struct cred {int fsgid; int fsuid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cred*,struct inode*) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct cred *VAR_1, struct inode *VAR_2)
{
 if (!FUNC_2(VAR_2->i_uid) || !FUNC_0(VAR_2->i_gid))
  return -VAR_0;
 VAR_1->fsuid = VAR_2->i_uid;
 VAR_1->fsgid = VAR_2->i_gid;
 return FUNC_1(VAR_1, VAR_2);
}
