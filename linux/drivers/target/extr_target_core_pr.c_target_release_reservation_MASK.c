
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int dev_reservation_flags; scalar_t__ dev_res_bin_isid; int * reservation_holder; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct se_device *VAR_2)
{
 VAR_2->reservation_holder = ((void*)0);
 VAR_2->dev_reservation_flags &= ~VAR_0;
 if (VAR_2->dev_reservation_flags & VAR_1) {
  VAR_2->dev_res_bin_isid = 0;
  VAR_2->dev_reservation_flags &= ~VAR_1;
 }
}
