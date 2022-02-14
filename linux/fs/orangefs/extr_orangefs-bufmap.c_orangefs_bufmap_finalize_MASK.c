
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_bufmap {int dummy; } ;


 int VAR_0 ;
 struct orangefs_bufmap* VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2(void)
{
 struct orangefs_bufmap *VAR_4 = VAR_1;
 if (!VAR_4)
  return;
 FUNC_0(VAR_0, "orangefs_bufmap_finalize: called\n");
 FUNC_1(&VAR_3);
 FUNC_1(&VAR_2);
 FUNC_0(VAR_0,
       "orangefs_bufmap_finalize: exiting normally\n");
}
