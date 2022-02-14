
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r852_device {scalar_t__ dma_stage; scalar_t__ phys_bounce_buffer; int dma_error; scalar_t__ phys_dma_addr; scalar_t__ dma_dir; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,scalar_t__,int ,int ) ;
 int FUNC_3 (struct r852_device*,int ) ;
 int FUNC_4 (struct r852_device*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct r852_device *VAR_7, int VAR_8)
{
 FUNC_0(VAR_7->dma_stage == 0);

 FUNC_4(VAR_7, VAR_4,
   FUNC_3(VAR_7, VAR_4));

 FUNC_4(VAR_7, VAR_6, 0);
 FUNC_4(VAR_7, VAR_3, 0);


 FUNC_4(VAR_7, VAR_2,
  FUNC_1(VAR_7->phys_bounce_buffer));
 FUNC_3(VAR_7, VAR_2);

 VAR_7->dma_error = VAR_8;
 VAR_7->dma_stage = 0;

 if (VAR_7->phys_dma_addr && VAR_7->phys_dma_addr != VAR_7->phys_bounce_buffer)
  FUNC_2(&VAR_7->pci_dev->dev, VAR_7->phys_dma_addr,
   VAR_5,
   VAR_7->dma_dir ? VAR_0 : VAR_1);
}
