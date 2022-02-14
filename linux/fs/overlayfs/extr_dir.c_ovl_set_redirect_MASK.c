
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (struct dentry*,int ,int ,char const*,int ,int) ;
 char* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*,char const*) ;
 int FUNC_6 (struct dentry*) ;
 char* FUNC_7 (struct dentry*,int) ;
 int FUNC_8 (struct dentry*,int) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char const*) ;

__attribute__((used)) static int FUNC_13(struct dentry *VAR_2, bool VAR_3)
{
 int VAR_4;
 const char *VAR_5 = FUNC_4(VAR_2);
 bool VAR_6 = FUNC_8(VAR_2, VAR_3);

 if (VAR_5 && (!VAR_6 || VAR_5[0] == '/'))
  return 0;

 VAR_5 = FUNC_7(VAR_2, VAR_6);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_4 = FUNC_3(VAR_2, FUNC_6(VAR_2),
     VAR_1,
     VAR_5, FUNC_12(VAR_5), -VAR_0);
 if (!VAR_4) {
  FUNC_10(&VAR_2->d_lock);
  FUNC_5(VAR_2, VAR_5);
  FUNC_11(&VAR_2->d_lock);
 } else {
  FUNC_2(VAR_5);
  FUNC_9("overlayfs: failed to set redirect (%i)\n",
        VAR_4);

  VAR_4 = -VAR_0;
 }
 return VAR_4;
}
