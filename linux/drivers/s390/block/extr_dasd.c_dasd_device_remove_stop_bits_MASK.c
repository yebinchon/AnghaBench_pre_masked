
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int stopped; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct dasd_device *VAR_1, int VAR_2)
{
 VAR_1->stopped &= ~VAR_2;
 if (!VAR_1->stopped)
  FUNC_0(&VAR_0);
}
