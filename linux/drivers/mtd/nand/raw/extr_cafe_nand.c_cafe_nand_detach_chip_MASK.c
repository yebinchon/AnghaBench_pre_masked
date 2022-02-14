
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {int dummy; } ;
struct cafe_priv {int dmaaddr; int dmabuf; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int,int ,int ) ;
 struct cafe_priv* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_0)
{
 struct cafe_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->pdev->dev, 2112, VAR_1->dmabuf, VAR_1->dmaaddr);
}
