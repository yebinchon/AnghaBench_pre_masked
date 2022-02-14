
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; char* name; } ;
struct ovl_lookup_data {TYPE_1__ name; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*,struct ovl_lookup_data*,char const*,size_t,int,char const*,struct dentry**) ;
 char* FUNC_5 (char const*,char) ;

__attribute__((used)) static int FUNC_6(struct dentry *VAR_1, struct ovl_lookup_data *VAR_2,
       struct dentry **VAR_3)
{

 size_t VAR_4 = VAR_2->name.len - 1;
 struct dentry *VAR_5 = ((void*)0);
 int VAR_6;

 if (VAR_2->name.name[0] != '/')
  return FUNC_4(VAR_1, VAR_2, VAR_2->name.name, VAR_2->name.len,
      0, "", VAR_3);

 while (!FUNC_0(VAR_1) && FUNC_2(VAR_1)) {
  const char *VAR_7 = VAR_2->name.name + VAR_2->name.len - VAR_4;
  const char *VAR_8 = FUNC_5(VAR_7, '/');
  size_t VAR_9 = VAR_8 - VAR_7;
  bool VAR_10 = !VAR_8[0];


  if (FUNC_1(VAR_7[-1] != '/'))
   return -VAR_0;

  VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_7, VAR_9,
     VAR_2->name.len - VAR_4, VAR_8, &VAR_1);
  FUNC_3(VAR_5);
  if (VAR_6)
   return VAR_6;
  VAR_5 = VAR_1;
  if (VAR_10)
   break;

  VAR_4 -= VAR_9 + 1;

  if (FUNC_1(VAR_4 >= VAR_2->name.len))
   return -VAR_0;
 }
 *VAR_3 = VAR_5;
 return 0;
}
