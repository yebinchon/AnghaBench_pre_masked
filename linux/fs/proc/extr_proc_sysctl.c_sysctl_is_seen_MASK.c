
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table_set {int (* is_seen ) (struct ctl_table_set*) ;} ;
struct ctl_table_header {scalar_t__ unregistering; struct ctl_table_set* set; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ctl_table_set*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct ctl_table_header *VAR_1)
{
 struct ctl_table_set *VAR_2 = VAR_1->set;
 int VAR_3;
 FUNC_0(&VAR_0);
 if (VAR_1->unregistering)
  VAR_3 = 0;
 else if (!VAR_2->is_seen)
  VAR_3 = 1;
 else
  VAR_3 = VAR_2->is_seen(VAR_2);
 FUNC_1(&VAR_0);
 return VAR_3;
}
