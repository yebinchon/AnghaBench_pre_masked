
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ current_state_id; } ;
struct isci_host {TYPE_1__ sm; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct isci_host*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;

void FUNC_2(struct isci_host *VAR_2, enum sci_status VAR_3)
{
 if (VAR_2->sm.current_state_id == VAR_1) {




  FUNC_1(&VAR_2->sm, VAR_0);

  FUNC_0(VAR_2, VAR_3);
 }
}
