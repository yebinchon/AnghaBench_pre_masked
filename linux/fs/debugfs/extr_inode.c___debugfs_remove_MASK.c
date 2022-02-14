
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (int ,struct dentry*) ;
 int FUNC_8 (int ,struct dentry*) ;
 scalar_t__ FUNC_9 (struct dentry*) ;
 int FUNC_10 (int ,struct dentry*) ;
 int FUNC_11 (int ,struct dentry*) ;

__attribute__((used)) static int FUNC_12(struct dentry *VAR_0, struct dentry *VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_9(VAR_0)) {
  FUNC_5(VAR_0);
  if (FUNC_3(VAR_0)) {
   VAR_2 = FUNC_10(FUNC_2(VAR_1), VAR_0);
   if (!VAR_2)
    FUNC_7(FUNC_2(VAR_1), VAR_0);
  } else {
   FUNC_11(FUNC_2(VAR_1), VAR_0);
   FUNC_8(FUNC_2(VAR_1), VAR_0);
  }
  if (!VAR_2)
   FUNC_1(VAR_0);
  if (FUNC_4(VAR_0))
   FUNC_0(VAR_0);
  FUNC_6(VAR_0);
 }
 return VAR_2;
}
