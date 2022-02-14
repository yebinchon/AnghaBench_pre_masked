
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct nand_chip {int dummy; } ;
struct cafe_priv {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct nand_chip*,int *,int) ;
 struct cafe_priv* FUNC_2 (struct nand_chip*) ;

__attribute__((used)) static uint8_t FUNC_3(struct nand_chip *VAR_0)
{
 struct cafe_priv *VAR_1 = FUNC_2(VAR_0);
 uint8_t VAR_2;

 FUNC_1(VAR_0, &VAR_2, 1);
 FUNC_0(&VAR_1->pdev->dev, "Read %02x\n", VAR_2);

 return VAR_2;
}
