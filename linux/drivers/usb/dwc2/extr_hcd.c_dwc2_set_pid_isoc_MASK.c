
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_host_chan {scalar_t__ speed; int multi_count; void* data_pid_start; scalar_t__ ep_is_in; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(struct dwc2_host_chan *VAR_5)
{

 if (VAR_5->speed == VAR_4) {
  if (VAR_5->ep_is_in) {
   if (VAR_5->multi_count == 1)
    VAR_5->data_pid_start = VAR_0;
   else if (VAR_5->multi_count == 2)
    VAR_5->data_pid_start = VAR_1;
   else
    VAR_5->data_pid_start = VAR_2;
  } else {
   if (VAR_5->multi_count == 1)
    VAR_5->data_pid_start = VAR_0;
   else
    VAR_5->data_pid_start = VAR_3;
  }
 } else {
  VAR_5->data_pid_start = VAR_0;
 }
}
