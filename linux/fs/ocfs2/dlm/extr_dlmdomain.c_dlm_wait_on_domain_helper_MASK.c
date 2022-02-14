
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ctxt {scalar_t__ dlm_state; } ;


 scalar_t__ VAR_0 ;
 struct dlm_ctxt* FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2)
{
 int VAR_3 = 0;
 struct dlm_ctxt *VAR_4 = ((void*)0);

 FUNC_1(&VAR_1);

 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4)
  VAR_3 = 1;
 else if (VAR_4->dlm_state == VAR_0)
  VAR_3 = 1;

 FUNC_2(&VAR_1);
 return VAR_3;
}
