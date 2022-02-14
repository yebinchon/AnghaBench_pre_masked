
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnad_iocmd_comp {int comp; scalar_t__ comp_status; } ;
typedef enum bfa_status { ____Placeholder_bfa_status } bfa_status ;


 int FUNC_0 (int *) ;

void
FUNC_1(void *VAR_0, enum bfa_status VAR_1)
{
 struct bnad_iocmd_comp *VAR_2 =
   (struct bnad_iocmd_comp *)VAR_0;

 VAR_2->comp_status = (u32) VAR_1;
 FUNC_0(&VAR_2->comp);
}
