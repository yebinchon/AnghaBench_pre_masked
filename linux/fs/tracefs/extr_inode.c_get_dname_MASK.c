
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; char* name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 char* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static char *FUNC_2(struct dentry *VAR_1)
{
 const char *VAR_2;
 char *VAR_3;
 int VAR_4 = VAR_1->d_name.len;

 VAR_2 = VAR_1->d_name.name;
 VAR_3 = FUNC_0(VAR_4 + 1, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 FUNC_1(VAR_3, VAR_2, VAR_4);
 VAR_3[VAR_4] = 0;
 return VAR_3;
}
