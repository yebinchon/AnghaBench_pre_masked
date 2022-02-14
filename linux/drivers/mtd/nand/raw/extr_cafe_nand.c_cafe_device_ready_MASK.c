
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct nand_chip {int dummy; } ;
struct cafe_priv {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,char*,int,int,int,int) ;
 int FUNC_1 (struct cafe_priv*,int ) ;
 int FUNC_2 (struct cafe_priv*,int,int ) ;
 struct cafe_priv* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_4)
{
 struct cafe_priv *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = !!(FUNC_1(VAR_5, VAR_3) & 0x40000000);
 uint32_t VAR_7 = FUNC_1(VAR_5, VAR_2);

 FUNC_2(VAR_5, VAR_7, VAR_2);

 FUNC_0(&VAR_5->pdev->dev, "NAND device is%s ready, IRQ %x (%x) (%x,%x)\n",
  VAR_6?"":" not", VAR_7, FUNC_1(VAR_5, VAR_2),
  FUNC_1(VAR_5, VAR_0), FUNC_1(VAR_5, VAR_1));

 return VAR_6;
}
