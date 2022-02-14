
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table_set {int dummy; } ;
struct ctl_table_root {struct ctl_table_set* (* lookup ) (struct ctl_table_root*) ;struct ctl_table_set default_set; } ;


 struct ctl_table_set* FUNC_0 (struct ctl_table_root*) ;

__attribute__((used)) static struct ctl_table_set *
FUNC_1(struct ctl_table_root *VAR_0)
{
 struct ctl_table_set *VAR_1 = &VAR_0->default_set;
 if (VAR_0->lookup)
  VAR_1 = VAR_0->lookup(VAR_0);
 return VAR_1;
}
