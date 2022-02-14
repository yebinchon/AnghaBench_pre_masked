
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udc {int data_requests; int stp_requests; TYPE_1__* ep; } ;
struct TYPE_2__ {int td_stp_dma; int td_stp; int td_phys; int td; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(struct udc *VAR_1)
{
 FUNC_1(VAR_1->stp_requests, VAR_1->ep[VAR_0].td,
        VAR_1->ep[VAR_0].td_phys);
 FUNC_1(VAR_1->stp_requests, VAR_1->ep[VAR_0].td_stp,
        VAR_1->ep[VAR_0].td_stp_dma);
 FUNC_0(VAR_1->stp_requests);
 FUNC_0(VAR_1->data_requests);
}
