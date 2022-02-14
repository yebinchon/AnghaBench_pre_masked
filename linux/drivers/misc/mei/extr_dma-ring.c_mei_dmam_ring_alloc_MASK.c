
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int * dr_dscr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mei_device*,int *) ;
 int FUNC_1 (struct mei_device*) ;

int FUNC_2(struct mei_device *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (FUNC_0(VAR_2, &VAR_2->dr_dscr[VAR_3]))
   goto err;

 return 0;

err:
 FUNC_1(VAR_2);
 return -VAR_1;
}
