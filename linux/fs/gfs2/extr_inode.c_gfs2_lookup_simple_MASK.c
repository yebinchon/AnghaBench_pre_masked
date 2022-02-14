
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int ) ;
 struct inode* FUNC_1 (struct inode*,struct qstr*,int) ;
 int FUNC_2 (struct qstr*,char const*) ;

struct inode *FUNC_3(struct inode *VAR_1, const char *VAR_2)
{
 struct qstr VAR_3;
 struct inode *VAR_4;
 FUNC_2(&VAR_3, VAR_2);
 VAR_4 = FUNC_1(VAR_1, &VAR_3, 1);





 if (VAR_4 == ((void*)0))
  return FUNC_0(-VAR_0);
 else
  return VAR_4;
}
