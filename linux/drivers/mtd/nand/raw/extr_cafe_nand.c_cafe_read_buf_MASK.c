
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct nand_chip {int dummy; } ;
struct cafe_priv {scalar_t__ datalen; TYPE_1__* pdev; scalar_t__ mmio; scalar_t__ dmabuf; scalar_t__ usedma; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (int *,scalar_t__,int) ;
 struct cafe_priv* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_1, uint8_t *VAR_2, int VAR_3)
{
 struct cafe_priv *VAR_4 = FUNC_3(VAR_1);

 if (VAR_4->usedma)
  FUNC_1(VAR_2, VAR_4->dmabuf + VAR_4->datalen, VAR_3);
 else
  FUNC_2(VAR_2, VAR_4->mmio + VAR_0 + VAR_4->datalen, VAR_3);

 FUNC_0(&VAR_4->pdev->dev, "Copy 0x%x bytes from position 0x%x in read buffer.\n",
    VAR_3, VAR_4->datalen);
 VAR_4->datalen += VAR_3;
}
