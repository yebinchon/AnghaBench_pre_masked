
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_sb; } ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (char**,size_t*,int ,char const*,int ) ;
 struct dentry* FUNC_6 (struct dentry*) ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (struct dentry*,int *) ;

__attribute__((used)) static char *FUNC_9(struct dentry *VAR_1, size_t *VAR_2)
{
 FUNC_0(VAR_0);
 struct dentry *VAR_3 = FUNC_6(VAR_1);
 const char *VAR_4;
 char *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_8(VAR_3, &VAR_0);
 if (FUNC_3(VAR_4))
  return FUNC_1(VAR_4);

 VAR_6 = FUNC_5(&VAR_5, VAR_2, VAR_1->d_sb,
        VAR_4, FUNC_7(VAR_4));
 FUNC_4(&VAR_0);
 if (VAR_6)
  return FUNC_2(VAR_6);

 return VAR_5;
}
