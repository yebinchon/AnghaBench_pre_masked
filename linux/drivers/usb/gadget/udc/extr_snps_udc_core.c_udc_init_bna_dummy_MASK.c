
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udc_request {TYPE_1__* td_data; int td_phys; } ;
struct TYPE_2__ {int status; int next; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(struct udc_request *VAR_3)
{
 if (VAR_3) {

  VAR_3->td_data->status |= FUNC_1(VAR_0);

  VAR_3->td_data->next = VAR_3->td_phys;

  VAR_3->td_data->status
   = FUNC_0(VAR_3->td_data->status,
     VAR_2,
     VAR_1);




 }
}
