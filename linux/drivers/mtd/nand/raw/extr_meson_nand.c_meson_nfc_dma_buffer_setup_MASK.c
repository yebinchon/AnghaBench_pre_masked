
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_chip {int dummy; } ;
struct meson_nfc {scalar_t__ reg_base; void* iaddr; void* daddr; int dev; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int ,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,char*) ;
 void* FUNC_5 (int ,void*,int,int) ;
 int FUNC_6 (int ,void*) ;
 int FUNC_7 (int ,void*,int,int) ;
 struct meson_nfc* FUNC_8 (struct nand_chip*) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct nand_chip *VAR_5, void *VAR_6,
          int VAR_7, void *VAR_8, int VAR_9,
          enum dma_data_direction VAR_10)
{
 struct meson_nfc *VAR_11 = FUNC_8(VAR_5);
 u32 VAR_12;
 int VAR_13 = 0;

 VAR_11->daddr = FUNC_5(VAR_11->dev, VAR_6, VAR_7, VAR_10);
 VAR_13 = FUNC_6(VAR_11->dev, VAR_11->daddr);
 if (VAR_13) {
  FUNC_4(VAR_11->dev, "DMA mapping error\n");
  return VAR_13;
 }
 VAR_12 = FUNC_1(VAR_1, VAR_11->daddr);
 FUNC_9(VAR_12, VAR_11->reg_base + VAR_4);

 VAR_12 = FUNC_0(VAR_0, VAR_11->daddr);
 FUNC_9(VAR_12, VAR_11->reg_base + VAR_4);

 if (VAR_8) {
  VAR_11->iaddr = FUNC_5(VAR_11->dev, VAR_8, VAR_9, VAR_10);
  VAR_13 = FUNC_6(VAR_11->dev, VAR_11->iaddr);
  if (VAR_13) {
   FUNC_4(VAR_11->dev, "DMA mapping error\n");
   FUNC_7(VAR_11->dev,
      VAR_11->daddr, VAR_7, VAR_10);
   return VAR_13;
  }
  VAR_12 = FUNC_3(VAR_3, VAR_11->iaddr);
  FUNC_9(VAR_12, VAR_11->reg_base + VAR_4);

  VAR_12 = FUNC_2(VAR_2, VAR_11->iaddr);
  FUNC_9(VAR_12, VAR_11->reg_base + VAR_4);
 }

 return VAR_13;
}
