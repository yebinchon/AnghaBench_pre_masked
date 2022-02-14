
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmnand_host {struct brcmnand_controller* ctrl; } ;
struct brcmnand_controller {int dma_pending; int dev; int dma_done; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct brcmnand_controller*,int ) ;
 int FUNC_2 (struct brcmnand_controller*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 unsigned long FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct brcmnand_host *VAR_5, dma_addr_t VAR_6)
{
 struct brcmnand_controller *VAR_7 = VAR_5->ctrl;
 unsigned long VAR_8 = FUNC_5(100);

 FUNC_2(VAR_7, VAR_2, FUNC_3(VAR_6));
 (void)FUNC_1(VAR_7, VAR_2);
 FUNC_2(VAR_7, VAR_3, FUNC_6(VAR_6));
 (void)FUNC_1(VAR_7, VAR_3);


 VAR_7->dma_pending = 1;
 FUNC_4();
 FUNC_2(VAR_7, VAR_0, 0x03);

 if (FUNC_7(&VAR_7->dma_done, VAR_8) <= 0) {
  FUNC_0(VAR_7->dev,
    "timeout waiting for DMA; status %#x, error status %#x\n",
    FUNC_1(VAR_7, VAR_4),
    FUNC_1(VAR_7, VAR_1));
 }
 VAR_7->dma_pending = 0;
 FUNC_2(VAR_7, VAR_0, 0);
}
