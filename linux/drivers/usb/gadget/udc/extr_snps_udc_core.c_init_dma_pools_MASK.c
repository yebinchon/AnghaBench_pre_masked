
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udc_stp_dma {int dummy; } ;
struct udc_data_dma {int dummy; } ;
struct udc {int * data_requests; int * stp_requests; TYPE_2__* ep; int dev; TYPE_1__* regs; } ;
struct TYPE_4__ {int td_stp_dma; struct udc_stp_dma* td_stp; struct udc_data_dma* td; int td_phys; int * dma; } ;
struct TYPE_3__ {int ctl; } ;


 int FUNC_0 (struct udc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 void* FUNC_1 (int *,int ,int *) ;
 void* FUNC_2 (char*,int ,int,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct udc_stp_dma*,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

int FUNC_5(struct udc *VAR_7)
{
 struct udc_stp_dma *VAR_8;
 struct udc_data_dma *VAR_9;
 int VAR_10;


 if (VAR_5) {
  VAR_4 = 0;
 } else {
  VAR_6 = 0;
  VAR_4 = 1;
 }


 VAR_7->data_requests = FUNC_2("data_requests", VAR_7->dev,
  sizeof(struct udc_data_dma), 0, 0);
 if (!VAR_7->data_requests) {
  FUNC_0(VAR_7, "can't get request data pool\n");
  return -VAR_0;
 }


 VAR_7->ep[VAR_2].dma = &VAR_7->regs->ctl;


 VAR_7->stp_requests = FUNC_2("setup requests", VAR_7->dev,
  sizeof(struct udc_stp_dma), 0, 0);
 if (!VAR_7->stp_requests) {
  FUNC_0(VAR_7, "can't get stp request pool\n");
  VAR_10 = -VAR_0;
  goto err_create_dma_pool;
 }

 VAR_8 = FUNC_1(VAR_7->stp_requests, VAR_1,
    &VAR_7->ep[VAR_3].td_stp_dma);
 if (!VAR_8) {
  VAR_10 = -VAR_0;
  goto err_alloc_dma;
 }
 VAR_7->ep[VAR_3].td_stp = VAR_8;


 VAR_9 = FUNC_1(VAR_7->stp_requests, VAR_1,
    &VAR_7->ep[VAR_3].td_phys);
 if (!VAR_9) {
  VAR_10 = -VAR_0;
  goto err_alloc_phys;
 }
 VAR_7->ep[VAR_3].td = VAR_9;
 return 0;

err_alloc_phys:
 FUNC_4(VAR_7->stp_requests, VAR_7->ep[VAR_3].td_stp,
        VAR_7->ep[VAR_3].td_stp_dma);
err_alloc_dma:
 FUNC_3(VAR_7->stp_requests);
 VAR_7->stp_requests = ((void*)0);
err_create_dma_pool:
 FUNC_3(VAR_7->data_requests);
 VAR_7->data_requests = ((void*)0);
 return VAR_10;
}
