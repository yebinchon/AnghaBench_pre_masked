
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct ocfs2_security_xattr_info {int value_len; int value; int name; } ;
struct inode {int i_sb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,struct inode*,struct qstr const*,int *,int *) ;
 int FUNC_3 (struct inode*,struct inode*,struct qstr const*,int *,int *,int *) ;

int FUNC_4(struct inode *VAR_2,
       struct inode *VAR_3,
       const struct qstr *VAR_4,
       struct ocfs2_security_xattr_info *VAR_5)
{

 if (!FUNC_1(FUNC_0(VAR_3->i_sb)))
  return -VAR_0;
 if (VAR_5)
  return FUNC_3(VAR_2, VAR_3, VAR_4,
       &VAR_5->name, &VAR_5->value,
       &VAR_5->value_len);

 return FUNC_2(VAR_2, VAR_3, VAR_4,
         &VAR_1, ((void*)0));
}
