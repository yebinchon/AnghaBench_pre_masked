
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nand_chip {int dummy; } ;
struct meson_nfc {scalar_t__ reg_base; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct nand_chip*,int,int ,int ) ;
 int FUNC_2 (struct nand_chip*,int *,int,int *,int ,int ) ;
 int FUNC_3 (struct meson_nfc*) ;
 int FUNC_4 (struct meson_nfc*,int) ;
 struct meson_nfc* FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_3, u8 *VAR_4, int VAR_5)
{
 struct meson_nfc *VAR_6 = FUNC_5(VAR_3);
 int VAR_7 = 0;
 u32 VAR_8;

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, ((void*)0),
      0, VAR_0);
 if (VAR_7)
  return VAR_7;

 VAR_8 = VAR_1 | (VAR_5 & FUNC_0(5, 0));
 FUNC_6(VAR_8, VAR_6->reg_base + VAR_2);

 FUNC_3(VAR_6);
 FUNC_4(VAR_6, 1000);
 FUNC_1(VAR_3, VAR_5, 0, VAR_0);

 return VAR_7;
}
