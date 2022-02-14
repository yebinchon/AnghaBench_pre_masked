
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dentry; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char**,int*,char*,int) ;
 int FUNC_2 (struct path const*,struct path const*,char**,int*) ;

__attribute__((used)) static int FUNC_3(const struct path *VAR_0,
        const struct path *VAR_1,
        char **VAR_2, int *VAR_3)
{
 FUNC_1(VAR_2, VAR_3, "\0", 1);
 if (FUNC_0(VAR_0->dentry)) {
  int VAR_4 = FUNC_1(VAR_2, VAR_3, " (deleted)", 10);
  if (VAR_4)
   return VAR_4;
 }

 return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
}
