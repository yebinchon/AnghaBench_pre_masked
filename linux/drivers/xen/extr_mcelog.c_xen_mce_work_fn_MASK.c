
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(struct work_struct *VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_2);


 VAR_5 = FUNC_0(VAR_1);
 if (VAR_5)
  FUNC_3("Failed to handle urgent mc_info queue, continue handling nonurgent mc_info queue anyway\n");


 VAR_5 = FUNC_0(VAR_0);
 if (VAR_5)
  FUNC_3("Failed to handle nonurgent mc_info queue\n");


 FUNC_4(&VAR_3);

 FUNC_2(&VAR_2);
}
