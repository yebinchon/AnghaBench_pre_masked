
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct posix_acl {int dummy; } ;
struct inode {int i_gid; int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct posix_acl*,int *) ;

int FUNC_3(struct inode *VAR_2, umode_t *VAR_3,
     struct posix_acl **VAR_4)
{
 umode_t VAR_5 = VAR_2->i_mode;
 int VAR_6;

 VAR_6 = FUNC_2(*VAR_4, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_6 == 0)
  *VAR_4 = ((void*)0);
 if (!FUNC_1(VAR_2->i_gid) &&
     !FUNC_0(VAR_2, VAR_0))
  VAR_5 &= ~VAR_1;
 *VAR_3 = VAR_5;
 return 0;
}
