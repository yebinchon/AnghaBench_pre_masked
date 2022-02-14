
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct brcmnand_host {struct brcmnand_controller* ctrl; } ;
struct brcmnand_controller {TYPE_1__* dma_desc; int dev; int dma_pa; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int status_valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct brcmnand_host*,int ) ;
 int FUNC_1 (struct brcmnand_host*,TYPE_1__*,int ,int ,int ,int ,int,int,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int *,int ,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct brcmnand_host *VAR_8, u64 VAR_9, u32 *VAR_10,
         u32 VAR_11, u8 VAR_12)
{
 struct brcmnand_controller *VAR_13 = VAR_8->ctrl;
 dma_addr_t VAR_14;
 int VAR_15 = VAR_12 == VAR_0 ? VAR_1 : VAR_2;

 VAR_14 = FUNC_3(VAR_13->dev, VAR_10, VAR_11, VAR_15);
 if (FUNC_4(VAR_13->dev, VAR_14)) {
  FUNC_2(VAR_13->dev, "unable to map buffer for DMA\n");
  return -VAR_4;
 }

 FUNC_1(VAR_8, VAR_13->dma_desc, VAR_9, VAR_14, VAR_11,
       VAR_12, 1, 1, 0);

 FUNC_0(VAR_8, VAR_13->dma_pa);

 FUNC_5(VAR_13->dev, VAR_14, VAR_11, VAR_15);

 if (VAR_13->dma_desc->status_valid & VAR_7)
  return -VAR_3;
 else if (VAR_13->dma_desc->status_valid & VAR_6)
  return -VAR_5;

 return 0;
}
