
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct meson_nfc {int iaddr; int dev; int daddr; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int ,int ,int,int) ;
 struct meson_nfc* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_0,
      int VAR_1, int VAR_2,
      enum dma_data_direction VAR_3)
{
 struct meson_nfc *VAR_4 = FUNC_1(VAR_0);

 FUNC_0(VAR_4->dev, VAR_4->daddr, VAR_2, VAR_3);
 if (VAR_1)
  FUNC_0(VAR_4->dev, VAR_4->iaddr, VAR_1, VAR_3);
}
