
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int current_state_id; } ;
struct isci_request {TYPE_1__ sm; int saved_rx_frame_index; struct isci_host* owning_controller; } ;
struct isci_host {int dummy; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;
typedef enum sci_base_request_states { ____Placeholder_sci_base_request_states } sci_base_request_states ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct isci_host*,int ) ;

enum sci_status FUNC_4(struct isci_request *VAR_5)
{
 enum sci_base_request_states VAR_6;
 struct isci_host *VAR_7 = VAR_5->owning_controller;

 VAR_6 = VAR_5->sm.current_state_id;
 if (FUNC_0(VAR_6 != VAR_1,
        "isci: request completion from wrong state (%s)\n",
        FUNC_1(VAR_6)))
  return VAR_0;

 if (VAR_5->saved_rx_frame_index != VAR_4)
  FUNC_3(VAR_7,
        VAR_5->saved_rx_frame_index);


 FUNC_2(&VAR_5->sm, VAR_2);
 return VAR_3;
}
