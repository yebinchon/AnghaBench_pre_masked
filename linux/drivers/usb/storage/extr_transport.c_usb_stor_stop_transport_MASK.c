
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int current_sg; int dflags; int current_urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct us_data*,char*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct us_data *VAR_2)
{






 if (FUNC_0(VAR_1, &VAR_2->dflags)) {
  FUNC_2(VAR_2, "-- cancelling URB\n");
  FUNC_3(VAR_2->current_urb);
 }


 if (FUNC_0(VAR_0, &VAR_2->dflags)) {
  FUNC_2(VAR_2, "-- cancelling sg request\n");
  FUNC_1(&VAR_2->current_sg);
 }
}
