
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_chip {int controller; } ;
struct marvell_nfc {scalar_t__ regs; scalar_t__ use_dma; scalar_t__ dma_chan; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char const*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int,int,int ,int ) ;
 struct marvell_nfc* FUNC_4 (int ) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct nand_chip *VAR_5, int VAR_6,
          const char *VAR_7)
{
 struct marvell_nfc *VAR_8 = FUNC_4(VAR_5->controller);
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_8->regs + VAR_2, VAR_9,
      VAR_9 & VAR_6,
      VAR_3, VAR_4);

 if (VAR_10) {
  FUNC_0(VAR_8->dev, "Timeout on %s (NDSR: 0x%08x)\n",
   VAR_7, VAR_9);
  if (VAR_8->dma_chan)
   FUNC_1(VAR_8->dma_chan);
  return VAR_10;
 }





 if (VAR_8->use_dma && (FUNC_2(VAR_8->regs + VAR_0) & VAR_1))
  return 0;

 FUNC_5(VAR_6, VAR_8->regs + VAR_2);

 return 0;
}
