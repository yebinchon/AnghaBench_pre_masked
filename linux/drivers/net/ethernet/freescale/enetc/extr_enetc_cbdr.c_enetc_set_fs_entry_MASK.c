
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enetc_si {TYPE_1__* pdev; } ;
struct enetc_cmd_rfse {int dummy; } ;
struct enetc_cbd {int cls; void** addr; void** opt; void* length; void* index; scalar_t__ cmd; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (void*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,...) ;
 void* FUNC_5 (int *,scalar_t__,int *,int ) ;
 int FUNC_6 (int *,scalar_t__,void*,int ) ;
 int FUNC_7 (struct enetc_si*,struct enetc_cbd*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (void*,struct enetc_cmd_rfse*,int) ;
 int FUNC_10 (int ) ;

int FUNC_11(struct enetc_si *VAR_3, struct enetc_cmd_rfse *VAR_4,
         int VAR_5)
{
 struct enetc_cbd VAR_6 = {.cmd = 0};
 dma_addr_t VAR_7, VAR_8;
 void *VAR_9, *VAR_10;
 int VAR_11;


 VAR_6.cmd = 0;
 VAR_6.cls = 4;
 VAR_6.index = FUNC_2(VAR_5);
 VAR_6.length = FUNC_2(sizeof(*VAR_4));
 VAR_6.opt[3] = FUNC_3(0);

 VAR_9 = FUNC_5(&VAR_3->pdev->dev, sizeof(*VAR_4) + VAR_2,
     &VAR_7, VAR_1);
 if (!VAR_9) {
  FUNC_4(&VAR_3->pdev->dev, "DMA mapping of RFS entry failed!\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_0(VAR_7, VAR_2);
 VAR_10 = FUNC_1(VAR_9, VAR_2);
 FUNC_9(VAR_10, VAR_4, sizeof(*VAR_4));

 VAR_6.addr[0] = FUNC_3(FUNC_8(VAR_8));
 VAR_6.addr[1] = FUNC_3(FUNC_10(VAR_8));

 VAR_11 = FUNC_7(VAR_3, &VAR_6);
 if (VAR_11)
  FUNC_4(&VAR_3->pdev->dev, "FS entry add failed (%d)!", VAR_11);

 FUNC_6(&VAR_3->pdev->dev, sizeof(*VAR_4) + VAR_2,
     VAR_9, VAR_7);

 return VAR_11;
}
