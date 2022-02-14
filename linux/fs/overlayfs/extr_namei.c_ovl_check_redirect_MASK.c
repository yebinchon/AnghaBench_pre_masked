
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int len; } ;
struct ovl_lookup_data {int stop; char* redirect; TYPE_1__ name; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (struct dentry*,size_t) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(struct dentry *VAR_0, struct ovl_lookup_data *VAR_1,
         size_t VAR_2, const char *VAR_3)
{
 int VAR_4;
 char *VAR_5;

 VAR_5 = FUNC_5(VAR_0, VAR_2 + FUNC_7(VAR_3));
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 if (VAR_5[0] == '/') {
  VAR_1->stop = 0;
 } else {
  VAR_4 = FUNC_7(VAR_5) + 1;
  FUNC_4(VAR_5 + VAR_2, VAR_5, VAR_4);
  FUNC_3(VAR_5, VAR_1->name.name, VAR_2);
 }

 FUNC_6(VAR_5, VAR_3);
 FUNC_2(VAR_1->redirect);
 VAR_1->redirect = VAR_5;
 VAR_1->name.name = VAR_1->redirect;
 VAR_1->name.len = FUNC_7(VAR_1->redirect);

 return 0;
}
