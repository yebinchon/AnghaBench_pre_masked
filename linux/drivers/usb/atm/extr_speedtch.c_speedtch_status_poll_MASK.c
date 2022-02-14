
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct speedtch_instance_data {scalar_t__ poll_delay; int usbatm; int status_check_timer; int status_check_work; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct speedtch_instance_data* FUNC_1 (int ,struct timer_list*,int ) ;
 struct speedtch_instance_data* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_4)
{
 struct speedtch_instance_data *VAR_5 = FUNC_1(VAR_5, VAR_4,
                   VAR_3);

 FUNC_4(&VAR_5->status_check_work);


 if (VAR_5->poll_delay < VAR_0)
  FUNC_2(&VAR_5->status_check_timer, VAR_2 + FUNC_3(VAR_5->poll_delay));
 else
  FUNC_0(VAR_5->usbatm, "Too many failures - disabling line status polling\n");
}
