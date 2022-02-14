
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quota_format_type {struct quota_format_type* qf_next; } ;


 int VAR_0 ;
 struct quota_format_type* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct quota_format_type *VAR_2)
{
 struct quota_format_type **VAR_3;

 FUNC_0(&VAR_0);
 for (VAR_3 = &VAR_1; *VAR_3 && *VAR_3 != VAR_2;
      VAR_3 = &(*VAR_3)->qf_next)
  ;
 if (*VAR_3)
  *VAR_3 = (*VAR_3)->qf_next;
 FUNC_1(&VAR_0);
}
