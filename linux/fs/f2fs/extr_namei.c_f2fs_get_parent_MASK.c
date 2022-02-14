
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct page {int dummy; } ;
struct dentry {int d_sb; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct page*) ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct page*) ;
 struct qstr FUNC_3 (char*,int) ;
 int FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned long) ;
 unsigned long FUNC_7 (int ,struct qstr*,struct page**) ;

struct dentry *FUNC_8(struct dentry *VAR_1)
{
 struct qstr VAR_2 = FUNC_3("..", 2);
 struct page *VAR_3;
 unsigned long VAR_4 = FUNC_7(FUNC_4(VAR_1), &VAR_2, &VAR_3);
 if (!VAR_4) {
  if (FUNC_2(VAR_3))
   return FUNC_0(VAR_3);
  return FUNC_1(-VAR_0);
 }
 return FUNC_5(FUNC_6(VAR_1->d_sb, VAR_4));
}
