
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utf8cursor {int dummy; } ;
struct tree {int dummy; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct utf8cursor*) ;
 scalar_t__ FUNC_2 (struct utf8cursor*,struct tree*,char*) ;

__attribute__((used)) static int FUNC_3(struct tree *VAR_2)
{
 char *VAR_3;
 char *VAR_4;
 int VAR_5;
 struct utf8cursor VAR_6;


 VAR_3 = VAR_0;
 VAR_4 = VAR_1;
 if (FUNC_2(&VAR_6, VAR_2, VAR_3))
  return -1;
 while ((VAR_5 = FUNC_1(&VAR_6)) > 0)
  if (VAR_5 != (unsigned char)*VAR_4++)
   return -1;
 if (VAR_5 < 0)
  return -1;
 if (*VAR_4 != 0)
  return -1;


 VAR_3 = VAR_0;

 VAR_3[FUNC_0(VAR_3) + 1] = -1;
 VAR_4 = VAR_1;
 if (FUNC_2(&VAR_6, VAR_2, VAR_3))
  return -1;
 while ((VAR_5 = FUNC_1(&VAR_6)) > 0)
  if (VAR_5 != (unsigned char)*VAR_4++)
   return -1;
 if (VAR_5 < 0)
  return -1;
 if (*VAR_4 != 0)
  return -1;

 return 0;
}
