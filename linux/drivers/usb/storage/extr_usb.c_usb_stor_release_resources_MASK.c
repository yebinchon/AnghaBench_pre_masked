
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int current_urb; int extra; int (* extra_destructor ) (int ) ;scalar_t__ ctl_thread; int cmnd_ready; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct us_data*,char*) ;

__attribute__((used)) static void FUNC_6(struct us_data *VAR_0)
{





 FUNC_5(VAR_0, "-- sending exit command to thread\n");
 FUNC_0(&VAR_0->cmnd_ready);
 if (VAR_0->ctl_thread)
  FUNC_2(VAR_0->ctl_thread);


 if (VAR_0->extra_destructor) {
  FUNC_5(VAR_0, "-- calling extra_destructor()\n");
  VAR_0->extra_destructor(VAR_0->extra);
 }


 FUNC_1(VAR_0->extra);
 FUNC_4(VAR_0->current_urb);
}
