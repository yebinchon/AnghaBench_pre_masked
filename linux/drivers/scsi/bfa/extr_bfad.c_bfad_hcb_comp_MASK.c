
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_hal_comp {int comp; int status; } ;
typedef int bfa_status_t ;


 int FUNC_0 (int *) ;

void
FUNC_1(void *VAR_0, bfa_status_t VAR_1)
{
 struct bfad_hal_comp *VAR_2 = (struct bfad_hal_comp *)VAR_0;

 VAR_2->status = VAR_1;
 FUNC_0(&VAR_2->comp);
}
