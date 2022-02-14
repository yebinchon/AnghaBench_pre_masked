
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct mvumi_hba {int request_id_enabled; TYPE_1__* pdev; int base_addr; int regs; int handshake_page_phys; int handshake_page; int * instancet; void* max_sge; int io_seq; } ;
struct TYPE_5__ {int device; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mvumi_hba*) ;
 int FUNC_6 (struct mvumi_hba*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (struct mvumi_hba*) ;
 scalar_t__ FUNC_9 (struct mvumi_hba*) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_13(struct mvumi_hba *VAR_9)
{
 int VAR_10 = 0;

 if (FUNC_12(VAR_9->pdev, VAR_6)) {
  FUNC_1(&VAR_9->pdev->dev, "IO memory region busy!\n");
  return -VAR_0;
 }
 VAR_10 = FUNC_7(VAR_9->pdev, VAR_9->base_addr);
 if (VAR_10)
  goto fail_ioremap;

 switch (VAR_9->pdev->device) {
 case 129:
  VAR_9->instancet = &VAR_7;
  VAR_9->io_seq = 0;
  VAR_9->max_sge = VAR_5;
  VAR_9->request_id_enabled = 1;
  break;
 case 128:
  VAR_9->instancet = &VAR_8;
  VAR_9->io_seq = 0;
  VAR_9->max_sge = VAR_5;
  break;
 default:
  FUNC_1(&VAR_9->pdev->dev, "device 0x%x not supported!\n",
       VAR_9->pdev->device);
  VAR_9->instancet = ((void*)0);
  VAR_10 = -VAR_1;
  goto fail_alloc_mem;
 }
 FUNC_0(&VAR_9->pdev->dev, "device id : %04X is found.\n",
       VAR_9->pdev->device);
 VAR_10 = FUNC_6(VAR_9);
 if (VAR_10) {
  FUNC_1(&VAR_9->pdev->dev,
   "failed to allocate memory for reg\n");
  VAR_10 = -VAR_2;
  goto fail_alloc_mem;
 }
 VAR_9->handshake_page = FUNC_2(&VAR_9->pdev->dev,
   VAR_4, &VAR_9->handshake_page_phys, VAR_3);
 if (!VAR_9->handshake_page) {
  FUNC_1(&VAR_9->pdev->dev,
   "failed to allocate memory for handshake\n");
  VAR_10 = -VAR_2;
  goto fail_alloc_page;
 }

 if (FUNC_9(VAR_9)) {
  VAR_10 = -VAR_1;
  goto fail_ready_state;
 }
 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10)
  goto fail_ready_state;

 return 0;

fail_ready_state:
 FUNC_8(VAR_9);
 FUNC_3(&VAR_9->pdev->dev, VAR_4,
  VAR_9->handshake_page, VAR_9->handshake_page_phys);
fail_alloc_page:
 FUNC_4(VAR_9->regs);
fail_alloc_mem:
 FUNC_10(VAR_9->pdev, VAR_9->base_addr);
fail_ioremap:
 FUNC_11(VAR_9->pdev);

 return VAR_10;
}
