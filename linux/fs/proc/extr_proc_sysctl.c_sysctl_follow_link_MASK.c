
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table_set {int dummy; } ;
struct ctl_table_root {int dummy; } ;
struct ctl_table_header {int parent; } ;
struct ctl_table {char* procname; struct ctl_table_root* data; } ;
struct ctl_dir {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ctl_dir*) ;
 int FUNC_1 (struct ctl_dir*) ;
 struct ctl_table* FUNC_2 (struct ctl_table_header**,struct ctl_dir*,char const*,int ) ;
 struct ctl_table_set* FUNC_3 (struct ctl_table_root*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*) ;
 int VAR_1 ;
 int FUNC_7 (struct ctl_table_header*) ;
 scalar_t__ FUNC_8 (struct ctl_table_header*) ;
 struct ctl_dir* FUNC_9 (struct ctl_table_set*,int ) ;

__attribute__((used)) static int FUNC_10(struct ctl_table_header **VAR_2,
 struct ctl_table **VAR_3)
{
 struct ctl_table_header *VAR_4;
 struct ctl_table_root *VAR_5;
 struct ctl_table_set *VAR_6;
 struct ctl_table *VAR_7;
 struct ctl_dir *VAR_8;
 int VAR_9;

 VAR_9 = 0;
 FUNC_4(&VAR_1);
 VAR_5 = (*VAR_3)->data;
 VAR_6 = FUNC_3(VAR_5);
 VAR_8 = FUNC_9(VAR_6, (*VAR_2)->parent);
 if (FUNC_0(VAR_8))
  VAR_9 = FUNC_1(VAR_8);
 else {
  const char *VAR_10 = (*VAR_3)->procname;
  VAR_4 = ((void*)0);
  VAR_7 = FUNC_2(&VAR_4, VAR_8, VAR_10, FUNC_6(VAR_10));
  VAR_9 = -VAR_0;
  if (VAR_7 && FUNC_8(VAR_4)) {
   FUNC_7(*VAR_2);
   *VAR_2 = VAR_4;
   *VAR_3 = VAR_7;
   VAR_9 = 0;
  }
 }

 FUNC_5(&VAR_1);
 return VAR_9;
}
