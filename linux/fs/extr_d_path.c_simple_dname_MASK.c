
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char**,int*,char*,int) ;

char *FUNC_2(struct dentry *VAR_1, char *VAR_2, int VAR_3)
{
 char *VAR_4 = VAR_2 + VAR_3;

 if (FUNC_1(&VAR_4, &VAR_3, " (deleted)", 11) ||
     FUNC_1(&VAR_4, &VAR_3, VAR_1->d_name.name, VAR_1->d_name.len) ||
     FUNC_1(&VAR_4, &VAR_3, "/", 1))
  VAR_4 = FUNC_0(-VAR_0);
 return VAR_4;
}
