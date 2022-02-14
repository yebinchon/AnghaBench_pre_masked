
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int * dr_dscr; } ;


 int VAR_0 ;
 int FUNC_0 (struct mei_device*,int *) ;

void FUNC_1(struct mei_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(VAR_1, &VAR_1->dr_dscr[VAR_2]);
}
