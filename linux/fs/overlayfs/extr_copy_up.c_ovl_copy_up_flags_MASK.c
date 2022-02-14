
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_flags; int d_sb; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (struct dentry*,int) ;
 int FUNC_6 (struct dentry*,struct dentry*,int) ;
 scalar_t__ FUNC_7 (struct dentry*) ;
 struct cred* FUNC_8 (int ) ;
 int FUNC_9 (struct cred const*) ;

int FUNC_10(struct dentry *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 const struct cred *VAR_5 = FUNC_8(VAR_2->d_sb);
 bool VAR_6 = (VAR_2->d_flags & VAR_0);






 if (FUNC_0(VAR_6 && FUNC_1(VAR_2)))
  return -VAR_1;

 while (!VAR_4) {
  struct dentry *VAR_7;
  struct dentry *VAR_8 = ((void*)0);

  if (FUNC_5(VAR_2, VAR_3))
   break;

  VAR_7 = FUNC_2(VAR_2);

  for (; !VAR_6;) {
   VAR_8 = FUNC_3(VAR_7);

   if (FUNC_7(VAR_8))
    break;

   FUNC_4(VAR_7);
   VAR_7 = VAR_8;
  }

  VAR_4 = FUNC_6(VAR_8, VAR_7, VAR_3);

  FUNC_4(VAR_8);
  FUNC_4(VAR_7);
 }
 FUNC_9(VAR_5);

 return VAR_4;
}
