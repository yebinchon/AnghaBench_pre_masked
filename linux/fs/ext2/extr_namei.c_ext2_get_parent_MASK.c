
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct dentry {int d_sb; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 struct qstr FUNC_1 (char*,int) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long) ;
 unsigned long FUNC_5 (int ,struct qstr*) ;

struct dentry *FUNC_6(struct dentry *VAR_1)
{
 struct qstr VAR_2 = FUNC_1("..", 2);
 unsigned long VAR_3 = FUNC_5(FUNC_2(VAR_1), &VAR_2);
 if (!VAR_3)
  return FUNC_0(-VAR_0);
 return FUNC_3(FUNC_4(VAR_1->d_sb, VAR_3));
}
