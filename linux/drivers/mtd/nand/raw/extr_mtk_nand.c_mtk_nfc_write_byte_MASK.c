
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nand_chip {int dummy; } ;
struct mtk_nfc {TYPE_1__* caps; } ;
struct TYPE_2__ {int max_sector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct mtk_nfc*) ;
 struct mtk_nfc* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct mtk_nfc*,int ) ;
 int FUNC_3 (struct mtk_nfc*,int ) ;
 int FUNC_4 (struct mtk_nfc*,int ,int ) ;
 int FUNC_5 (struct mtk_nfc*,int,int ) ;
 int FUNC_6 (struct mtk_nfc*,int,int ) ;

__attribute__((used)) static void FUNC_7(struct nand_chip *VAR_11, u8 VAR_12)
{
 struct mtk_nfc *VAR_13 = FUNC_1(VAR_11);
 u32 VAR_14;

 VAR_14 = FUNC_2(VAR_13, VAR_8) & VAR_7;

 if (VAR_14 != VAR_6) {
  VAR_14 = FUNC_3(VAR_13, VAR_3) | VAR_0;
  FUNC_6(VAR_13, VAR_14, VAR_3);

  VAR_14 = VAR_13->caps->max_sector << VAR_2 | VAR_1;
  FUNC_5(VAR_13, VAR_14, VAR_4);

  FUNC_6(VAR_13, VAR_10, VAR_9);
 }

 FUNC_0(VAR_13);
 FUNC_4(VAR_13, VAR_12, VAR_5);
}
