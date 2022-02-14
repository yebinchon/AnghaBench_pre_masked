
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctl_table_set {int dummy; } ;
struct ctl_table_root {int dummy; } ;
struct ctl_table_header {struct ctl_table* ctl_table; struct ctl_table_set* set; struct ctl_dir* parent; struct ctl_table_root* root; } ;
struct ctl_table {char* procname; struct ctl_table_root* data; int mode; } ;
struct ctl_dir {int dummy; } ;
struct TYPE_2__ {struct ctl_table_set default_set; } ;


 scalar_t__ FUNC_0 (struct ctl_dir*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ctl_table_header*) ;
 struct ctl_table* FUNC_4 (struct ctl_table_header**,struct ctl_dir*,char const*,int ) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (struct ctl_dir*) ;
 TYPE_1__ VAR_0 ;
 struct ctl_dir* FUNC_9 (struct ctl_table_set*,struct ctl_dir*) ;

__attribute__((used)) static void FUNC_10(struct ctl_table_header *VAR_1)
{
 struct ctl_table_set *VAR_2 = &VAR_0.default_set;
 struct ctl_table_root *VAR_3 = VAR_1->root;
 struct ctl_dir *VAR_4 = VAR_1->parent;
 struct ctl_dir *VAR_5;
 struct ctl_table *VAR_6;

 if (VAR_1->set == VAR_2)
  return;

 VAR_5 = FUNC_9(VAR_2, VAR_4);
 if (FUNC_0(VAR_5))
  return;

 for (VAR_6 = VAR_1->ctl_table; VAR_6->procname; VAR_6++) {
  struct ctl_table_header *VAR_7;
  struct ctl_table *VAR_8;
  const char *VAR_9 = VAR_6->procname;

  VAR_8 = FUNC_4(&VAR_7, VAR_5, VAR_9, FUNC_7(VAR_9));
  if (VAR_8 &&
      ((FUNC_1(VAR_8->mode) && FUNC_1(VAR_6->mode)) ||
       (FUNC_2(VAR_8->mode) && (VAR_8->data == VAR_3)))) {
   FUNC_3(VAR_7);
  }
  else {
   FUNC_6("sysctl link missing during unregister: ");
   FUNC_8(VAR_4);
   FUNC_5("/%s\n", VAR_9);
  }
 }
}
