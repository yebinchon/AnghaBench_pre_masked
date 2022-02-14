
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_nfc {scalar_t__ regs; int dev; } ;
struct scatterlist {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct scatterlist*,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sunxi_nfc *VAR_2,
         enum dma_data_direction VAR_3,
         struct scatterlist *VAR_4)
{
 FUNC_0(VAR_2->dev, VAR_4, 1, VAR_3);
 FUNC_2(FUNC_1(VAR_2->regs + VAR_1) & ~VAR_0,
        VAR_2->regs + VAR_1);
}
