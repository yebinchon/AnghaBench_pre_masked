
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtmc_file_data {int in_anchor; int submitted; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct usbtmc_file_data *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(&VAR_0->submitted, 1000);
 if (!VAR_1)
  FUNC_0(&VAR_0->submitted);
 FUNC_1(&VAR_0->in_anchor);
}
